
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device_file_info {struct comedi_device* device; } ;
struct comedi_device {TYPE_1__* driver; int attached; } ;
struct TYPE_2__ {int module; } ;


 unsigned int VAR_0 ;
 struct comedi_device_file_info* FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (char const*,int *,int ) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (int ) ;

void *FUNC_4(const char *VAR_1)
{
 struct comedi_device_file_info *VAR_2;
 struct comedi_device *VAR_3;
 unsigned int VAR_4;

 if (FUNC_2(VAR_1, "/dev/comedi", 11) != 0)
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_1 + 11, ((void*)0), 0);

 if (VAR_4 >= VAR_0)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_4);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 VAR_3 = VAR_2->device;

 if (VAR_3 == ((void*)0) || !VAR_3->attached)
  return ((void*)0);

 if (!FUNC_3(VAR_3->driver->module))
  return ((void*)0);

 return (void *)VAR_3;
}
