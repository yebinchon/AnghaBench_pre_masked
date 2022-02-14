
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1251 {int dummy; } ;
struct acx_event_mask {int high_event_mask; int event_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct acx_event_mask*) ;
 struct acx_event_mask* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_event_mask*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1251 *VAR_4, u32 VAR_5)
{
 struct acx_event_mask *VAR_6;
 int VAR_7;

 FUNC_3(VAR_1, "acx event mbox mask");

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_3);
 if (!VAR_6) {
  VAR_7 = -VAR_2;
  goto out;
 }


 VAR_6->high_event_mask = 0xffffffff;

 VAR_6->event_mask = VAR_5;

 VAR_7 = FUNC_2(VAR_4, VAR_0,
       VAR_6, sizeof(*VAR_6));
 if (VAR_7 < 0) {
  FUNC_4("failed to set acx_event_mbox_mask: %d", VAR_7);
  goto out;
 }

out:
 FUNC_0(VAR_6);
 return VAR_7;
}
