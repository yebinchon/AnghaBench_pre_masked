
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * class; int * type; } ;
struct TYPE_5__ {int lock; } ;
struct rc_dev {TYPE_4__ dev; int timer_keyup; int keylock; TYPE_1__ rc_map; TYPE_2__* input_dev; } ;
struct TYPE_6__ {int setkeycode; int getkeycode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,struct rc_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct rc_dev*) ;
 struct rc_dev* FUNC_5 (int,int ) ;
 int VAR_6 ;
 int FUNC_6 (int *,int ,unsigned long) ;
 int FUNC_7 (int *) ;

struct rc_dev *FUNC_8(void)
{
 struct rc_dev *VAR_7;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->input_dev = FUNC_2();
 if (!VAR_7->input_dev) {
  FUNC_4(VAR_7);
  return ((void*)0);
 }

 VAR_7->input_dev->getkeycode = VAR_2;
 VAR_7->input_dev->setkeycode = VAR_4;
 FUNC_3(VAR_7->input_dev, VAR_7);

 FUNC_7(&VAR_7->rc_map.lock);
 FUNC_7(&VAR_7->keylock);
 FUNC_6(&VAR_7->timer_keyup, VAR_5, (unsigned long)VAR_7);

 VAR_7->dev.type = &VAR_6;
 VAR_7->dev.class = &VAR_3;
 FUNC_1(&VAR_7->dev);

 FUNC_0(VAR_1);
 return VAR_7;
}
