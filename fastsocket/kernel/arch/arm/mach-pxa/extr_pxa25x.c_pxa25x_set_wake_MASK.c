
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,unsigned int) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_4, unsigned int VAR_5)
{
 int VAR_6 = FUNC_0(VAR_4);
 uint32_t VAR_7 = 0;

 if (VAR_6 >= 0 && VAR_6 < 85)
  return FUNC_1(VAR_6, VAR_5);

 if (VAR_4 == VAR_1) {
  VAR_7 = VAR_3;
  goto set_pwer;
 }

 return -VAR_0;

set_pwer:
 if (VAR_5)
  VAR_2 |= VAR_7;
 else
  VAR_2 &=~VAR_7;

 return 0;
}
