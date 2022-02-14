
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct cachefiles_cache* private_data; } ;
struct cachefiles_cache {int frun_percent; int fcull_percent; int fstop_percent; int brun_percent; int bcull_percent; int bstop_percent; struct file* cachefilesd; int daemon_pollwq; int active_lock; int active_nodes; int daemon_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct cachefiles_cache* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__*,int) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_7, struct file *VAR_8)
{
 struct cachefiles_cache *VAR_9;

 FUNC_0("");


 if (!FUNC_1(VAR_0))
  return -VAR_3;


 if (FUNC_6(&VAR_6, 1) == 1)
  return -VAR_1;


 VAR_9 = FUNC_3(sizeof(struct cachefiles_cache), VAR_4);
 if (!VAR_9) {
  VAR_6 = 0;
  return -VAR_2;
 }

 FUNC_4(&VAR_9->daemon_mutex);
 VAR_9->active_nodes = VAR_5;
 FUNC_5(&VAR_9->active_lock);
 FUNC_2(&VAR_9->daemon_pollwq);






 VAR_9->frun_percent = 7;
 VAR_9->fcull_percent = 5;
 VAR_9->fstop_percent = 1;
 VAR_9->brun_percent = 7;
 VAR_9->bcull_percent = 5;
 VAR_9->bstop_percent = 1;

 VAR_8->private_data = VAR_9;
 VAR_9->cachefilesd = VAR_8;
 return 0;
}
