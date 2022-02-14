
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct pdb_cpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char const*) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct pdb_cpu *VAR_3, const char *VAR_4)
{
  char VAR_5[32];
  if (!FUNC_1(VAR_5, sizeof(VAR_5), VAR_4)) {
    FUNC_2("step_all: missing arg\n");
    return VAR_1;
  }

  VAR_2 = FUNC_0(VAR_5);
  return VAR_0;
}
