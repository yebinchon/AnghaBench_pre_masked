
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct cpia2_fh* private_data; } ;
struct cpia2_fh {scalar_t__ mmapped; int prio; } ;
struct camera_data {scalar_t__ open_count; int busy_lock; int prio; scalar_t__ COM_len; scalar_t__ APP_len; int present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct camera_data*) ;
 int FUNC_2 (struct camera_data*) ;
 scalar_t__ FUNC_3 (struct camera_data*) ;
 struct cpia2_fh* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 struct camera_data* FUNC_8 (struct file*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_6)
{
 struct camera_data *VAR_7 = FUNC_8(VAR_6);
 int VAR_8 = 0;

 if (!VAR_7) {
  FUNC_0("Internal error, camera_data not found!\n");
  return -VAR_1;
 }

 if(FUNC_5(&VAR_7->busy_lock))
  return -VAR_3;

 if(!VAR_7->present) {
  VAR_8 = -VAR_1;
  goto err_return;
 }

 if (VAR_7->open_count > 0) {
  goto skip_init;
 }

 if (FUNC_1(VAR_7)) {
  VAR_8 = -VAR_2;
  goto err_return;
 }


 if (FUNC_3(VAR_7) < 0) {
  VAR_8 = -VAR_0;
  goto err_return;
 }

 VAR_7->APP_len = 0;
 VAR_7->COM_len = 0;

skip_init:
 {
  struct cpia2_fh *VAR_9 = FUNC_4(sizeof(*VAR_9),VAR_4);
  if(!VAR_9) {
   VAR_8 = -VAR_2;
   goto err_return;
  }
  VAR_6->private_data = VAR_9;
  VAR_9->prio = VAR_5;
  FUNC_7(&VAR_7->prio, &VAR_9->prio);
  VAR_9->mmapped = 0;
 }

 ++VAR_7->open_count;

 FUNC_2(VAR_7);

err_return:
 FUNC_6(&VAR_7->busy_lock);
 return VAR_8;
}
