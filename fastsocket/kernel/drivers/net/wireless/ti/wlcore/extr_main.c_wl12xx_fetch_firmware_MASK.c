
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {char* plt_fw_name; int last_vif_count; char* mr_fw_name; char* sr_fw_name; int fw_type; int fw_len; int fw; int dev; } ;
struct firmware {int size; int data; } ;
typedef enum wl12xx_fw_type { ____Placeholder_wl12xx_fw_type } wl12xx_fw_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct firmware const*) ;
 int FUNC_2 (struct firmware const**,char const*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,char const*) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int FUNC_7(struct wl1271 *VAR_7, bool VAR_8)
{
 const struct firmware *VAR_9;
 const char *VAR_10;
 enum wl12xx_fw_type VAR_11;
 int VAR_12;

 if (VAR_8) {
  VAR_11 = VAR_6;
  VAR_10 = VAR_7->plt_fw_name;
 } else {




  if (VAR_7->last_vif_count > 1 && VAR_7->mr_fw_name) {
   VAR_11 = VAR_3;
   VAR_10 = VAR_7->mr_fw_name;
  } else {
   VAR_11 = VAR_5;
   VAR_10 = VAR_7->sr_fw_name;
  }
 }

 if (VAR_7->fw_type == VAR_11)
  return 0;

 FUNC_5(VAR_0, "booting firmware %s", VAR_10);

 VAR_12 = FUNC_2(&VAR_9, VAR_10, VAR_7->dev);

 if (VAR_12 < 0) {
  FUNC_6("could not get firmware %s: %d", VAR_10, VAR_12);
  return VAR_12;
 }

 if (VAR_9->size % 4) {
  FUNC_6("firmware size is not multiple of 32 bits: %zu",
        VAR_9->size);
  VAR_12 = -VAR_1;
  goto out;
 }

 FUNC_3(VAR_7->fw);
 VAR_7->fw_type = VAR_4;
 VAR_7->fw_len = VAR_9->size;
 VAR_7->fw = FUNC_4(VAR_7->fw_len);

 if (!VAR_7->fw) {
  FUNC_6("could not allocate memory for the firmware");
  VAR_12 = -VAR_2;
  goto out;
 }

 FUNC_0(VAR_7->fw, VAR_9->data, VAR_7->fw_len);
 VAR_12 = 0;
 VAR_7->fw_type = VAR_11;
out:
 FUNC_1(VAR_9);

 return VAR_12;
}
