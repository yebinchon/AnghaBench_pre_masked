
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {int f_mode; struct dev_state* private_data; } ;
struct dev_state {int async_completed; int wait; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct dev_state*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int *,struct poll_table_struct*) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_5,
    struct poll_table_struct *VAR_6)
{
 struct dev_state *VAR_7 = VAR_5->private_data;
 unsigned int VAR_8 = 0;

 FUNC_2(VAR_5, &VAR_7->wait, VAR_6);
 if (VAR_5->f_mode & VAR_0 && !FUNC_1(&VAR_7->async_completed))
  VAR_8 |= VAR_3 | VAR_4;
 if (!FUNC_0(VAR_7))
  VAR_8 |= VAR_1 | VAR_2;
 return VAR_8;
}
