
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

void FUNC_3(char *VAR_1)
{
 char VAR_2[VAR_0];
 int VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_3 = 0;
 VAR_4 = FUNC_2(VAR_1) - 1;
 VAR_5 = 0;
 while (VAR_3 < FUNC_2(VAR_1) && FUNC_0(VAR_1[VAR_3])) VAR_3++;
 while (VAR_4 >= 0 && FUNC_0(VAR_1[VAR_4])) VAR_4--;

 for (VAR_6 = VAR_3; VAR_6 <= VAR_4; ++VAR_6)
  VAR_2[VAR_5++] = VAR_1[VAR_6];

 VAR_2[VAR_5] = '\0';
 FUNC_1(VAR_1, VAR_2);

 return;
}
