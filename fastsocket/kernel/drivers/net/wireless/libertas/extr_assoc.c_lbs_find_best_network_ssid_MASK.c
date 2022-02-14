
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct lbs_private {scalar_t__ surpriseremoved; scalar_t__ scan_ssid_len; } ;
struct bss_descriptor {scalar_t__ ssid_len; scalar_t__ mode; int ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct bss_descriptor* FUNC_2 (struct lbs_private*,scalar_t__) ;
 int FUNC_3 (struct lbs_private*,int) ;
 int FUNC_4 (scalar_t__*,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct lbs_private *VAR_2,
 uint8_t *VAR_3, uint8_t *VAR_4, uint8_t VAR_5,
 uint8_t *VAR_6)
{
 int VAR_7 = -1;
 struct bss_descriptor *VAR_8;

 FUNC_0(VAR_1);

 VAR_2->scan_ssid_len = 0;
 FUNC_3(VAR_2, 1);
 if (VAR_2->surpriseremoved)
  goto out;

 VAR_8 = FUNC_2(VAR_2, VAR_5);
 if (VAR_8 && (VAR_8->ssid_len > 0)) {
  FUNC_4(VAR_3, &VAR_8->ssid, VAR_0);
  *VAR_4 = VAR_8->ssid_len;
  *VAR_6 = VAR_8->mode;
  VAR_7 = 0;
 }

out:
 FUNC_1(VAR_1, "ret %d", VAR_7);
 return VAR_7;
}
