
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ length; void* identity; int pvb_field; void* bitmap_ctrl; } ;
struct wl1251_cmd_vbm_update {int len; TYPE_1__ tim; } ;
struct wl1251 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wl1251_cmd_vbm_update*) ;
 struct wl1251_cmd_vbm_update* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,void*,int ) ;
 int FUNC_4 (struct wl1251*,int ,struct wl1251_cmd_vbm_update*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ,int ) ;

int FUNC_8(struct wl1251 *VAR_5, u8 VAR_6,
     void *VAR_7, u16 VAR_8, u8 VAR_9)
{
 struct wl1251_cmd_vbm_update *VAR_10;
 int VAR_11;

 FUNC_5(VAR_1, "cmd vbm");

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_3);
 if (!VAR_10) {
  VAR_11 = -VAR_2;
  goto out;
 }


 VAR_10->tim.bitmap_ctrl = VAR_9;
 if (VAR_8 > VAR_4) {
  FUNC_7("cmd vbm len is %d B, truncating to %d",
          VAR_8, VAR_4);
  VAR_8 = VAR_4;
 }
 FUNC_3(VAR_10->tim.pvb_field, VAR_7, VAR_8);
 VAR_10->tim.identity = VAR_6;
 VAR_10->tim.length = VAR_8 + 3;

 VAR_10->len = FUNC_0(VAR_8 + 5);

 VAR_11 = FUNC_4(VAR_5, VAR_0, VAR_10, sizeof(*VAR_10));
 if (VAR_11 < 0) {
  FUNC_6("VBM command failed");
  goto out;
 }

out:
 FUNC_1(VAR_10);
 return VAR_11;
}
