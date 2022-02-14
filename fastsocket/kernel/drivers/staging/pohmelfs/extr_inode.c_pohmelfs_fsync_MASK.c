
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int nr_to_write; int sync_mode; } ;
struct inode {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct writeback_control*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, struct dentry *VAR_2, int VAR_3)
{
 struct inode *VAR_4 = VAR_1->f_mapping->host;
 struct writeback_control VAR_5 = {
  .sync_mode = VAR_0,
  .nr_to_write = 0,
 };

 return FUNC_0(VAR_4, &VAR_5);
}
