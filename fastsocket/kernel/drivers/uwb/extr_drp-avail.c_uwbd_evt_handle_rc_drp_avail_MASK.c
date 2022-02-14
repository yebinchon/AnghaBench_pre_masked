
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ie_valid; int global; } ;
struct uwb_rc {int rsvs_mutex; TYPE_1__ drp_avail; } ;
struct uwb_event {struct uwb_rc* rc; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct uwb_rc*) ;
 int FUNC_5 (struct uwb_rc*) ;
 int FUNC_6 (struct uwb_event*,int ) ;

int FUNC_7(struct uwb_event *VAR_2)
{
 int VAR_3;
 struct uwb_rc *VAR_4 = VAR_2->rc;
 FUNC_0(VAR_1, VAR_0);

 VAR_3 = FUNC_6(VAR_2, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_2(&VAR_4->rsvs_mutex);
 FUNC_1(VAR_4->drp_avail.global, VAR_1, VAR_0);
 VAR_4->drp_avail.ie_valid = 0;
 FUNC_4(VAR_4);
 FUNC_3(&VAR_4->rsvs_mutex);

 FUNC_5(VAR_4);

 return 0;
}
