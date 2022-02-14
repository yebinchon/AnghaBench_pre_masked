
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union listen_entry {union listen_entry* next; } ;
struct tid_info {int stid_lock; int stids_in_use; union listen_entry* sfree; } ;
struct t3cdev {int dummy; } ;
struct TYPE_2__ {struct tid_info tid_maps; } ;


 TYPE_1__* FUNC_0 (struct t3cdev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 union listen_entry* FUNC_3 (struct tid_info*,int) ;

void FUNC_4(struct t3cdev *VAR_0, int VAR_1)
{
 struct tid_info *VAR_2 = &(FUNC_0(VAR_0))->tid_maps;
 union listen_entry *VAR_3 = FUNC_3(VAR_2, VAR_1);

 FUNC_1(&VAR_2->stid_lock);
 VAR_3->next = VAR_2->sfree;
 VAR_2->sfree = VAR_3;
 VAR_2->stids_in_use--;
 FUNC_2(&VAR_2->stid_lock);
}
