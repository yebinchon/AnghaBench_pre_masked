
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static
int FUNC_2(uint32_t VAR_7)
{
 int VAR_8 = FUNC_1(VAR_7,25,0x1), VAR_9 = FUNC_1(VAR_7,24,0x1), VAR_10 = FUNC_1(VAR_7,20,0x1F), VAR_11 = FUNC_1(VAR_7,15,0x1), VAR_12 = FUNC_1(VAR_7,14,0x1);

 if (VAR_8 == 1) {
  if (VAR_9 == 0)
   return VAR_0;
  return VAR_2;
 } else {

  if (VAR_10 == 0x0B && FUNC_0(VAR_7) == VAR_6 && VAR_11 == 1)
   return VAR_3;


  if (VAR_10 == 0x12 && FUNC_0(VAR_7) == VAR_6 && VAR_12 == 1)
   return VAR_4;

  if (FUNC_0(VAR_7) != VAR_5 && VAR_11 == 0)
   return VAR_1;
 }

 return VAR_2;
}
