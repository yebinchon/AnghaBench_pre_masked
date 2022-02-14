
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_rmdir_args {int a_context; int a_cnp; int a_vp; int a_dvp; } ;
struct vnop_remove_args {int a_context; scalar_t__ a_flags; int a_cnp; int a_vp; int a_dvp; } ;


 int FUNC_0 (struct vnop_remove_args*) ;

__attribute__((used)) static int
FUNC_1(struct vnop_rmdir_args *VAR_0)






{
 struct vnop_remove_args VAR_1;

 VAR_1.a_dvp = VAR_0->a_dvp;
 VAR_1.a_vp = VAR_0->a_vp;
 VAR_1.a_cnp = VAR_0->a_cnp;
 VAR_1.a_flags = 0;
 VAR_1.a_context = VAR_0->a_context;

 return FUNC_0(&VAR_1);
}
