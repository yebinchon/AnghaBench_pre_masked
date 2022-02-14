
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct resource {int start; } ;
struct iforce_core_effect {int flags; struct resource mod2_chunk; struct resource mod1_chunk; } ;
struct iforce {struct iforce_core_effect* core_effects; } ;
struct TYPE_8__ {int interval; int button; } ;
struct TYPE_7__ {int delay; int length; } ;
struct TYPE_6__ {TYPE_1__* condition; } ;
struct ff_effect {int id; int type; int direction; TYPE_4__ trigger; TYPE_3__ replay; TYPE_2__ u; } ;
struct TYPE_5__ {int center; int deadband; int left_coeff; int right_coeff; int left_saturation; int right_saturation; } ;



 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct iforce*,struct resource*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct iforce*,int,int ,int ,int,int,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct iforce*,struct ff_effect*,struct ff_effect*) ;
 scalar_t__ FUNC_3 (struct ff_effect*,struct ff_effect*) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct iforce *VAR_2, struct ff_effect *VAR_3, struct ff_effect *VAR_4)
{
 int VAR_5 = VAR_3->id;
 struct iforce_core_effect* VAR_6 = VAR_2->core_effects + VAR_5;
 struct resource* VAR_7 = &(VAR_6->mod1_chunk);
 struct resource* VAR_8 = &(VAR_6->mod2_chunk);
 u8 VAR_9;
 int VAR_10 = 1;
 int VAR_11 = 0;

 switch (VAR_3->type) {
  case 128: VAR_9 = 0x40; break;
  case 129: VAR_9 = 0x41; break;
  default: return -1;
 }

 if (!VAR_4 || FUNC_2(VAR_2, VAR_4, VAR_3)) {
  VAR_10 = FUNC_0(VAR_2, VAR_7,
   VAR_4 != ((void*)0),
   VAR_3->u.condition[0].right_saturation,
   VAR_3->u.condition[0].left_saturation,
   VAR_3->u.condition[0].right_coeff,
   VAR_3->u.condition[0].left_coeff,
   VAR_3->u.condition[0].deadband,
   VAR_3->u.condition[0].center);
  if (VAR_10)
   return VAR_10;
  FUNC_4(VAR_0, VAR_6->flags);

  VAR_10 = FUNC_0(VAR_2, VAR_8,
   VAR_4 != ((void*)0),
   VAR_3->u.condition[1].right_saturation,
   VAR_3->u.condition[1].left_saturation,
   VAR_3->u.condition[1].right_coeff,
   VAR_3->u.condition[1].left_coeff,
   VAR_3->u.condition[1].deadband,
   VAR_3->u.condition[1].center);
  if (VAR_10)
   return VAR_10;
  FUNC_4(VAR_1, VAR_6->flags);

 }

 if (!VAR_4 || FUNC_3(VAR_4, VAR_3)) {
  VAR_11 = FUNC_1(VAR_2, VAR_3->id,
   VAR_7->start, VAR_8->start,
   VAR_9, 0xc0,
   VAR_3->replay.length, VAR_3->replay.delay,
   VAR_3->trigger.button, VAR_3->trigger.interval,
   VAR_3->direction);
 }







 return VAR_11 < 0 ? VAR_11 : VAR_10;
}
