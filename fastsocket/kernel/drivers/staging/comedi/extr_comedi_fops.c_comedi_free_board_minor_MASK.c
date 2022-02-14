
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device_file_info {int minor; scalar_t__ class_dev; struct comedi_device_file_info* device; } ;
struct comedi_device {int minor; scalar_t__ class_dev; struct comedi_device* device; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct comedi_device_file_info*) ;
 struct comedi_device_file_info** VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct comedi_device_file_info*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(unsigned VAR_5)
{
 unsigned long VAR_6;
 struct comedi_device_file_info *VAR_7;

 FUNC_0(VAR_5 >= VAR_1);
 FUNC_5(&VAR_4, VAR_6);
 VAR_7 = VAR_3[VAR_5];
 VAR_3[VAR_5] = ((void*)0);
 FUNC_6(&VAR_4, VAR_6);

 if (VAR_7) {
  struct comedi_device *VAR_8 = VAR_7->device;
  if (VAR_8) {
   if (VAR_8->class_dev) {
    FUNC_3(VAR_2,
            FUNC_1(VAR_0, VAR_8->minor));
   }
   FUNC_2(VAR_8);
   FUNC_4(VAR_8);
  }
  FUNC_4(VAR_7);
 }
}
