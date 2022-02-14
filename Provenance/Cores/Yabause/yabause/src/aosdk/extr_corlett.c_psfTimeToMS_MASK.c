
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;

u32 FUNC_3(char *VAR_0)
{
 int VAR_1, VAR_2=0;
 u32 VAR_3=0;
 char VAR_4[100];

 FUNC_2(VAR_4,VAR_0,100);
 VAR_4[99]=0;

 for (VAR_1=(int)FUNC_1(VAR_4); VAR_1>=0; VAR_1--)
 {
  if (VAR_4[VAR_1]=='.' || VAR_4[VAR_1]==',')
  {
   VAR_3=FUNC_0(VAR_4+VAR_1+1);
   VAR_4[VAR_1]=0;
  }
  else if (VAR_4[VAR_1]==':')
  {
   if(VAR_2==0)
   {
    VAR_3+=FUNC_0(VAR_4+VAR_1+1)*10;
   }
   else if(VAR_2==1)
   {
    VAR_3+=FUNC_0(VAR_4+VAR_1+(VAR_1?1:0))*10*60;
   }

   VAR_2++;
   VAR_4[VAR_1]=0;
  }
  else if (VAR_1==0)
  {
   if(VAR_2==0)
   {
    VAR_3+=FUNC_0(VAR_4+VAR_1)*10;
   }
   else if(VAR_2==1)
   {
    VAR_3+=FUNC_0(VAR_4+VAR_1)*10*60;
   }
   else if(VAR_2==2)
   {
    VAR_3+=FUNC_0(VAR_4+VAR_1)*10*60*60;
   }
  }
 }

 VAR_3*=100;
 return(VAR_3);
}
