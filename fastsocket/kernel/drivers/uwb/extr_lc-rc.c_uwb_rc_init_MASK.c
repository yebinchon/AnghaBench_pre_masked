
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int mutex; int list; } ;
struct TYPE_5__ {int mutex; int list; } ;
struct TYPE_4__ {int release; int * class; } ;
struct uwb_dev {TYPE_1__ dev; } ;
struct uwb_rc {int beaconing; TYPE_3__ uwb_beca; TYPE_2__ notifs_chain; int scan_type; struct uwb_dev uwb_dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uwb_dev*) ;
 int FUNC_3 (struct uwb_rc*) ;
 int VAR_1 ;
 int FUNC_4 (struct uwb_rc*) ;
 int FUNC_5 (struct uwb_rc*) ;
 int FUNC_6 (struct uwb_rc*) ;
 int VAR_2 ;
 int FUNC_7 (struct uwb_rc*) ;

void FUNC_8(struct uwb_rc *VAR_3)
{
 struct uwb_dev *VAR_4 = &VAR_3->uwb_dev;

 FUNC_2(VAR_4);
 VAR_3->uwb_dev.dev.class = &VAR_1;
 VAR_3->uwb_dev.dev.release = VAR_2;
 FUNC_5(VAR_3);
 VAR_3->beaconing = -1;
 VAR_3->scan_type = VAR_0;
 FUNC_0(&VAR_3->notifs_chain.list);
 FUNC_1(&VAR_3->notifs_chain.mutex);
 FUNC_0(&VAR_3->uwb_beca.list);
 FUNC_1(&VAR_3->uwb_beca.mutex);
 FUNC_3(VAR_3);
 FUNC_4(VAR_3);
 FUNC_7(VAR_3);
 FUNC_6(VAR_3);
}
