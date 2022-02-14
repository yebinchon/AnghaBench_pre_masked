
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_rc_evt_drp {void* ie_data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
struct uwb_ie_hdr {int element_id; } ;
struct uwb_ie_drp_avail {int dummy; } ;
struct uwb_ie_drp {int dummy; } ;
struct uwb_dev {int dummy; } ;




 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct uwb_rc*,struct uwb_dev*,struct uwb_ie_drp_avail*) ;
 int FUNC_2 (struct uwb_rc*,struct uwb_rc_evt_drp*,struct uwb_dev*,struct uwb_ie_drp*) ;
 struct uwb_ie_hdr* FUNC_3 (void**,size_t*) ;

__attribute__((used)) static
void FUNC_4(struct uwb_rc *VAR_0, struct uwb_rc_evt_drp *VAR_1,
    size_t VAR_2, struct uwb_dev *VAR_3)
{
 struct device *VAR_4 = &VAR_0->uwb_dev.dev;
 struct uwb_ie_hdr *VAR_5;
 void *VAR_6;

 VAR_6 = VAR_1->ie_data;
 for (;;) {
  VAR_5 = FUNC_3(&VAR_6, &VAR_2);
  if (!VAR_5)
   break;

  switch (VAR_5->element_id) {
  case 128:
   FUNC_1(VAR_0, VAR_3, (struct uwb_ie_drp_avail *)VAR_5);
   break;
  case 129:
   FUNC_2(VAR_0, VAR_1, VAR_3, (struct uwb_ie_drp *)VAR_5);
   break;
  default:
   FUNC_0(VAR_4, "unexpected IE in DRP notification\n");
   break;
  }
 }

 if (VAR_2 > 0)
  FUNC_0(VAR_4, "%d octets remaining in DRP notification\n",
    (int)VAR_2);
}
