
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nouveau_timer {int (* alarm ) (struct nouveau_timer*,unsigned long long,TYPE_3__*) ;} ;
struct TYPE_6__ {int head; } ;
struct nouveau_therm_priv {int mode; int lock; TYPE_3__ alarm; TYPE_2__* fan; } ;
struct nouveau_therm {int dummy; } ;
struct TYPE_4__ {int nr_fan_trip; } ;
struct TYPE_5__ {TYPE_1__ bios; } ;





 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct nouveau_therm*) ;
 int FUNC_2 (struct nouveau_therm*,int,int) ;
 int FUNC_3 (struct nouveau_therm*) ;
 int FUNC_4 (struct nouveau_therm*) ;
 struct nouveau_timer* FUNC_5 (struct nouveau_therm*) ;
 int FUNC_6 (struct nouveau_therm*,char*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct nouveau_timer*,unsigned long long,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_10(struct nouveau_therm *VAR_0, int VAR_1)
{
 struct nouveau_timer *VAR_2 = FUNC_5(VAR_0);
 struct nouveau_therm_priv *VAR_3 = (void *)VAR_0;
 unsigned long VAR_4;
 int VAR_5;

 FUNC_7(&VAR_3->lock, VAR_4);
 if (VAR_1 < 0)
  VAR_1 = VAR_3->mode;
 VAR_3->mode = VAR_1;

 switch (VAR_1) {
 case 129:
  VAR_5 = FUNC_1(VAR_0);
  if (VAR_5 < 0)
   VAR_5 = 100;
  break;
 case 130:
  if (VAR_3->fan->bios.nr_fan_trip)
   VAR_5 = FUNC_4(VAR_0);
  else
   VAR_5 = FUNC_3(VAR_0);
  break;
 case 128:
 default:
  goto done;
 }

 FUNC_6(VAR_0, "FAN target request: %d%%\n", VAR_5);
 FUNC_2(VAR_0, (VAR_1 != 130), VAR_5);

done:
 if (FUNC_0(&VAR_3->alarm.head) && (VAR_1 == 130))
  VAR_2->alarm(VAR_2, 1000000000ULL, &VAR_3->alarm);
 FUNC_8(&VAR_3->lock, VAR_4);
}
