
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_file {int * fi_access; scalar_t__* fi_fds; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nfs4_file *VAR_1, int VAR_2)
{
 FUNC_0(!(VAR_1->fi_fds[VAR_2] || VAR_1->fi_fds[VAR_0]));
 FUNC_1(&VAR_1->fi_access[VAR_2]);
}
