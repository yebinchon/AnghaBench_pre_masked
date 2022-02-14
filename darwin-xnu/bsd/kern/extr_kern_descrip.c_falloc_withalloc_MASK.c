
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct fileproc {int dummy; } ;
typedef int proc_t ;
typedef int fp_allocfn_t ;


 int FUNC_0 (int ,struct fileproc**,int*,int ,int ,void*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(proc_t VAR_0, struct fileproc **VAR_1, int *VAR_2,
    vfs_context_t VAR_3, fp_allocfn_t VAR_4, void *VAR_5)
{
 int VAR_6;

 FUNC_1(VAR_0);
 VAR_6 = FUNC_0(VAR_0,
     VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 1);
 FUNC_2(VAR_0);

 return (VAR_6);
}
