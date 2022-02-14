
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_rceb {scalar_t__ bEventContext; int wEvent; int bEventType; } ;
struct uwb_rc_neh {int timer; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,int ,int ,scalar_t__,size_t) ;
 int FUNC_2 (struct device*,char*,int ,int ,scalar_t__,size_t) ;
 struct uwb_rceb* FUNC_3 (size_t,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct uwb_rceb*,struct uwb_rceb*,size_t) ;
 int FUNC_6 (struct uwb_rc_neh*,struct uwb_rceb*,size_t) ;
 struct uwb_rc_neh* FUNC_7 (struct uwb_rc*,struct uwb_rceb*) ;
 int FUNC_8 (struct uwb_rc*,struct uwb_rceb*,size_t) ;

__attribute__((used)) static void FUNC_9(struct uwb_rc *VAR_1, struct uwb_rceb *VAR_2, size_t VAR_3)
{
 struct device *VAR_4 = &VAR_1->uwb_dev.dev;
 struct uwb_rc_neh *VAR_5;
 struct uwb_rceb *VAR_6;

 if (VAR_2->bEventContext == 0) {
  VAR_6 = FUNC_3(VAR_3, VAR_0);
  if (VAR_6) {
   FUNC_5(VAR_6, VAR_2, VAR_3);
   FUNC_8(VAR_1, VAR_6, VAR_3);
  } else
   FUNC_1(VAR_4, "event 0x%02x/%04x/%02x (%zu bytes): no memory\n",
    VAR_2->bEventType, FUNC_4(VAR_2->wEvent),
    VAR_2->bEventContext, VAR_3);
 } else {
  VAR_5 = FUNC_7(VAR_1, VAR_2);
  if (VAR_5) {
   FUNC_0(&VAR_5->timer);
   FUNC_6(VAR_5, VAR_2, VAR_3);
  } else
   FUNC_2(VAR_4, "event 0x%02x/%04x/%02x (%zu bytes): nobody cared\n",
     VAR_2->bEventType, FUNC_4(VAR_2->wEvent),
     VAR_2->bEventContext, VAR_3);
 }
}
