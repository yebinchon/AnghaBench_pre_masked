
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {void* len; void* type; } ;
struct mrvl_ie_ssid_param_set {int ssid; TYPE_1__ header; } ;
struct lbs_private {int scan_ssid_len; int scan_ssid; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct lbs_private *VAR_1, u8 *VAR_2)
{
 struct mrvl_ie_ssid_param_set *VAR_3 = (void *)VAR_2;

 VAR_3->header.type = FUNC_0(VAR_0);
 VAR_3->header.len = FUNC_0(VAR_1->scan_ssid_len);
 FUNC_1(VAR_3->ssid, VAR_1->scan_ssid, VAR_1->scan_ssid_len);
 return sizeof(VAR_3->header) + VAR_1->scan_ssid_len;
}
