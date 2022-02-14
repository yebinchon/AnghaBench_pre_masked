
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__* VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(void)
{
 if(FUNC_0(VAR_1))
 {
  uint* VAR_3 = &VAR_0;

  FUNC_4(*VAR_3);
  *VAR_3 = VAR_2[7];
  VAR_2[7] = FUNC_1(VAR_2[7] + FUNC_2());
  return;
 }
 FUNC_3();
}
