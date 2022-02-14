
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {TYPE_1__* f_dentry; } ;
struct comedi_device_file_info {struct comedi_device* device; } ;
struct comedi_device {int async_queue; } ;
struct TYPE_2__ {int d_inode; } ;


 struct comedi_device_file_info* FUNC_0 (unsigned int const) ;
 int FUNC_1 (int,struct file*,int,int *) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(int VAR_0, struct file *VAR_1, int VAR_2)
{
 const unsigned VAR_3 = FUNC_2(VAR_1->f_dentry->d_inode);
 struct comedi_device_file_info *VAR_4 =
     FUNC_0(VAR_3);

 struct comedi_device *VAR_5 = VAR_4->device;

 return FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_5->async_queue);
}
