
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct nouveau_timer {int (* alarm ) (struct nouveau_timer*,int,TYPE_2__*) ;} ;
struct nouveau_therm_priv {int dummy; } ;
struct nouveau_therm {int dummy; } ;
struct TYPE_4__ {int head; } ;
struct TYPE_3__ {int bump_period; int slow_down_period; int max_duty; int min_duty; } ;
struct nouveau_fan {int percent; int (* get ) (struct nouveau_therm*) ;int (* set ) (struct nouveau_therm*,int) ;int lock; TYPE_2__ alarm; TYPE_1__ bios; struct nouveau_therm* parent; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int,int ) ;
 struct nouveau_timer* FUNC_5 (struct nouveau_therm_priv*) ;
 int FUNC_6 (struct nouveau_therm*,char*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct nouveau_therm*) ;
 int FUNC_10 (struct nouveau_therm*,int) ;
 int FUNC_11 (struct nouveau_timer*,int,TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_12(struct nouveau_fan *VAR_1, bool VAR_2, int VAR_3)
{
 struct nouveau_therm *VAR_4 = VAR_1->parent;
 struct nouveau_therm_priv *VAR_5 = (void *)VAR_4;
 struct nouveau_timer *VAR_6 = FUNC_5(VAR_5);
 unsigned long VAR_7;
 int VAR_8 = 0;
 int VAR_9;


 FUNC_7(&VAR_1->lock, VAR_7);
 if (VAR_3 < 0)
  VAR_3 = VAR_1->percent;
 VAR_3 = FUNC_2(VAR_0, VAR_3, VAR_1->bios.min_duty);
 VAR_3 = FUNC_4(VAR_0, VAR_3, VAR_1->bios.max_duty);
 if (VAR_1->percent != VAR_3) {
  FUNC_6(VAR_4, "FAN target: %d\n", VAR_3);
  VAR_1->percent = VAR_3;
 }


 VAR_9 = VAR_1->get(VAR_4);
 if (VAR_9 == VAR_3)
  goto done;


 if (!VAR_2 && VAR_9 >= 0) {




  if (VAR_9 < VAR_3)
   VAR_9 = FUNC_3(VAR_9 + 3, VAR_3);
  else if (VAR_9 > VAR_3)
   VAR_9 = FUNC_1(VAR_9 - 3, VAR_3);
 } else {
  VAR_9 = VAR_3;
 }

 FUNC_6(VAR_4, "FAN update: %d\n", VAR_9);
 VAR_8 = VAR_1->set(VAR_4, VAR_9);
 if (VAR_8)
  goto done;


 if (FUNC_0(&VAR_1->alarm.head) && VAR_3 != VAR_9) {
  u16 VAR_10 = VAR_1->bios.bump_period;
  u16 VAR_11 = VAR_1->bios.slow_down_period;
  u64 VAR_12;

  if (VAR_9 > VAR_3)
   VAR_12 = VAR_11;
  else if (VAR_9 == VAR_3)
   VAR_12 = FUNC_3(VAR_10, VAR_11) ;
  else
   VAR_12 = VAR_10;

  VAR_6->alarm(VAR_6, VAR_12 * 1000 * 1000, &VAR_1->alarm);
 }

done:
 FUNC_8(&VAR_1->lock, VAR_7);
 return VAR_8;
}
