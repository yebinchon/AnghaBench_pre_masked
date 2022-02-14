
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_2__ {int brightness; scalar_t__ power; scalar_t__ fb_blank; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct backlight_device *VAR_7)
{
 unsigned long VAR_8;
 u16 VAR_9;
 int VAR_10 = VAR_7->props.brightness;

 if (VAR_7->props.power != VAR_1)
  VAR_10 = 0;
 if (VAR_7->props.fb_blank != VAR_1)
  VAR_10 = 0;
 if (VAR_6)
  VAR_10 = 0;

 FUNC_5(&VAR_4, VAR_8);
 if (VAR_10 && VAR_5 == 0) {
  FUNC_3(VAR_0);
  VAR_9 = FUNC_0(VAR_2);
  VAR_9 &= ~VAR_3;
  FUNC_1(VAR_9, VAR_2);
  FUNC_4(255-(u8)VAR_10, VAR_0);
 } else if (VAR_10 == 0 && VAR_5 != 0) {
  FUNC_4(255-(u8)VAR_10, VAR_0);
  FUNC_2(VAR_0);
  VAR_9 = FUNC_0(VAR_2);
  VAR_9 |= VAR_3;
  FUNC_1(VAR_9, VAR_2);
 } else if (VAR_10) {
  FUNC_4(255-(u8)VAR_10, VAR_0);
 }
 FUNC_6(&VAR_4, VAR_8);

 VAR_5 = VAR_10;
}
