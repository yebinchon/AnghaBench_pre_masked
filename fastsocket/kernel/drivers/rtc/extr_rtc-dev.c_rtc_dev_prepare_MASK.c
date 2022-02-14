
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int owner; } ;
struct TYPE_3__ {int devt; } ;
struct rtc_device {scalar_t__ id; int owner; TYPE_2__ char_dev; int uie_timer; int uie_task; TYPE_1__ dev; int name; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,int ,unsigned long) ;

void FUNC_6(struct rtc_device *VAR_5)
{
 if (!VAR_2)
  return;

 if (VAR_5->id >= VAR_0) {
  FUNC_4("%s: too many RTC devices\n", VAR_5->name);
  return;
 }

 VAR_5->dev.devt = FUNC_2(FUNC_1(VAR_2), VAR_5->id);






 FUNC_3(&VAR_5->char_dev, &VAR_1);
 VAR_5->char_dev.owner = VAR_5->owner;
}
