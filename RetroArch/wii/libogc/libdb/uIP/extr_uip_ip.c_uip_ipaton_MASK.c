
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8_t ;
typedef int u32_t ;
struct in_addr {int s_addr; } ;
typedef int s32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char) ;

s32_t FUNC_6(const u8_t *VAR_0,struct in_addr *VAR_1)
{
 u32_t VAR_2;
 u8_t VAR_3;
 u32_t VAR_4[4];
 u32_t *VAR_5 = VAR_4;
 int VAR_6,VAR_7;

 VAR_3 = *VAR_0;
 for(;;) {
  if(!FUNC_2(VAR_3)) return 0;

  VAR_2 = 0; VAR_6 = 10;
  if(VAR_3=='0') {
   VAR_3 = *++VAR_0;
   if(VAR_3=='x' || VAR_3=='X')
    VAR_6 = 16, VAR_3 = *++VAR_0;
   else
    VAR_6 = 8;
  }
  for(;;) {
   if(FUNC_2(VAR_3)) {
    VAR_2 = (VAR_2*VAR_6)+(int)(VAR_3-'0');
    VAR_3 = *++VAR_0;
   } else if(VAR_6==16 && FUNC_5(VAR_3)) {
    VAR_2 = (VAR_2<<4)|(int)(VAR_3+10-(FUNC_3(VAR_3)?'a':'A'));
    VAR_3 = *++VAR_0;
   } else
    break;
  }
  if(VAR_3=='.') {
   if(VAR_5>=VAR_4+3) return 0;
   *VAR_5++ = VAR_2;
   VAR_3 = *++VAR_0;
  } else
   break;
 }

 if(VAR_3!='\0' && (!FUNC_1(VAR_3) || FUNC_4(VAR_3))) return 0;

 VAR_7 = VAR_5-VAR_4+1;
 switch(VAR_7) {
  case 0:
   return 0;
  case 1:
   break;
  case 2:
   if(VAR_2>0x00ffffff) return 0;

   VAR_2 |= (VAR_4[0]<<24);
   break;
  case 3:
   if(VAR_2>0x0000ffff) return 0;

   VAR_2 |= (VAR_4[0]<<24)|(VAR_4[1]<<16);
   break;
  case 4:
   if(VAR_2>0x000000ff) return 0;

   VAR_2 |= (VAR_4[0]<<24)|(VAR_4[1]<<16)|(VAR_4[2]<<8);
   break;
 }
 if(VAR_1)
  VAR_1->s_addr = FUNC_0(VAR_2);

 return 1;
}
