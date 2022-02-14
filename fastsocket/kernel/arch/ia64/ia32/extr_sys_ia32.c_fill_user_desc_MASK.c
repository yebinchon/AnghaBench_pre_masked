
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ia32_user_desc {int entry_number; int read_exec_only; int seg_not_present; int useable; int limit_in_pages; int contents; int seg_32bit; int limit; int base_addr; } ;
struct desc_struct {int dummy; } ;


 int FUNC_0 (struct desc_struct const*) ;
 int FUNC_1 (struct desc_struct const*) ;
 int FUNC_2 (struct desc_struct const*) ;
 int FUNC_3 (struct desc_struct const*) ;
 int FUNC_4 (struct desc_struct const*) ;
 int FUNC_5 (struct desc_struct const*) ;
 int FUNC_6 (struct desc_struct const*) ;
 int FUNC_7 (struct desc_struct const*) ;

__attribute__((used)) static void FUNC_8(struct ia32_user_desc *VAR_0, int VAR_1,
  const struct desc_struct *VAR_2)
{
 VAR_0->entry_number = VAR_1;
 VAR_0->base_addr = FUNC_1(VAR_2);
 VAR_0->limit = FUNC_3(VAR_2);
 VAR_0->seg_32bit = FUNC_0(VAR_2);
 VAR_0->contents = FUNC_2(VAR_2);
 VAR_0->read_exec_only = !FUNC_7(VAR_2);
 VAR_0->limit_in_pages = FUNC_4(VAR_2);
 VAR_0->seg_not_present = !FUNC_5(VAR_2);
 VAR_0->useable = FUNC_6(VAR_2);
}
