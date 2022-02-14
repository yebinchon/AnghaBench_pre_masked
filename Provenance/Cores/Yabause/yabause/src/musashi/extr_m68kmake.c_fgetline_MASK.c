
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * FUNC_0 (char*,int,int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;

int FUNC_3(char* VAR_1, int VAR_2, FILE* VAR_3)
{
 int VAR_4;

 if(FUNC_0(VAR_1, VAR_2, VAR_3) == ((void*)0))
  return -1;
 if(VAR_1[0] == '\r')
  FUNC_1(VAR_1, VAR_1 + 1, VAR_2 - 1);

 VAR_4 = FUNC_2(VAR_1);
 while(VAR_4 && (VAR_1[VAR_4-1] == '\r' || VAR_1[VAR_4-1] == '\n'))
  VAR_4--;
 VAR_1[VAR_4] = 0;
 VAR_0++;

 return VAR_4;
}
