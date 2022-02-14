
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 scalar_t__* VAR_0 ;
 char* VAR_1 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int) ;

uint8 *FUNC_3(void)
{
 int VAR_2=0;
 uint8 *VAR_3 = 0;

 if(VAR_1)
  for(VAR_2=FUNC_1(VAR_1);VAR_2>=0;VAR_2--)
  {
   if(VAR_1[VAR_2]=='/' || VAR_1[VAR_2]=='\\')
   {
    VAR_3 = FUNC_0(VAR_2 + 1);
    FUNC_2(VAR_3,VAR_1,VAR_2);
    break;
   }
  }

 if(!VAR_3) { VAR_2=0; VAR_3 = FUNC_0(1); }

 VAR_0[VAR_2]=0;
}
