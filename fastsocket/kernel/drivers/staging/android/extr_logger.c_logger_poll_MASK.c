
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logger_reader {scalar_t__ r_off; struct logger_log* log; } ;
struct logger_log {scalar_t__ w_off; int mutex; int wq; } ;
struct file {int f_mode; struct logger_reader* private_data; } ;
typedef int poll_table ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_5, poll_table *VAR_6)
{
 struct logger_reader *VAR_7;
 struct logger_log *VAR_8;
 unsigned int VAR_9 = VAR_2 | VAR_4;

 if (!(VAR_5->f_mode & VAR_0))
  return VAR_9;

 VAR_7 = VAR_5->private_data;
 VAR_8 = VAR_7->log;

 FUNC_2(VAR_5, &VAR_8->wq, VAR_6);

 FUNC_0(&VAR_8->mutex);
 if (VAR_8->w_off != VAR_7->r_off)
  VAR_9 |= VAR_1 | VAR_3;
 FUNC_1(&VAR_8->mutex);

 return VAR_9;
}
