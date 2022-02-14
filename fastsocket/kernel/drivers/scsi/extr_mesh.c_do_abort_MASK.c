
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mesh_state {int n_msgout; int aborting; int stat; int * msgout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mesh_state*,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct mesh_state *VAR_2)
{
 VAR_2->msgout[0] = VAR_0;
 VAR_2->n_msgout = 1;
 VAR_2->aborting = 1;
 VAR_2->stat = VAR_1;
 FUNC_0(VAR_2, "abort", 0);
}
