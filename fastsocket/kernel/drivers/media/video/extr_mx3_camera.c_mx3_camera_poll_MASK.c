
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_camera_file {int vb_vidq; } ;
struct file {struct soc_camera_file* private_data; } ;
typedef int poll_table ;


 unsigned int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_1(struct file *VAR_0, poll_table *VAR_1)
{
 struct soc_camera_file *VAR_2 = VAR_0->private_data;

 return FUNC_0(VAR_0, &VAR_2->vb_vidq, VAR_1);
}
