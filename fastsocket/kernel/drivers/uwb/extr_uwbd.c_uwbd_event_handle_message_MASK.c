
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
struct uwb_event {size_t message; struct uwb_rc* rc; } ;
struct TYPE_5__ {int (* handler ) (struct uwb_event*) ;int name; } ;


 size_t FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,char*,size_t,...) ;
 int FUNC_2 (struct uwb_event*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct uwb_event *VAR_1)
{
 struct uwb_rc *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->rc;

 if (VAR_1->message < 0 || VAR_1->message >= FUNC_0(VAR_0)) {
  FUNC_1(&VAR_2->uwb_dev.dev, "UWBD: invalid message type %d\n", VAR_1->message);
  return;
 }

 VAR_3 = VAR_0[VAR_1->message].handler(VAR_1);
 if (VAR_3 < 0)
  FUNC_1(&VAR_2->uwb_dev.dev, "UWBD: '%s' message failed: %d\n",
   VAR_0[VAR_1->message].name, VAR_3);
}
