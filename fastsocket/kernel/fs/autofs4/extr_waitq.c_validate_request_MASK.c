
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct dentry {int d_name; struct dentry* d_parent; scalar_t__ d_inode; } ;
struct autofs_wait_queue {int dummy; } ;
struct autofs_sb_info {scalar_t__ catatonic; int wq_mutex; } ;
struct autofs_info {int flags; } ;
typedef enum autofs_notify { ____Placeholder_autofs_notify } autofs_notify ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dentry*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct autofs_info* FUNC_1 (struct dentry*) ;
 struct autofs_wait_queue* FUNC_2 (struct autofs_sb_info*,struct qstr*) ;
 struct dentry* FUNC_3 (struct dentry*,int *) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 scalar_t__ FUNC_6 (struct dentry*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct autofs_wait_queue **VAR_6,
       struct autofs_sb_info *VAR_7,
       struct qstr *VAR_8,
       struct dentry*VAR_9, enum autofs_notify VAR_10)
{
 struct autofs_wait_queue *VAR_11;
 struct autofs_info *VAR_12;

 if (VAR_7->catatonic)
  return -VAR_2;


 VAR_11 = FUNC_2(VAR_7, VAR_8);
 if (VAR_11) {
  *VAR_6 = VAR_11;
  return 1;
 }

 *VAR_6 = ((void*)0);


 VAR_12 = FUNC_1(VAR_9);
 if (!VAR_12)
  return 1;





 if (VAR_10 == VAR_5) {







  while (VAR_12->flags & VAR_0) {
   FUNC_8(&VAR_7->wq_mutex);
   FUNC_9(VAR_3/10);
   if (FUNC_7(&VAR_7->wq_mutex))
    return -VAR_1;

   if (VAR_7->catatonic)
    return -VAR_2;

   VAR_11 = FUNC_2(VAR_7, VAR_8);
   if (VAR_11) {
    *VAR_6 = VAR_11;
    return 1;
   }
  }






  return 0;
 }





 if (VAR_10 == VAR_4) {
  struct dentry *VAR_13 = ((void*)0);
  int VAR_14 = 1;
  if (!FUNC_0(VAR_9)) {
   if (VAR_9->d_inode && FUNC_4(VAR_9)) {
    struct dentry *VAR_15 = VAR_9->d_parent;
    VAR_13 = FUNC_3(VAR_15, &VAR_9->d_name);
    if (VAR_13)
     VAR_9 = VAR_13;
   }
  }
  if (FUNC_6(VAR_9))
   VAR_14 = 0;

  if (VAR_13)
   FUNC_5(VAR_13);
  return VAR_14;
 }

 return 1;
}
