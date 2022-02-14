
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device_file_info {struct comedi_device* device; } ;
struct comedi_device {int attached; } ;


 unsigned int VAR_0 ;
 struct comedi_device_file_info* FUNC_0 (unsigned int) ;

void *FUNC_1(unsigned int VAR_1)
{
 struct comedi_device_file_info *VAR_2;
 struct comedi_device *VAR_3;

 if (VAR_1 >= VAR_0)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 VAR_3 = VAR_2->device;

 if (VAR_3 == ((void*)0) || !VAR_3->attached)
  return ((void*)0);

 return (void *)VAR_3;
}
