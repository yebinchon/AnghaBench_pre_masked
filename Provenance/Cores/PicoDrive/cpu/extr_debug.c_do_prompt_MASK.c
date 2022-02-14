
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdb_cpu {int dummy; } ;
typedef int prev ;


 int FUNC_0 (struct pdb_cpu*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct pdb_cpu *VAR_0)
{
  static char VAR_1[128];
  int VAR_2;

  while (1) {
    char *VAR_3, *VAR_4;

    VAR_3 = FUNC_2("(pdb) ");
    if (VAR_3 == ((void*)0))
      break;
    if (VAR_3[0] == 0)
      VAR_4 = VAR_1;
    else {
      VAR_4 = VAR_3;
      FUNC_3(VAR_1, VAR_3, sizeof(VAR_1));
    }

    VAR_2 = FUNC_0(VAR_0, VAR_4);
    FUNC_1(VAR_3);

    if (VAR_2 == 0)
      break;
  }
}
