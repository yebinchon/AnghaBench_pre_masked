
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_driver {int (* attach ) (struct comedi_device*,struct comedi_devconfig*) ;int module; struct comedi_driver* next; int driver_name; scalar_t__ num_names; } ;
struct comedi_device {int attached; char* board_name; struct comedi_driver* driver; int * board_ptr; } ;
struct comedi_devconfig {int board_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*) ;
 struct comedi_driver* VAR_2 ;
 int * FUNC_1 (struct comedi_driver*,int ) ;
 int FUNC_2 (struct comedi_driver*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (struct comedi_device*,struct comedi_devconfig*) ;
 int FUNC_9 (int ) ;

int FUNC_10(struct comedi_device *VAR_3, struct comedi_devconfig *VAR_4)
{
 struct comedi_driver *VAR_5;
 int VAR_6;

 if (VAR_3->attached)
  return -VAR_0;

 for (VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_5->next) {
  if (!FUNC_9(VAR_5->module)) {
   FUNC_5
       ("comedi: failed to increment module count, skipping\n");
   continue;
  }
  if (VAR_5->num_names) {
   VAR_3->board_ptr = FUNC_1(VAR_5, VAR_4->board_name);
   if (VAR_3->board_ptr == ((void*)0)) {
    FUNC_3(VAR_5->module);
    continue;
   }
  } else {
   if (FUNC_7(VAR_5->driver_name, VAR_4->board_name)) {
    FUNC_3(VAR_5->module);
    continue;
   }
  }

  VAR_3->driver = VAR_5;
  VAR_6 = VAR_5->attach(VAR_3, VAR_4);
  if (VAR_6 < 0) {
   FUNC_3(VAR_3->driver->module);
   FUNC_0(VAR_3);
   return VAR_6;
  }
  goto attached;
 }



 for (VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_5->next) {
  if (!FUNC_9(VAR_5->module)) {
   FUNC_5("comedi: failed to increment module count\n");
   continue;
  }
  FUNC_2(VAR_5);
  FUNC_3(VAR_5->module);
 }
 return -VAR_1;

attached:

 VAR_6 = FUNC_4(VAR_3);
 FUNC_3(VAR_3->driver->module);
 if (VAR_6 < 0) {
  FUNC_0(VAR_3);
  return VAR_6;
 }

 if (!VAR_3->board_name) {
  FUNC_5("BUG: dev->board_name=<%p>\n", VAR_3->board_name);
  VAR_3->board_name = "BUG";
 }
 FUNC_6();
 VAR_3->attached = 1;

 return 0;
}
