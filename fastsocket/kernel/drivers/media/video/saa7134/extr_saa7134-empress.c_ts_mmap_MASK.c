
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct saa7134_dev {int empress_tsq; } ;
struct file {struct saa7134_dev* private_data; } ;


 int FUNC_0 (int *,struct vm_area_struct*) ;

__attribute__((used)) static int
FUNC_1(struct file *VAR_0, struct vm_area_struct * VAR_1)
{
 struct saa7134_dev *VAR_2 = VAR_0->private_data;

 return FUNC_0(&VAR_2->empress_tsq, VAR_1);
}
