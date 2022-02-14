
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* usage; } ;
struct hid_parser {scalar_t__ collection_stack_ptr; int* collection_stack; TYPE_2__* device; TYPE_1__ local; } ;
struct hid_collection {unsigned int type; unsigned int usage; scalar_t__ level; } ;
struct TYPE_4__ {int maxcollection; int collection_size; int maxapplication; struct hid_collection* collection; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct hid_collection*) ;
 struct hid_collection* FUNC_2 (int,int ) ;
 int FUNC_3 (struct hid_collection*,struct hid_collection*,int) ;
 int FUNC_4 (struct hid_collection*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct hid_parser *VAR_3, unsigned VAR_4)
{
 struct hid_collection *VAR_5;
 unsigned VAR_6;

 VAR_6 = VAR_3->local.usage[0];

 if (VAR_3->collection_stack_ptr == VAR_2) {
  FUNC_0("collection stack overflow\n");
  return -1;
 }

 if (VAR_3->device->maxcollection == VAR_3->device->collection_size) {
  VAR_5 = FUNC_2(sizeof(struct hid_collection) *
    VAR_3->device->collection_size * 2, VAR_0);
  if (VAR_5 == ((void*)0)) {
   FUNC_0("failed to reallocate collection array\n");
   return -1;
  }
  FUNC_3(VAR_5, VAR_3->device->collection,
   sizeof(struct hid_collection) *
   VAR_3->device->collection_size);
  FUNC_4(VAR_5 + VAR_3->device->collection_size, 0,
   sizeof(struct hid_collection) *
   VAR_3->device->collection_size);
  FUNC_1(VAR_3->device->collection);
  VAR_3->device->collection = VAR_5;
  VAR_3->device->collection_size *= 2;
 }

 VAR_3->collection_stack[VAR_3->collection_stack_ptr++] =
  VAR_3->device->maxcollection;

 VAR_5 = VAR_3->device->collection +
  VAR_3->device->maxcollection++;
 VAR_5->type = VAR_4;
 VAR_5->usage = VAR_6;
 VAR_5->level = VAR_3->collection_stack_ptr - 1;

 if (VAR_4 == VAR_1)
  VAR_3->device->maxapplication++;

 return 0;
}
