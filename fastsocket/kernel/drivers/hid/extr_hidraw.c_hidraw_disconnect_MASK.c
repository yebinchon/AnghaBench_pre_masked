
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hidraw {size_t minor; int wait; scalar_t__ open; scalar_t__ exist; } ;
struct hid_device {TYPE_1__* ll_driver; struct hidraw* hidraw; } ;
struct TYPE_2__ {int (* close ) (struct hid_device*) ;} ;


 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 int FUNC_2 (struct hidraw*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct hid_device*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct hid_device *VAR_4)
{
 struct hidraw *VAR_5 = VAR_4->hidraw;

 FUNC_3(&VAR_3);
 VAR_5->exist = 0;

 FUNC_1(VAR_0, FUNC_0(VAR_1, VAR_5->minor));

 VAR_2[VAR_5->minor] = ((void*)0);

 if (VAR_5->open) {
  VAR_4->ll_driver->close(VAR_4);
  FUNC_6(&VAR_5->wait);
 } else {
  FUNC_2(VAR_5);
 }
 FUNC_4(&VAR_3);
}
