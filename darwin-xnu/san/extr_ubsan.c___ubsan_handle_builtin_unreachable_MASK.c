
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubsan_violation {int * member_4; struct ubsan_unreachable_desc* unreachable; int member_2; int member_1; int member_0; } ;
struct ubsan_unreachable_desc {int loc; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubsan_violation*,int) ;

void
FUNC_1(struct ubsan_unreachable_desc *VAR_1)
{
 struct ubsan_violation VAR_2 = { &VAR_0, 0, 0, .unreachable = VAR_1, VAR_1->loc };
 FUNC_0(&VAR_2, 1);
}
