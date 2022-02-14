
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {scalar_t__ wpa_ie_len; int * wpa_ie; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {scalar_t__ length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
     struct iw_request_info *VAR_3,
     struct iw_point *VAR_4,
     char *VAR_5)
{
 int VAR_6 = 0;
 struct lbs_private *VAR_7 = VAR_2->ml_priv;

 FUNC_0(VAR_1);

 if (VAR_7->wpa_ie_len == 0) {
  VAR_4->length = 0;
  goto out;
 }

 if (VAR_4->length < VAR_7->wpa_ie_len) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_4->length = VAR_7->wpa_ie_len;
 FUNC_2(VAR_5, &VAR_7->wpa_ie[0], VAR_7->wpa_ie_len);

out:
 FUNC_1(VAR_1, "ret %d", VAR_6);
 return VAR_6;
}
