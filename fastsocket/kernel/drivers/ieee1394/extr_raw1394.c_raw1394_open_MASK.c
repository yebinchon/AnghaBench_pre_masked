
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct inode {int dummy; } ;
struct file_info {int addr_list; int wait_complete; int reqlists_lock; int req_complete; int req_pending; int state; int state_mutex; int list; scalar_t__ notification; } ;
struct file {struct file_info* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 struct file_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_4, struct file *VAR_5)
{
 struct file_info *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->notification = (u8) VAR_2;

 FUNC_0(&VAR_6->list);
 FUNC_3(&VAR_6->state_mutex);
 VAR_6->state = VAR_3;
 FUNC_0(&VAR_6->req_pending);
 FUNC_0(&VAR_6->req_complete);
 FUNC_4(&VAR_6->reqlists_lock);
 FUNC_1(&VAR_6->wait_complete);
 FUNC_0(&VAR_6->addr_list);

 VAR_5->private_data = VAR_6;

 return 0;
}
