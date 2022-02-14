
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct locomo_dev {scalar_t__ mapbase; } ;
struct led_classdev {TYPE_1__* dev; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {int parent; } ;


 struct locomo_dev* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct led_classdev *VAR_2,
    enum led_brightness VAR_3, int VAR_4)
{
 struct locomo_dev *VAR_5 = FUNC_0(VAR_2->dev->parent);
 unsigned long VAR_6;

 FUNC_2(VAR_6);
 if (VAR_3)
  FUNC_3(VAR_0, VAR_5->mapbase + VAR_4);
 else
  FUNC_3(VAR_1, VAR_5->mapbase + VAR_4);
 FUNC_1(VAR_6);
}
