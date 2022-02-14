
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1251 {int fw_len; int fw; TYPE_1__* hw; } ;
struct firmware {int size; int data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct firmware const*) ;
 int FUNC_2 (struct firmware const**,int ,struct device*) ;
 int FUNC_3 (int) ;
 struct device* FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(struct wl1251 *VAR_3)
{
 const struct firmware *VAR_4;
 struct device *VAR_5 = FUNC_4(VAR_3->hw->wiphy);
 int VAR_6;

 VAR_6 = FUNC_2(&VAR_4, VAR_2, VAR_5);

 if (VAR_6 < 0) {
  FUNC_5("could not get firmware: %d", VAR_6);
  return VAR_6;
 }

 if (VAR_4->size % 4) {
  FUNC_5("firmware size is not multiple of 32 bits: %zu",
        VAR_4->size);
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_3->fw_len = VAR_4->size;
 VAR_3->fw = FUNC_3(VAR_3->fw_len);

 if (!VAR_3->fw) {
  FUNC_5("could not allocate memory for the firmware");
  VAR_6 = -VAR_1;
  goto out;
 }

 FUNC_0(VAR_3->fw, VAR_4->data, VAR_3->fw_len);

 VAR_6 = 0;

out:
 FUNC_1(VAR_4);

 return VAR_6;
}
