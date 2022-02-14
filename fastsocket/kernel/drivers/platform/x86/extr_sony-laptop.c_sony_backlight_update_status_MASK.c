
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int FUNC_0 (int ,char*,scalar_t__,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct backlight_device *VAR_1)
{
 return FUNC_0(VAR_0, "SBRT",
    VAR_1->props.brightness + 1, ((void*)0));
}
