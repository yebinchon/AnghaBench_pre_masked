
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct audio* private_data; } ;
struct audio {int dummy; } ;


 struct audio VAR_0 ;

__attribute__((used)) static int FUNC_0(struct inode *VAR_1, struct file *VAR_2)
{
 struct audio *VAR_3 = &VAR_0;

 VAR_2->private_data = VAR_3;
 return 0;
}
