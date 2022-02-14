
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pohmelfs_sb {int crypto_thread_lock; int crypto_thread_num; } ;
struct pohmelfs_crypto_thread {int eng; int thread_entry; scalar_t__ thread; struct pohmelfs_sb* psb; } ;


 int FUNC_0 (struct pohmelfs_crypto_thread*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct pohmelfs_crypto_thread *VAR_0)
{
 struct pohmelfs_sb *VAR_1 = VAR_0->psb;

 if (VAR_0->thread)
  FUNC_1(VAR_0->thread);

 FUNC_3(&VAR_1->crypto_thread_lock);
 FUNC_2(&VAR_0->thread_entry);
 VAR_1->crypto_thread_num--;
 FUNC_4(&VAR_1->crypto_thread_lock);

 FUNC_5(&VAR_0->eng);
 FUNC_6(&VAR_0->eng);
 FUNC_0(VAR_0);
}
