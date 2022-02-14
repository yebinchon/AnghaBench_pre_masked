
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int cmng; } ;


 int FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct bnx2x*,int,int) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*,int *,int ) ;

void FUNC_5(struct bnx2x *VAR_2)
{
 int VAR_3 = FUNC_3(VAR_2);

 if (VAR_3 != VAR_0) {
  FUNC_2(VAR_2, 0, VAR_3);
  FUNC_4(VAR_2, &VAR_2->cmng, FUNC_0(VAR_2));
 } else {

  FUNC_1(VAR_1,
     "single function mode without fairness\n");
 }
}
