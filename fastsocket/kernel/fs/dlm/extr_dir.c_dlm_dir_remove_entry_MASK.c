
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct dlm_ls {TYPE_1__* ls_dirtbl; } ;
struct dlm_direntry {int master_nodeid; int list; } ;
struct TYPE_2__ {int lock; } ;


 size_t FUNC_0 (struct dlm_ls*,char*,int) ;
 int FUNC_1 (struct dlm_direntry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dlm_ls*,char*,int,...) ;
 struct dlm_direntry* FUNC_4 (struct dlm_ls*,char*,int,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct dlm_ls *VAR_0, int VAR_1, char *VAR_2, int VAR_3)
{
 struct dlm_direntry *VAR_4;
 uint32_t VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_3);

 FUNC_5(&VAR_0->ls_dirtbl[VAR_5].lock);

 VAR_4 = FUNC_4(VAR_0, VAR_2, VAR_3, VAR_5);

 if (!VAR_4) {
  FUNC_3(VAR_0, "remove fr %u none", VAR_1);
  goto out;
 }

 if (VAR_4->master_nodeid != VAR_1) {
  FUNC_3(VAR_0, "remove fr %u ID %u", VAR_1, VAR_4->master_nodeid);
  goto out;
 }

 FUNC_2(&VAR_4->list);
 FUNC_1(VAR_4);
 out:
 FUNC_6(&VAR_0->ls_dirtbl[VAR_5].lock);
}
