
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_file {int * fi_access; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct nfs4_file*,int) ;

__attribute__((used)) static void FUNC_3(struct nfs4_file *VAR_1, int VAR_2)
{
 if (FUNC_0(&VAR_1->fi_access[VAR_2])) {
  FUNC_2(VAR_1, VAR_2);
  if (FUNC_1(&VAR_1->fi_access[1 - VAR_2]) == 0)
   FUNC_2(VAR_1, VAR_0);
 }
}
