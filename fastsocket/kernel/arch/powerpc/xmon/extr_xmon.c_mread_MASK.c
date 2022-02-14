
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(unsigned long VAR_2, void *VAR_3, int VAR_4)
{
 volatile int VAR_5;
 char *VAR_6, *VAR_7;

 VAR_5 = 0;
 if (FUNC_1(VAR_0) == 0) {
  VAR_1 = 1;
  FUNC_2();
  VAR_6 = (char *)VAR_2;
  VAR_7 = (char *)VAR_3;
  switch (VAR_4) {
  case 2:
   *(u16 *)VAR_7 = *(u16 *)VAR_6;
   break;
  case 4:
   *(u32 *)VAR_7 = *(u32 *)VAR_6;
   break;
  case 8:
   *(u64 *)VAR_7 = *(u64 *)VAR_6;
   break;
  default:
   for( ; VAR_5 < VAR_4; ++VAR_5) {
    *VAR_7++ = *VAR_6++;
    FUNC_2();
   }
  }
  FUNC_2();

  FUNC_0(200);
  VAR_5 = VAR_4;
 }
 VAR_1 = 0;
 return VAR_5;
}
