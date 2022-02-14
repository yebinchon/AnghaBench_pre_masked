
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static
int FUNC_2(uint16_t VAR_6, uint16_t VAR_7)
{
 int VAR_8 = FUNC_0(VAR_6,7,0x3), VAR_9 = FUNC_0(VAR_6,4,0x1), VAR_10 = FUNC_0(VAR_7,15,0x1), VAR_11 = FUNC_0(VAR_7,14,0x1);

 if (VAR_8 == 0 || VAR_8 == 0x3) {

  return VAR_1;
 }


 if (VAR_8 == 0x1 && VAR_9 == 1 && FUNC_1(VAR_6,VAR_7) == VAR_5 && VAR_10 == 1)
  return VAR_2;


 if (VAR_8 == 0x2 && VAR_9 == 0 && FUNC_1(VAR_6,VAR_7) == VAR_5 && VAR_11 == 1)
  return VAR_3;

 if (FUNC_1(VAR_6,VAR_7) != VAR_4 && VAR_10 == 0)
  return VAR_0;

 return VAR_1;
}
