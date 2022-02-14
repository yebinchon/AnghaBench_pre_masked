
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ FunctionalState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ) ;

uint32_t FUNC_5(uint16_t VAR_6, FunctionalState VAR_7)
{
  uint16_t VAR_8 = 0;

  FUNC_4(FUNC_2(VAR_6));
  FUNC_4(FUNC_3(VAR_7));


  VAR_8 = FUNC_0(VAR_6, VAR_3);

  if (VAR_7 != VAR_0)
  {

    VAR_8 |= VAR_4;
  }
  else
  {

    VAR_8 &= (uint16_t)(~(uint16_t)VAR_4);
  }

  if(FUNC_1(VAR_6, VAR_3, VAR_8) != (uint32_t)VAR_5)
  {
    return VAR_2;
  }
  else
  {

    return VAR_1;
  }
}
