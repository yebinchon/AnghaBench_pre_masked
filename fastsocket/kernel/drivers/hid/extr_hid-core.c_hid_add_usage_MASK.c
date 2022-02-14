
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t usage_index; unsigned int* usage; int * collection_index; } ;
struct hid_parser {int collection_stack_ptr; TYPE_1__ local; int * collection_stack; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct hid_parser *VAR_1, unsigned VAR_2)
{
 if (VAR_1->local.usage_index >= VAR_0) {
  FUNC_0("usage index exceeded\n");
  return -1;
 }
 VAR_1->local.usage[VAR_1->local.usage_index] = VAR_2;
 VAR_1->local.collection_index[VAR_1->local.usage_index] =
  VAR_1->collection_stack_ptr ?
  VAR_1->collection_stack[VAR_1->collection_stack_ptr - 1] : 0;
 VAR_1->local.usage_index++;
 return 0;
}
