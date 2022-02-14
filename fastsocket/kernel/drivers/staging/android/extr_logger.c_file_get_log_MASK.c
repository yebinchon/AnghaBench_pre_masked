
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logger_reader {struct logger_reader* log; } ;
struct logger_log {struct logger_log* log; } ;
struct file {int f_mode; struct logger_reader* private_data; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct logger_log *FUNC_0(struct file *VAR_1)
{
 if (VAR_1->f_mode & VAR_0) {
  struct logger_reader *VAR_2 = VAR_1->private_data;
  return VAR_2->log;
 } else
  return VAR_1->private_data;
}
