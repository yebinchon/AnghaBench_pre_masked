
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_desc {int entry_number; int contents; int read_exec_only; int seg_not_present; int lm; int useable; int limit_in_pages; int seg_32bit; int limit; int base_addr; } ;
struct desc_struct {int type; int l; int avl; int p; int g; int d; } ;


 int FUNC_0 (struct desc_struct const*) ;
 int FUNC_1 (struct desc_struct const*) ;
 int FUNC_2 (struct user_desc*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct user_desc *VAR_0, int VAR_1,
      const struct desc_struct *VAR_2)

{
 FUNC_2(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->entry_number = VAR_1;
 VAR_0->base_addr = FUNC_0(VAR_2);
 VAR_0->limit = FUNC_1(VAR_2);
 VAR_0->seg_32bit = VAR_2->d;
 VAR_0->contents = VAR_2->type >> 2;
 VAR_0->read_exec_only = !(VAR_2->type & 2);
 VAR_0->limit_in_pages = VAR_2->g;
 VAR_0->seg_not_present = !VAR_2->p;
 VAR_0->useable = VAR_2->avl;



}
