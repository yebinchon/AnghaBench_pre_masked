
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* ctx; } ;
union active_open_entry {union active_open_entry* next; TYPE_1__ t3c_tid; } ;
struct tid_info {int atid_lock; int atids_in_use; union active_open_entry* afree; } ;
struct t3cdev {int dummy; } ;
struct TYPE_4__ {struct tid_info tid_maps; } ;


 TYPE_2__* FUNC_0 (struct t3cdev*) ;
 union active_open_entry* FUNC_1 (struct tid_info*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void *FUNC_4(struct t3cdev *VAR_0, int VAR_1)
{
 struct tid_info *VAR_2 = &(FUNC_0(VAR_0))->tid_maps;
 union active_open_entry *VAR_3 = FUNC_1(VAR_2, VAR_1);
 void *VAR_4 = VAR_3->t3c_tid.ctx;

 FUNC_2(&VAR_2->atid_lock);
 VAR_3->next = VAR_2->afree;
 VAR_2->afree = VAR_3;
 VAR_2->atids_in_use--;
 FUNC_3(&VAR_2->atid_lock);

 return VAR_4;
}
