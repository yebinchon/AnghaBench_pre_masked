
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {size_t minor; int * class_dev; } ;
struct comedi_device_file_info {int dummy; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,size_t) ;
 int VAR_3 ;
 struct comedi_device_file_info** VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct comedi_device_file_info*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct comedi_subdevice *VAR_6)
{
 unsigned long VAR_7;
 struct comedi_device_file_info *VAR_8;

 if (VAR_6 == ((void*)0))
  return;
 if (VAR_6->minor < 0)
  return;

 FUNC_0(VAR_6->minor >= VAR_2);
 FUNC_0(VAR_6->minor < VAR_0);

 FUNC_4(&VAR_5, VAR_7);
 VAR_8 = VAR_4[VAR_6->minor];
 VAR_4[VAR_6->minor] = ((void*)0);
 FUNC_5(&VAR_5, VAR_7);

 if (VAR_6->class_dev) {
  FUNC_2(VAR_3, FUNC_1(VAR_1, VAR_6->minor));
  VAR_6->class_dev = ((void*)0);
 }
 FUNC_3(VAR_8);
}
