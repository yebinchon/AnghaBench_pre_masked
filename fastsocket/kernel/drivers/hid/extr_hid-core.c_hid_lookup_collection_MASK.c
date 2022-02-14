
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hid_parser {int collection_stack_ptr; size_t* collection_stack; TYPE_1__* device; } ;
struct TYPE_4__ {unsigned int type; int usage; } ;
struct TYPE_3__ {TYPE_2__* collection; } ;



__attribute__((used)) static unsigned FUNC_0(struct hid_parser *VAR_0, unsigned VAR_1)
{
 int VAR_2;
 for (VAR_2 = VAR_0->collection_stack_ptr - 1; VAR_2 >= 0; VAR_2--)
  if (VAR_0->device->collection[VAR_0->collection_stack[VAR_2]].type == VAR_1)
   return VAR_0->device->collection[VAR_0->collection_stack[VAR_2]].usage;
 return 0;
}
