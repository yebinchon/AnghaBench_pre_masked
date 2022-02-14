
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {struct kb3886bl_machinfo* platform_data; } ;
struct platform_device {TYPE_6__ dev; } ;
struct kb3886bl_machinfo {int limit_mask; int default_intensity; int max_intensity; } ;
struct TYPE_9__ {int brightness; int power; int max_brightness; } ;
struct TYPE_10__ {TYPE_1__ props; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (char*,TYPE_6__*,int *,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 struct kb3886bl_machinfo* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct platform_device*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 struct kb3886bl_machinfo *VAR_5 = VAR_4->dev.platform_data;

 VAR_1 = VAR_5;
 if (!VAR_5->limit_mask)
  VAR_5->limit_mask = -1;

 VAR_2 = FUNC_2("kb3886-bl",
  &VAR_4->dev, ((void*)0), &VAR_3);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 FUNC_4(VAR_4, VAR_2);

 VAR_2->props.max_brightness = VAR_5->max_intensity;
 VAR_2->props.power = VAR_0;
 VAR_2->props.brightness = VAR_5->default_intensity;
 FUNC_3(VAR_2);

 return 0;
}
