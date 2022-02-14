
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pohmelfs_sb {int mcache_lock; int mcache_gen; } ;
struct pohmelfs_mcache {unsigned int size; int gen; int start; void* data; int refcnt; int err; int complete; } ;


 int VAR_0 ;
 struct pohmelfs_mcache* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 struct pohmelfs_mcache* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct pohmelfs_mcache*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct pohmelfs_sb*,struct pohmelfs_mcache*) ;
 int VAR_2 ;

struct pohmelfs_mcache *FUNC_9(struct pohmelfs_sb *VAR_3, u64 VAR_4,
  unsigned int VAR_5, void *VAR_6)
{
 struct pohmelfs_mcache *VAR_7;
 int VAR_8 = -VAR_0;

 VAR_7 = FUNC_4(VAR_2, VAR_1);
 if (!VAR_7)
  goto err_out_exit;

 FUNC_3(&VAR_7->complete);
 VAR_7->err = 0;
 FUNC_2(&VAR_7->refcnt, 1);
 VAR_7->data = VAR_6;
 VAR_7->start = VAR_4;
 VAR_7->size = VAR_5;
 VAR_7->gen = FUNC_1(&VAR_3->mcache_gen);

 FUNC_6(&VAR_3->mcache_lock);
 VAR_8 = FUNC_8(VAR_3, VAR_7);
 FUNC_7(&VAR_3->mcache_lock);
 if (VAR_8)
  goto err_out_free;

 return VAR_7;

err_out_free:
 FUNC_5(VAR_7, VAR_2);
err_out_exit:
 return FUNC_0(VAR_8);
}
