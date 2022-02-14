
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int intr; } ;
struct TYPE_3__ {int alarm; int read; TYPE_2__ base; } ;
struct nv04_timer_priv {int lock; int alarms; TYPE_1__ base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nv04_timer_priv**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nouveau_object* FUNC_2 (struct nv04_timer_priv*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_3, struct nouveau_object *VAR_4,
  struct nouveau_oclass *VAR_5, void *VAR_6, u32 VAR_7,
  struct nouveau_object **VAR_8)
{
 struct nv04_timer_priv *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_9);
 *VAR_8 = FUNC_2(VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_9->base.base.intr = VAR_1;
 VAR_9->base.read = VAR_2;
 VAR_9->base.alarm = VAR_0;

 FUNC_0(&VAR_9->alarms);
 FUNC_3(&VAR_9->lock);
 return 0;
}
