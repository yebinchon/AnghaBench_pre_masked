
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct pdb_cpu {int icount; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int,char const*) ;

__attribute__((used)) static int FUNC_2(struct pdb_cpu *VAR_1, const char *VAR_2)
{
  char VAR_3[32];
  if (FUNC_1(VAR_3, sizeof(VAR_3), VAR_2))
    VAR_1->icount = FUNC_0(VAR_3);
  return VAR_0;
}
