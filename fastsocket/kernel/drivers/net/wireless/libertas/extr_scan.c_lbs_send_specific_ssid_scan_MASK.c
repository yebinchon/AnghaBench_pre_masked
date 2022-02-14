
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct lbs_private {scalar_t__ surpriseremoved; scalar_t__ scan_ssid_len; int scan_ssid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct lbs_private*,int) ;
 int FUNC_4 (int ,scalar_t__*,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__*,scalar_t__) ;
 int VAR_1 ;

int FUNC_6(struct lbs_private *VAR_2, uint8_t *VAR_3,
    uint8_t VAR_4)
{
 FUNC_0(VAR_1);
 int VAR_5 = 0;

 FUNC_1(VAR_0, "SSID '%s'\n",
      FUNC_5(VAR_1, VAR_3, VAR_4));

 if (!VAR_4)
  goto out;

 FUNC_4(VAR_2->scan_ssid, VAR_3, VAR_4);
 VAR_2->scan_ssid_len = VAR_4;

 FUNC_3(VAR_2, 1);
 if (VAR_2->surpriseremoved) {
  VAR_5 = -1;
  goto out;
 }

out:
 FUNC_2(VAR_0, "ret %d", VAR_5);
 return VAR_5;
}
