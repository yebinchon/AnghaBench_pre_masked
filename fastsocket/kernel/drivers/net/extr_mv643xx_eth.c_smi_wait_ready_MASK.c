
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv643xx_eth_shared_private {scalar_t__ err_interrupt; int smi_busy_wait; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mv643xx_eth_shared_private*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct mv643xx_eth_shared_private *VAR_2)
{
 if (VAR_2->err_interrupt == VAR_1) {
  int VAR_3;

  for (VAR_3 = 0; !FUNC_2(VAR_2); VAR_3++) {
   if (VAR_3 == 10)
    return -VAR_0;
   FUNC_1(10);
  }

  return 0;
 }

 if (!FUNC_2(VAR_2)) {
  FUNC_3(VAR_2->smi_busy_wait, FUNC_2(VAR_2),
       FUNC_0(100));
  if (!FUNC_2(VAR_2))
   return -VAR_0;
 }

 return 0;
}
