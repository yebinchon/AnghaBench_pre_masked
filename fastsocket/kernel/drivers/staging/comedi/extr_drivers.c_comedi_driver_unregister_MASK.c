
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_driver {struct comedi_driver* next; } ;
struct comedi_device_file_info {struct comedi_device* device; } ;
struct comedi_device {int mutex; scalar_t__ use_count; struct comedi_driver* driver; scalar_t__ attached; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*) ;
 struct comedi_driver* VAR_2 ;
 struct comedi_device_file_info* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,scalar_t__) ;

int FUNC_5(struct comedi_driver *VAR_3)
{
 struct comedi_driver *VAR_4;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct comedi_device_file_info *VAR_6 =
      FUNC_1(VAR_5);
  struct comedi_device *VAR_7;

  if (VAR_6 == ((void*)0))
   continue;
  VAR_7 = VAR_6->device;

  FUNC_2(&VAR_7->mutex);
  if (VAR_7->attached && VAR_7->driver == VAR_3) {
   if (VAR_7->use_count)
    FUNC_4
        ("BUG! detaching device with use_count=%d\n",
         VAR_7->use_count);
   FUNC_0(VAR_7);
  }
  FUNC_3(&VAR_7->mutex);
 }

 if (VAR_2 == VAR_3) {
  VAR_2 = VAR_3->next;
  return 0;
 }

 for (VAR_4 = VAR_2; VAR_4->next; VAR_4 = VAR_4->next) {
  if (VAR_4->next == VAR_3) {
   VAR_4->next = VAR_3->next;
   return 0;
  }
 }
 return -VAR_1;
}
