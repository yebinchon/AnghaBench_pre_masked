
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tid_info {int tids_in_use; TYPE_1__* tid_tab; } ;
struct t3cdev {int dummy; } ;
struct cxgb3_client {int dummy; } ;
struct TYPE_4__ {struct tid_info tid_maps; } ;
struct TYPE_3__ {void* ctx; struct cxgb3_client* client; } ;


 TYPE_2__* FUNC_0 (struct t3cdev*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct t3cdev *VAR_0, struct cxgb3_client *VAR_1,
        void *VAR_2, unsigned int VAR_3)
{
 struct tid_info *VAR_4 = &(FUNC_0(VAR_0))->tid_maps;

 VAR_4->tid_tab[VAR_3].client = VAR_1;
 VAR_4->tid_tab[VAR_3].ctx = VAR_2;
 FUNC_1(&VAR_4->tids_in_use);
}
