
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nouveau_timer {int (* read ) (struct nouveau_timer*) ;} ;
struct nouveau_therm_priv {TYPE_2__* fan; } ;
struct nouveau_therm {int dummy; } ;
struct nouveau_gpio {int (* get ) (struct nouveau_gpio*,int ,scalar_t__,int ) ;} ;
struct TYPE_3__ {scalar_t__ func; int line; } ;
struct TYPE_4__ {TYPE_1__ tach; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 struct nouveau_gpio* FUNC_1 (struct nouveau_therm*) ;
 struct nouveau_timer* FUNC_2 (struct nouveau_therm*) ;
 int FUNC_3 (struct nouveau_timer*) ;
 int FUNC_4 (struct nouveau_gpio*,int ,scalar_t__,int ) ;
 int FUNC_5 (struct nouveau_timer*) ;
 int FUNC_6 (struct nouveau_gpio*,int ,scalar_t__,int ) ;
 int FUNC_7 (struct nouveau_timer*) ;
 int FUNC_8 (struct nouveau_timer*) ;
 int FUNC_9 (int,int) ;

int
FUNC_10(struct nouveau_therm *VAR_2)
{
 struct nouveau_therm_priv *VAR_3 = (void *)VAR_2;
 struct nouveau_timer *VAR_4 = FUNC_2(VAR_2);
 struct nouveau_gpio *VAR_5 = FUNC_1(VAR_2);
 u32 VAR_6, VAR_7, VAR_8;
 u64 VAR_9, VAR_10, VAR_11;

 if (VAR_3->fan->tach.func == VAR_0)
  return -VAR_1;





 VAR_9 = VAR_4->read(VAR_4);
 VAR_8 = VAR_5->get(VAR_5, 0, VAR_3->fan->tach.func, VAR_3->fan->tach.line);
 VAR_6 = 0;
 do {
  FUNC_9(500, 1000);

  VAR_7 = VAR_5->get(VAR_5, 0, VAR_3->fan->tach.func, VAR_3->fan->tach.line);
  if (VAR_8 != VAR_7) {
   if (!VAR_9)
    VAR_9 = VAR_4->read(VAR_4);
   VAR_6++;
   VAR_8 = VAR_7;
  }
 } while (VAR_6 < 5 && VAR_4->read(VAR_4) - VAR_9 < 250000000);
 VAR_10 = VAR_4->read(VAR_4);

 if (VAR_6 == 5) {
  VAR_11 = (u64)60000000000ULL;
  FUNC_0(VAR_11, (VAR_10 - VAR_9));
  return VAR_11;
 } else
  return 0;
}
