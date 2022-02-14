
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int HCLK_Frequency; } ;
typedef TYPE_1__ RCC_ClocksTypeDef ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (int) ;
 int VAR_5 ;

void FUNC_9(void)
{
  RCC_ClocksTypeDef VAR_6;
  FUNC_7(VAR_4);


  FUNC_6(&VAR_6);
  FUNC_8(VAR_6.HCLK_Frequency / 1000);


  FUNC_5 (VAR_5, 0);


  FUNC_0();


  FUNC_1();


  if(FUNC_2(VAR_0, VAR_3) & 1)
  {
    VAR_2 |= VAR_1;
  }


  FUNC_4(VAR_0);


  FUNC_3();
}
