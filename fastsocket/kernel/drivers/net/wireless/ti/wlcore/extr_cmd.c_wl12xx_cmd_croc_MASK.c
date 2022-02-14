
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl12xx_cmd_croc {int role_id; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wl12xx_cmd_croc*) ;
 struct wl12xx_cmd_croc* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wl12xx_cmd_croc*,int,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct wl1271 *VAR_4, u8 VAR_5)
{
 struct wl12xx_cmd_croc *VAR_6;
 int VAR_7 = 0;

 FUNC_3(VAR_1, "cmd croc (%d)", VAR_5);

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_3);
 if (!VAR_6) {
  VAR_7 = -VAR_2;
  goto out;
 }
 VAR_6->role_id = VAR_5;

 VAR_7 = FUNC_2(VAR_4, VAR_0, VAR_6,
         sizeof(*VAR_6), 0);
 if (VAR_7 < 0) {
  FUNC_4("failed to send ROC command");
  goto out_free;
 }

out_free:
 FUNC_0(VAR_6);

out:
 return VAR_7;
}
