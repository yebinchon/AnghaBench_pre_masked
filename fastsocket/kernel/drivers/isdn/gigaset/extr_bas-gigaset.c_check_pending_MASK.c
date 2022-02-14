
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bas_cardstate {int pending; int basstate; int lock; int timer_ctrl; TYPE_1__* interface; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct bas_cardstate *VAR_4)
{
 unsigned long VAR_5;

 FUNC_2(&VAR_4->lock, VAR_5);
 switch (VAR_4->pending) {
 case 0:
  break;
 case 131:
  if (VAR_4->basstate & VAR_0)
   VAR_4->pending = 0;
  break;
 case 130:
  if (VAR_4->basstate & VAR_1)
   VAR_4->pending = 0;
  break;
 case 129:
  if (VAR_4->basstate & VAR_2)
   VAR_4->pending = 0;
  break;
 case 135:
  if (!(VAR_4->basstate & VAR_0))
   VAR_4->pending = 0;
  break;
 case 134:
  if (!(VAR_4->basstate & VAR_1))
   VAR_4->pending = 0;
  break;
 case 133:
  if (!(VAR_4->basstate & VAR_2))
   VAR_4->pending = 0;
  break;
 case 132:
  VAR_4->pending = 0;
  break;
 case 128:
  if (!(VAR_4->basstate & VAR_3))
   VAR_4->pending = 0;
  break;




 default:
  FUNC_1(&VAR_4->interface->dev,
    "unknown pending request 0x%02x cleared\n",
    VAR_4->pending);
  VAR_4->pending = 0;
 }

 if (!VAR_4->pending)
  FUNC_0(&VAR_4->timer_ctrl);

 FUNC_3(&VAR_4->lock, VAR_5);
}
