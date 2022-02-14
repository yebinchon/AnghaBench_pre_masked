
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_private; } ;
struct file {scalar_t__ private_data; } ;



__attribute__((used)) static int FUNC_0(struct inode *VAR_0, struct file *VAR_1)
{
 if (VAR_0->i_private)
  VAR_1->private_data = VAR_0->i_private;
 return 0;
}
