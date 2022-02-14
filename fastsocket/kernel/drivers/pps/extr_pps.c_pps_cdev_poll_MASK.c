
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pps_device {int queue; } ;
struct file {struct pps_device* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_1(struct file *VAR_2, poll_table *VAR_3)
{
 struct pps_device *VAR_4 = VAR_2->private_data;

 FUNC_0(VAR_2, &VAR_4->queue, VAR_3);

 return VAR_0 | VAR_1;
}
