
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct block_device* private_data; } ;
struct block_device {int dummy; } ;


 int FUNC_0 (struct block_device*,int ,unsigned int,unsigned long) ;

__attribute__((used)) static int
FUNC_1(struct inode *VAR_0, struct file *VAR_1,
    unsigned int VAR_2, unsigned long VAR_3)
{
 struct block_device *VAR_4 = VAR_1->private_data;

 return FUNC_0(VAR_4, 0, VAR_2, VAR_3);
}
