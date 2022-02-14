
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp_path ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char const*,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,int) ;
 scalar_t__ FUNC_3 (int ,char) ;

void FUNC_4(char *VAR_1, const char *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
   char VAR_5[VAR_0];
   char *VAR_6 = ((void*)0);

   VAR_5[0] = '\0';

   FUNC_2(VAR_5, VAR_2, sizeof(VAR_5));
   if ((VAR_6 = (char*)FUNC_3(FUNC_1(VAR_5), '.')))
      *VAR_6 = '\0';

   FUNC_0(VAR_1, VAR_5, VAR_3, VAR_4);
}
