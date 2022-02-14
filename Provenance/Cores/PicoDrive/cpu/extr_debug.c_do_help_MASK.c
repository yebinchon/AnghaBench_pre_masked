
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pdb_cpu {int dummy; } ;
struct TYPE_3__ {char* cmd; char* help; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct pdb_cpu *VAR_2, const char *VAR_3)
{
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
    FUNC_1("%s %s\n", VAR_1[VAR_4].cmd, VAR_1[VAR_4].help);
  return VAR_0;
}
