
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char** paths; } ;


 int FUNC_0 (char*,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*,int const,char*,char*,char*) ;
 int FUNC_2 (char const*,int*,char*,int*) ;

int FUNC_3(const char *VAR_1,
        const int VAR_2, int *VAR_3,
        char *VAR_4, const int VAR_5)
{
    int VAR_6;
    int VAR_7;
 char VAR_8[128];

    VAR_7 = VAR_2;
 if ((VAR_6=FUNC_2(VAR_1,
  &VAR_7, VAR_8, VAR_3)) != 0)
 {
  return VAR_6;
 }
 if ((VAR_6=FUNC_0(VAR_8, VAR_7)) != 0)
 {
  return VAR_6;
 }

 FUNC_1(VAR_4, VAR_5, "%s/data/%s",
            VAR_0.paths[*VAR_3], VAR_8);
    return 0;
}
