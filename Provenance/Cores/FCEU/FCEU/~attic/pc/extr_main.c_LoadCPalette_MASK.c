
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int FILE ;


 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 char* VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int,int *) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(void)
{
 uint8 VAR_1[192];
 FILE *VAR_2;

 if(!(VAR_2=FUNC_0(VAR_0,"rb")))
 {
  FUNC_4(" Error loading custom palette from file: %s\n",VAR_0);
  return;
 }
 FUNC_3(VAR_1,1,192,VAR_2);
 FUNC_1(VAR_1);
 FUNC_2(VAR_2);
}
