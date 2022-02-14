
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,int,int,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;

char *FUNC_9(const char *VAR_1)
{
 char *VAR_2;
 FILE *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_1, "r");
 if (VAR_3 == ((void*)0)) {
  FUNC_7("No such file");
  FUNC_1(-1);
 }

 FUNC_5(VAR_3, 0, VAR_0);
 VAR_4 = FUNC_6(VAR_3);
 FUNC_8(VAR_3);

 VAR_2 = (char *)FUNC_0(1, sizeof(char) * VAR_4 + 1);
 FUNC_4(VAR_2, VAR_4, 1, VAR_3);
 VAR_2[VAR_4] = '\0';

 FUNC_2(VAR_3);
 return VAR_2;
}
