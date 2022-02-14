
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct uwb_rc {int (* reset ) (struct uwb_rc*) ;TYPE_1__ uwb_dev; } ;
struct uwb_event {struct uwb_rc* rc; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct uwb_rc*) ;
 int FUNC_4 (struct uwb_rc*) ;

int FUNC_5(struct uwb_event *VAR_0)
{
 struct uwb_rc *VAR_1 = VAR_0->rc;
 int VAR_2;

 FUNC_1(&VAR_1->uwb_dev.dev, "resetting radio controller\n");
 VAR_2 = VAR_1->reset(VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(&VAR_1->uwb_dev.dev, "failed to reset hardware: %d\n", VAR_2);
  goto error;
 }
 return 0;
error:


 FUNC_2(1000);
 FUNC_4(VAR_1);
 return VAR_2;
}
