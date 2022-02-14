
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {scalar_t__ wpa_ie_len; int wpa_ie; } ;
struct TYPE_2__ {scalar_t__ WPA2enabled; scalar_t__ WPAenabled; } ;
struct assoc_request {scalar_t__ wpa_ie_len; int wpa_ie; TYPE_1__ secinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct lbs_private *VAR_2,
                               struct assoc_request * VAR_3)
{
 int VAR_4 = 0;

 FUNC_0(VAR_0);

 if (VAR_3->secinfo.WPAenabled || VAR_3->secinfo.WPA2enabled) {
  FUNC_2(&VAR_2->wpa_ie, &VAR_3->wpa_ie, VAR_3->wpa_ie_len);
  VAR_2->wpa_ie_len = VAR_3->wpa_ie_len;
 } else {
  FUNC_3(&VAR_2->wpa_ie, 0, VAR_1);
  VAR_2->wpa_ie_len = 0;
 }

 FUNC_1(VAR_0, "ret %d", VAR_4);
 return VAR_4;
}
