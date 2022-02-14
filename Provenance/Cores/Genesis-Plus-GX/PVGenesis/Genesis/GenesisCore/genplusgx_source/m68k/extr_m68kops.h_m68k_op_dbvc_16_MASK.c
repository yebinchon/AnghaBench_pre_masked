
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void)
{
  if(FUNC_0())
  {
    uint* VAR_4 = &VAR_2;
    uint VAR_5 = FUNC_1(*VAR_4 - 1);

    *VAR_4 = FUNC_2(*VAR_4) | VAR_5;
    if(VAR_5 != 0xffff)
    {
      uint VAR_6 = FUNC_3();
      VAR_3 -= 2;
      FUNC_5(VAR_6);
      FUNC_4(VAR_1);
      return;
    }
    VAR_3 += 2;
    FUNC_4(VAR_0);
    return;
  }
  VAR_3 += 2;
}
