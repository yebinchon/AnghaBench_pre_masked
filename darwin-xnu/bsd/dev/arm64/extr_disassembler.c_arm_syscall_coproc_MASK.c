
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static
int FUNC_4(uint32_t VAR_2)
{


 int VAR_3 = FUNC_0(VAR_2,20,0x3F), VAR_4 = FUNC_0(VAR_2,8,0xF), VAR_5 = FUNC_0(VAR_2,4,0x1);

 if ((VAR_3 & 0x3E) == 0 || (VAR_3 & 0x30) == 0x30) {

  return VAR_1;
 }

 if ((VAR_4 & 0xE) == 0xA) {


  if ((VAR_3 & 0x20) == 0 && (VAR_3 & 0x3A) != 0)
   return FUNC_2(VAR_2);

  if ((VAR_3 & 0x3E) == 0x04)
   return FUNC_1(VAR_2);

  if ((VAR_3 & 0x30) == 0x20) {

   if (VAR_5 == 0) {

    return VAR_0;
   } else {
    return FUNC_3(VAR_2);
   }
  }
 }

 return VAR_1;
}
