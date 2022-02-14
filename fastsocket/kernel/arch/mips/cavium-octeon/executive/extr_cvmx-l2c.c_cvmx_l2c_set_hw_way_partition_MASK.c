
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 () ;

int FUNC_5(uint32_t VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = 0xff;

 if (FUNC_0(VAR_2) || FUNC_0(VAR_1)) {
  if (FUNC_4())
   VAR_4 = 0xf;
 } else if (FUNC_4())
  VAR_4 = 0x3;

 VAR_3 &= VAR_4;


 if (VAR_3 == VAR_4)
  return -1;

 if (((VAR_3 | FUNC_1()) & VAR_4) ==
     VAR_4)
  return -1;

 FUNC_3(VAR_0,
         (FUNC_2(VAR_0) & ~0xFF) | VAR_3);
 return 0;
}
