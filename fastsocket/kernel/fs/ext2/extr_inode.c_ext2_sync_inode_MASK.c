
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int nr_to_write; int sync_mode; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct writeback_control*) ;

int FUNC_1(struct inode *VAR_1)
{
 struct writeback_control VAR_2 = {
  .sync_mode = VAR_0,
  .nr_to_write = 0,
 };
 return FUNC_0(VAR_1, &VAR_2);
}
