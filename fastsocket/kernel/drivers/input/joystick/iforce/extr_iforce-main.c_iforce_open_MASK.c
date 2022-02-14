
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int evbit; } ;
struct iforce {int bus; TYPE_1__* irq; int usbdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (struct iforce*,int ,char*) ;
 struct iforce* FUNC_1 (struct input_dev*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_4)
{
 struct iforce *VAR_5 = FUNC_1(VAR_4);

 switch (VAR_5->bus) {







 }

 if (FUNC_2(VAR_1, VAR_4->evbit)) {

  FUNC_0(VAR_5, VAR_2, "\004");
 }

 return 0;
}
