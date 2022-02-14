
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct nouveau_timer {int (* alarm ) (struct nouveau_timer*,int,TYPE_2__*) ;} ;
struct nouveau_therm_priv {int dummy; } ;
struct nouveau_gpio {int (* set ) (struct nouveau_gpio*,int ,int ,int,int) ;int (* get ) (struct nouveau_gpio*,int ,int ,int) ;} ;
struct TYPE_4__ {int head; } ;
struct TYPE_3__ {scalar_t__ parent; } ;
struct nouveau_fantog_priv {int percent; int period_us; int lock; TYPE_2__ alarm; TYPE_1__ base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct nouveau_gpio* FUNC_1 (struct nouveau_therm_priv*) ;
 struct nouveau_timer* FUNC_2 (struct nouveau_therm_priv*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct nouveau_gpio*,int ,int ,int) ;
 int FUNC_6 (struct nouveau_gpio*,int ,int ,int,int) ;
 int FUNC_7 (struct nouveau_timer*,int,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8(struct nouveau_fantog_priv *VAR_1, int VAR_2)
{
 struct nouveau_therm_priv *VAR_3 = (void *)VAR_1->base.parent;
 struct nouveau_timer *VAR_4 = FUNC_2(VAR_3);
 struct nouveau_gpio *VAR_5 = FUNC_1(VAR_3);
 unsigned long VAR_6;
 int VAR_7;

 FUNC_3(&VAR_1->lock, VAR_6);
 if (VAR_2 < 0)
  VAR_2 = VAR_1->percent;
 VAR_1->percent = VAR_2;

 VAR_7 = !VAR_5->get(VAR_5, 0, VAR_0, 0xff);
 VAR_5->set(VAR_5, 0, VAR_0, 0xff, VAR_7);

 if (FUNC_0(&VAR_1->alarm.head) && VAR_2 != (VAR_7 * 100)) {
  u64 VAR_8 = (VAR_2 * VAR_1->period_us) / 100;
  if (!VAR_7)
   VAR_8 = VAR_1->period_us - VAR_8;
  VAR_4->alarm(VAR_4, VAR_8 * 1000, &VAR_1->alarm);
 }
 FUNC_4(&VAR_1->lock, VAR_6);
}
