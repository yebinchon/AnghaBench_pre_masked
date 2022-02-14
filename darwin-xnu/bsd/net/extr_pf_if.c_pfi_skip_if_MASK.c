
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfi_kif {char* pfik_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char const*,int) ;

int
FUNC_3(const char *VAR_1, struct pfi_kif *VAR_2)
{
 int VAR_3;

 if (VAR_1 == ((void*)0) || !*VAR_1)
  return (0);
 if (FUNC_0(VAR_2->pfik_name, VAR_1) == 0)
  return (0);
 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 < 1 || VAR_3 >= VAR_0)
  return (1);
 if (VAR_1[VAR_3-1] >= '0' && VAR_1[VAR_3-1] <= '9')
  return (1);
 if (FUNC_2(VAR_2->pfik_name, VAR_1, VAR_3))
  return (1);
 return (VAR_2->pfik_name[VAR_3] < '0' || VAR_2->pfik_name[VAR_3] > '9');
}
