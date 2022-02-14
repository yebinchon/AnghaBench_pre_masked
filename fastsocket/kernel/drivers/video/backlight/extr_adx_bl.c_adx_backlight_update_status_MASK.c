
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int state; int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
struct adxbl {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct adxbl* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct backlight_device *VAR_4)
{
 struct adxbl *VAR_5 = FUNC_0(VAR_4);
 u32 VAR_6;

 VAR_6 = VAR_4->props.brightness;
 FUNC_2(VAR_6, VAR_5->base + VAR_0);

 VAR_6 = FUNC_1(VAR_5->base + VAR_1);

 if (VAR_4->props.state & VAR_3)
  VAR_6 &= ~VAR_2;
 else
  VAR_6 |= VAR_2;

 FUNC_2(VAR_6, VAR_5->base + VAR_1);

 return 0;
}
