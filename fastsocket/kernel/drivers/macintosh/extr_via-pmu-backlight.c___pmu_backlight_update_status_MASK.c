
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int brightness; scalar_t__ power; scalar_t__ fb_blank; } ;
struct backlight_device {TYPE_1__ props; } ;
struct adb_request {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct adb_request*,int *,int,int ,int) ;
 int FUNC_2 (struct adb_request*) ;

__attribute__((used)) static int FUNC_3(struct backlight_device *VAR_6)
{
 struct adb_request VAR_7;
 int VAR_8 = VAR_6->props.brightness;


 if (VAR_6->props.power != VAR_0 ||
     VAR_6->props.fb_blank != VAR_0)
  VAR_8 = 0;

 if (VAR_8 > 0) {
  int VAR_9 = FUNC_0(VAR_8);

  FUNC_1(&VAR_7, ((void*)0), 2, VAR_1, VAR_9);
  FUNC_2(&VAR_7);

  FUNC_1(&VAR_7, ((void*)0), 2, VAR_2,
   VAR_3 | VAR_5);
  FUNC_2(&VAR_7);
 } else {
  FUNC_1(&VAR_7, ((void*)0), 2, VAR_2,
   VAR_3 | VAR_4);
  FUNC_2(&VAR_7);
 }

 return 0;
}
