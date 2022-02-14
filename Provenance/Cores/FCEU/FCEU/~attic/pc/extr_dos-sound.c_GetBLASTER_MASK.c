
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int*) ;
 int FUNC_3 (char) ;

int FUNC_4(void)
{
 int VAR_5=0;
 char *VAR_6;

 if(!(VAR_6=FUNC_0("BLASTER")))
 {
  FUNC_1(" Error getting BLASTER environment variable.");
  return(0);
 }

 while(*VAR_6)
 {
  switch(FUNC_3(*VAR_6))
  {
   case 'A': VAR_5|=(FUNC_2(VAR_6+1,"%x",&VAR_3)==1)?1:0;break;
   case 'I': VAR_5|=(FUNC_2(VAR_6+1,"%d",&VAR_2)==1)?2:0;break;
   case 'D': VAR_5|=(FUNC_2(VAR_6+1,"%d",&VAR_0)==1)?4:0;break;
   case 'H': VAR_5|=(FUNC_2(VAR_6+1,"%d",&VAR_1)==1)?8:0;break;
  }
  VAR_6++;
 }

 if((VAR_5^7)&7 || VAR_0>=4 || (VAR_1<=4 && VAR_5&8) || VAR_2>15)
 {
  FUNC_1(" Invalid or incomplete BLASTER environment variable.");
  return(0);
 }
 if(!(VAR_5&8))
  VAR_4=0;
 return(1);
}
