
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int brightness; int power; int fb_blank; } ;
struct backlight_device {TYPE_1__ props; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_5)
{
 int VAR_6 = VAR_5->props.brightness;
 u32 VAR_7 = VAR_4 + VAR_1;
 u32 VAR_8 = FUNC_0(VAR_7);

 if (VAR_5->props.power == VAR_3)
  VAR_6 = VAR_3;
 if (VAR_5->props.fb_blank == VAR_3)
  VAR_6 = VAR_3;
 if (VAR_5->props.power == VAR_2)
  VAR_6 = VAR_2;
 if (VAR_5->props.fb_blank == VAR_2)
  VAR_6 = VAR_2;

 if (VAR_6 == VAR_3) {
  VAR_8 &= ~VAR_0;
  FUNC_1(VAR_8, VAR_7);
 } else if (VAR_6 == VAR_2) {
  VAR_8 |= VAR_0;
  FUNC_1(VAR_8, VAR_7);
 }

 return 0;
}
