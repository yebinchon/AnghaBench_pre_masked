
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_rsb {int dummy; } ;
struct dlm_ls {TYPE_1__* ls_rsbtbl; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (struct dlm_ls*,char*,int,int,unsigned int,struct dlm_rsb**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dlm_ls *VAR_0, char *VAR_1, int VAR_2, int VAR_3,
        unsigned int VAR_4, struct dlm_rsb **VAR_5)
{
 int VAR_6;
 FUNC_1(&VAR_0->ls_rsbtbl[VAR_3].lock);
 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_2(&VAR_0->ls_rsbtbl[VAR_3].lock);
 return VAR_6;
}
