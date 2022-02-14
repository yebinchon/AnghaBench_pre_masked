
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;

uint64
FUNC_2(void)
{
 static uint32 VAR_2 = 0;

 uint64 VAR_3 = 0;
 uint64 VAR_4 = 0;
 uint64 VAR_5 = 0;
 uint64 VAR_6 = 0;

 VAR_2++;

 if (VAR_0)
 {




  VAR_6 = FUNC_0() & 0xFF;
  VAR_3 = VAR_3 | (VAR_6 << 48);







  VAR_5 = VAR_1 & 0xFFFFFF;
  VAR_3 = VAR_3 | (VAR_5 << 24);





  if (FUNC_1())
  {
   VAR_3 = VAR_3 | (1 << 23);
  }
 }





 VAR_4 = VAR_2 & 0x1FFFFFF;
 VAR_3 = VAR_3 | VAR_4;

 return VAR_3;
}
