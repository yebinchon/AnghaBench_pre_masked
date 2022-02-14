
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_mkdir_args {int * a_vpp; int a_vap; int a_cnp; int a_dvp; int a_context; } ;
typedef int * nfsnode_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int *,int **) ;

int
FUNC_3(
 struct vnop_mkdir_args *VAR_1)







{
 nfsnode_t VAR_2 = ((void*)0);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1->a_context, FUNC_1(VAR_1->a_dvp), VAR_1->a_cnp, VAR_1->a_vap,
   VAR_0, ((void*)0), &VAR_2);
 if (!VAR_3)
  *VAR_1->a_vpp = FUNC_0(VAR_2);
 return (VAR_3);
}
