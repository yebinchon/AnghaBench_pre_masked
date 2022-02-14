
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int spq_prod_idx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);






 FUNC_3();

 FUNC_1(VAR_1, VAR_0 + FUNC_2(VAR_2),
   VAR_1->spq_prod_idx);
 FUNC_4();
}
