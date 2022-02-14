
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct uwb_rc {TYPE_1__ uwb_dev; int active_pals; } ;
struct uwb_pal {int channel; struct uwb_rc* rc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uwb_rc*,int ) ;
 int FUNC_3 (struct uwb_rc*) ;

int FUNC_4(struct uwb_pal *VAR_0)
{
 struct uwb_rc *VAR_1 = VAR_0->rc;
 int VAR_2 = 0;

 FUNC_0(&VAR_1->uwb_dev.mutex);

 if (!VAR_0->channel) {
  VAR_0->channel = -1;
  VAR_1->active_pals++;
  VAR_2 = FUNC_2(VAR_1, FUNC_3(VAR_1));
 }

 FUNC_1(&VAR_1->uwb_dev.mutex);
 return VAR_2;
}
