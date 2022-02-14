
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int config_file_t ;
typedef int buf ;


 int FUNC_0 (int *,char const*,char*) ;
 int FUNC_1 (char*,int,char*,int) ;

void FUNC_2(config_file_t *VAR_0, const char *VAR_1, int VAR_2)
{
   char VAR_3[128];

   VAR_3[0] = '\0';
   FUNC_1(VAR_3, sizeof(VAR_3), "%d", VAR_2);
   FUNC_0(VAR_0, VAR_1, VAR_3);
}
