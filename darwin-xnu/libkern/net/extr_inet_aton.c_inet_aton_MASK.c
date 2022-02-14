
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct in_addr {int s_addr; } ;
typedef int in_addr_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char) ;
 unsigned long FUNC_2 (char const*,char**,int ) ;

int
FUNC_3(const char *VAR_1, struct in_addr *VAR_2)
{
 u_long VAR_3[4];
 in_addr_t VAR_4 = 0;
 const char *VAR_5;
 char *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = (const char *)VAR_1;
 VAR_8 = 0;





 VAR_7 = 0;
 while (!VAR_7) {
  unsigned long VAR_9;

  VAR_9 = FUNC_2(VAR_5, &VAR_6, 0);

  if (VAR_9 == VAR_0 || (VAR_9 == 0 && VAR_6 == VAR_5))
   return (0);

  VAR_4 = (in_addr_t)VAR_9;







  if (VAR_6 == VAR_5)
   return (0);
  VAR_3[VAR_8] = VAR_4;
  VAR_5 = VAR_6;


  switch (*VAR_5) {
  case '.' :


   if (VAR_8 == 3)
    return (0);
   VAR_8++;
   VAR_5++;
   break;

  case '\0':
   VAR_7 = 1;
   break;

  default:
   if (FUNC_1((unsigned char)*VAR_5)) {
    VAR_7 = 1;
    break;
   } else {


    return (0);
   }
  }

 }


 switch (VAR_8) {
 case 0:





  break;
 case 1:
  if (VAR_4 > 0xffffff || VAR_3[0] > 0xff)
   return (0);
  VAR_4 |= VAR_3[0] << 24;
  break;

 case 2:
  if (VAR_4 > 0xffff || VAR_3[0] > 0xff || VAR_3[1] > 0xff)
   return (0);
  VAR_4 |= (VAR_3[0] << 24) | (VAR_3[1] << 16);
  break;

 case 3:
  if (VAR_4 > 0xff || VAR_3[0] > 0xff || VAR_3[1] > 0xff ||
      VAR_3[2] > 0xff)
   return (0);
  VAR_4 |= (VAR_3[0] << 24) | (VAR_3[1] << 16) | (VAR_3[2] << 8);
  break;
 }

 if (VAR_2 != ((void*)0))
  VAR_2->s_addr = FUNC_0(VAR_4);
 return (1);
}
