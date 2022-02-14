
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ubsan_violation {int * member_4; struct ubsan_ptroverflow_desc* ptroverflow; int member_2; int member_1; int member_0; } ;
struct ubsan_ptroverflow_desc {int loc; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubsan_violation*,int) ;

void FUNC_1(struct ubsan_ptroverflow_desc *VAR_1, uint64_t VAR_2, uint64_t VAR_3)
{
 struct ubsan_violation VAR_4 = { &VAR_0, VAR_2, VAR_3, .ptroverflow = VAR_1, VAR_1->loc };
 FUNC_0(&VAR_4, 1);
}
