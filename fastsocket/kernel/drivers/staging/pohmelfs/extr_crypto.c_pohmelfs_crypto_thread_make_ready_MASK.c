
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pohmelfs_sb {int wait; int crypto_thread_lock; int crypto_ready_list; } ;
struct pohmelfs_crypto_thread {int thread_entry; int * trans; int * page; struct pohmelfs_sb* psb; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct pohmelfs_crypto_thread *VAR_0)
{
 struct pohmelfs_sb *VAR_1 = VAR_0->psb;

 VAR_0->page = ((void*)0);
 VAR_0->trans = ((void*)0);

 FUNC_1(&VAR_1->crypto_thread_lock);
 FUNC_0(&VAR_0->thread_entry, &VAR_1->crypto_ready_list);
 FUNC_2(&VAR_1->crypto_thread_lock);
 FUNC_3(&VAR_1->wait);
}
