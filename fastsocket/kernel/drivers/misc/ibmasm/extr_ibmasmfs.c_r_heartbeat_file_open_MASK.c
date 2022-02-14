
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_private; } ;
struct ibmasmfs_heartbeat_data {int heartbeat; scalar_t__ sp; scalar_t__ active; } ;
struct file {struct ibmasmfs_heartbeat_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int *) ;
 struct ibmasmfs_heartbeat_data* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_3, struct file *VAR_4)
{
 struct ibmasmfs_heartbeat_data *VAR_5;

 if (!VAR_3->i_private)
  return -VAR_0;

 VAR_5 = FUNC_1(sizeof(struct ibmasmfs_heartbeat_data), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->sp = VAR_3->i_private;
 VAR_5->active = 0;
 FUNC_0(VAR_5->sp, &VAR_5->heartbeat);
 VAR_4->private_data = VAR_5;
 return 0;
}
