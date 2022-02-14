
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uinput_device {TYPE_1__* dev; } ;
struct TYPE_3__ {int event; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,struct uinput_device*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct uinput_device *VAR_2)
{
 VAR_2->dev = FUNC_0();
 if (!VAR_2->dev)
  return -VAR_0;

 VAR_2->dev->event = VAR_1;
 FUNC_1(VAR_2->dev, VAR_2);

 return 0;
}
