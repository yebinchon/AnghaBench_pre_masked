
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static
int FUNC_4(uint32_t VAR_3)
{
 int VAR_4 = FUNC_3(VAR_3,20,0x7), VAR_5 = FUNC_3(VAR_3,5,0x7);


 if ((VAR_4 == 0 && (VAR_5 & 0x1) == 0) || (VAR_4 == 0 && VAR_5 == 0x5)) {
  if (FUNC_2(VAR_3) == VAR_2)
   return VAR_1;
 }

 if (FUNC_1(VAR_3) != VAR_2 && FUNC_0(VAR_3) != VAR_2)
  return VAR_0;

 return VAR_1;
}
