
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct hpet_dev {int dummy; } ;
struct file {struct hpet_dev* private_data; } ;


 int FUNC_0 (struct hpet_dev*,unsigned int,unsigned long,int ) ;

__attribute__((used)) static int
FUNC_1(struct inode *VAR_0, struct file *VAR_1, unsigned int VAR_2,
    unsigned long VAR_3)
{
 struct hpet_dev *VAR_4;

 VAR_4 = VAR_1->private_data;
 return FUNC_0(VAR_4, VAR_2, VAR_3, 0);
}
