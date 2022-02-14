
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8 ;


 int FUNC_0 (int *,char*,int) ;
 int VAR_0 ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,char) ;

uint8 *FUNC_8(void)
{
 uint8 *VAR_1;
 uint8 *VAR_2;

 VAR_1=FUNC_1("HOME");

 if(VAR_1)
 {
  VAR_2=FUNC_2(FUNC_6(VAR_1)+1+FUNC_6("./fceultra"));
  FUNC_5(VAR_2,VAR_1);
  FUNC_4(VAR_2,"/.fceultra");
 }
 else
 {
  VAR_2=FUNC_2(1);
  VAR_2[0]=0;

  FUNC_3("%s\n",VAR_2);
 }
 return(VAR_2);
}
