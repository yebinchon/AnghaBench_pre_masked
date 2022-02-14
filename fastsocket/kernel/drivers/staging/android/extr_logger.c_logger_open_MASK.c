
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logger_reader {int mutex; int readers; int list; int head; int r_off; struct logger_reader* log; } ;
struct logger_log {int mutex; int readers; int list; int head; int r_off; struct logger_log* log; } ;
struct inode {int i_rdev; } ;
struct file {int f_mode; struct logger_reader* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct logger_reader* FUNC_2 (int ) ;
 struct logger_reader* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_4, struct file *VAR_5)
{
 struct logger_log *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_7(VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_2(FUNC_1(VAR_4->i_rdev));
 if (!VAR_6)
  return -VAR_0;

 if (VAR_5->f_mode & VAR_2) {
  struct logger_reader *VAR_8;

  VAR_8 = FUNC_3(sizeof(struct logger_reader), VAR_3);
  if (!VAR_8)
   return -VAR_1;

  VAR_8->log = VAR_6;
  FUNC_0(&VAR_8->list);

  FUNC_5(&VAR_6->mutex);
  VAR_8->r_off = VAR_6->head;
  FUNC_4(&VAR_8->list, &VAR_6->readers);
  FUNC_6(&VAR_6->mutex);

  VAR_5->private_data = VAR_8;
 } else
  VAR_5->private_data = VAR_6;

 return 0;
}
