
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {int reqlists_lock; int req_complete; int wait_complete; } ;
struct file {struct file_info* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_4(struct file *VAR_4, poll_table * VAR_5)
{
 struct file_info *VAR_6 = VAR_4->private_data;
 unsigned int VAR_7 = VAR_1 | VAR_3;
 unsigned long VAR_8;

 FUNC_1(VAR_4, &VAR_6->wait_complete, VAR_5);

 FUNC_2(&VAR_6->reqlists_lock, VAR_8);
 if (!FUNC_0(&VAR_6->req_complete)) {
  VAR_7 |= VAR_0 | VAR_2;
 }
 FUNC_3(&VAR_6->reqlists_lock, VAR_8);

 return VAR_7;
}
