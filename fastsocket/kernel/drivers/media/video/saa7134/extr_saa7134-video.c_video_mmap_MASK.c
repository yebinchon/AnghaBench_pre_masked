
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct saa7134_fh {int dummy; } ;
struct file {struct saa7134_fh* private_data; } ;


 int FUNC_0 (struct saa7134_fh*) ;
 int FUNC_1 (int ,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, struct vm_area_struct * VAR_1)
{
 struct saa7134_fh *VAR_2 = VAR_0->private_data;

 return FUNC_1(FUNC_0(VAR_2), VAR_1);
}
