
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ company; int companyid; } ;
struct TYPE_3__ {char* copyright; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int) ;
 char* FUNC_3 (char*,char*) ;

char *FUNC_4(void)
{
  char *VAR_3;
  int VAR_4;
  char VAR_5[10];

  for (VAR_4 = 3; VAR_4 < 8; VAR_4++)
  {
    VAR_5[VAR_4 - 3] = VAR_2.copyright[VAR_4];
  }
  VAR_5[5] = 0;




  VAR_3 = FUNC_3 (VAR_5, "-");
  if (VAR_3 != ((void*)0))
  {
    VAR_3++;
    FUNC_0 (VAR_5, VAR_3);
  }


  for (VAR_4 = FUNC_1 (VAR_5) - 1; VAR_4 >= 0; VAR_4--)
    if (VAR_5[VAR_4] == 32)
      VAR_5[VAR_4] = 0;

  if (FUNC_1 (VAR_5) == 0)
    return (char *)VAR_1[VAR_0 - 1].company;

  for (VAR_4 = 0; VAR_4 < VAR_0 - 1; VAR_4++)
  {
    if (!(FUNC_2 (VAR_5, VAR_1[VAR_4].companyid, FUNC_1 (VAR_5))))
      return (char *)VAR_1[VAR_4].company;
  }

  return (char *)VAR_1[VAR_0 - 1].company;
}
