
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct mon_reader_bin {int b_lock; int b_wait; } ;
struct file {int f_mode; struct mon_reader_bin* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct mon_reader_bin*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static unsigned int
FUNC_4(struct file *VAR_3, struct poll_table_struct *VAR_4)
{
 struct mon_reader_bin *VAR_5 = VAR_3->private_data;
 unsigned int VAR_6 = 0;
 unsigned long VAR_7;

 if (VAR_3->f_mode & VAR_0)
  FUNC_1(VAR_3, &VAR_5->b_wait, VAR_4);

 FUNC_2(&VAR_5->b_lock, VAR_7);
 if (!FUNC_0(VAR_5))
  VAR_6 |= VAR_1 | VAR_2;
 FUNC_3(&VAR_5->b_lock, VAR_7);
 return VAR_6;
}
