
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_parser {int collection_stack_ptr; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct hid_parser *VAR_0)
{
 if (!VAR_0->collection_stack_ptr) {
  FUNC_0("collection stack underflow\n");
  return -1;
 }
 VAR_0->collection_stack_ptr--;
 return 0;
}
