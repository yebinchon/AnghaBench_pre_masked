
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_flags; TYPE_1__* private_data; } ;
struct TYPE_3__ {scalar_t__ data_pool_bytes_allocated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_6, struct file *VAR_7)
{
 if (VAR_4 == ((void*)0))
  return -VAR_2;


 if (VAR_7->f_flags & VAR_3) {
  if (FUNC_0(VAR_4) == 0)
   return -VAR_0;
 } else
  if (FUNC_1(VAR_5, FUNC_0(VAR_4)) < 0)
   return -VAR_1;


 VAR_7->private_data = VAR_4;

 VAR_4->data_pool_bytes_allocated = 0;
 return 0;
}
