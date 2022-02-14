
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uwb_rc_cmd_cb_f ;
typedef int u8 ;
typedef int u16 ;
struct uwb_rccb {int bCommandContext; } ;
struct TYPE_4__ {unsigned long data; int function; } ;
struct uwb_rc_neh {int list_node; int context; void* arg; int cb; int evt; int evt_type; struct uwb_rc* rc; TYPE_2__ timer; int kref; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;
struct uwb_rc {int neh_lock; int neh_list; TYPE_1__ uwb_dev; } ;


 int VAR_0 ;
 struct uwb_rc_neh* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uwb_rc*,struct uwb_rc_neh*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct uwb_rc_neh*) ;
 int FUNC_7 (int *) ;
 struct uwb_rc_neh* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (struct uwb_rc_neh*) ;
 int VAR_2 ;

struct uwb_rc_neh *FUNC_13(struct uwb_rc *VAR_3, struct uwb_rccb *VAR_4,
      u8 VAR_5, u16 VAR_6,
      uwb_rc_cmd_cb_f VAR_7, void *VAR_8)
{
 int VAR_9;
 unsigned long VAR_10;
 struct device *VAR_11 = &VAR_3->uwb_dev.dev;
 struct uwb_rc_neh *VAR_12;

 VAR_12 = FUNC_8(sizeof(*VAR_12), VAR_1);
 if (VAR_12 == ((void*)0)) {
  VAR_9 = -VAR_0;
  goto error_kzalloc;
 }

 FUNC_7(&VAR_12->kref);
 FUNC_1(&VAR_12->list_node);
 FUNC_5(&VAR_12->timer);
 VAR_12->timer.function = VAR_2;
 VAR_12->timer.data = (unsigned long)VAR_12;

 VAR_12->rc = VAR_3;
 VAR_12->evt_type = VAR_5;
 VAR_12->evt = FUNC_3(VAR_6);
 VAR_12->cb = VAR_7;
 VAR_12->arg = VAR_8;

 FUNC_10(&VAR_3->neh_lock, VAR_10);
 VAR_9 = FUNC_2(VAR_3, VAR_12);
 if (VAR_9 >= 0) {
  VAR_4->bCommandContext = VAR_12->context;
  FUNC_9(&VAR_12->list_node, &VAR_3->neh_list);
  FUNC_12(VAR_12);
 }
 FUNC_11(&VAR_3->neh_lock, VAR_10);
 if (VAR_9 < 0)
  goto error_ctx_get;

 return VAR_12;

error_ctx_get:
 FUNC_6(VAR_12);
error_kzalloc:
 FUNC_4(VAR_11, "cannot open handle to radio controller: %d\n", VAR_9);
 return FUNC_0(VAR_9);
}
