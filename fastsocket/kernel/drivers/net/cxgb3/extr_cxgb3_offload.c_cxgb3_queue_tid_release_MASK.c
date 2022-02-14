
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t3cdev {int dummy; } ;
struct t3c_tid_entry {void* ctx; int * client; } ;
struct TYPE_2__ {struct t3c_tid_entry* tid_tab; } ;
struct t3c_data {int tid_release_lock; int tid_release_task; scalar_t__ release_list_incomplete; struct t3c_tid_entry* tid_release_list; TYPE_1__ tid_maps; } ;


 struct t3c_data* FUNC_0 (struct t3cdev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct t3cdev *VAR_0, unsigned int VAR_1)
{
 struct t3c_data *VAR_2 = FUNC_0(VAR_0);
 struct t3c_tid_entry *VAR_3 = &VAR_2->tid_maps.tid_tab[VAR_1];

 FUNC_2(&VAR_2->tid_release_lock);
 VAR_3->ctx = (void *)VAR_2->tid_release_list;
 VAR_3->client = ((void*)0);
 VAR_2->tid_release_list = VAR_3;
 if (!VAR_3->ctx || VAR_2->release_list_incomplete)
  FUNC_1(&VAR_2->tid_release_task);
 FUNC_3(&VAR_2->tid_release_lock);
}
