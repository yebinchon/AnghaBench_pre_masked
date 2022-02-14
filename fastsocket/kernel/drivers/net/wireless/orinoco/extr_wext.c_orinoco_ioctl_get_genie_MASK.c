
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct orinoco_private {scalar_t__ wpa_ie_len; int * wpa_ie; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,scalar_t__) ;
 struct orinoco_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct orinoco_private*,unsigned long*) ;
 int FUNC_3 (struct orinoco_private*,unsigned long*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
       struct iw_request_info *VAR_3,
       union iwreq_data *VAR_4, char *VAR_5)
{
 struct orinoco_private *VAR_6 = FUNC_1(VAR_2);
 unsigned long VAR_7;
 int VAR_8 = 0;

 if (FUNC_2(VAR_6, &VAR_7) != 0)
  return -VAR_1;

 if ((VAR_6->wpa_ie_len == 0) || (VAR_6->wpa_ie == ((void*)0))) {
  VAR_4->data.length = 0;
  goto out;
 }

 if (VAR_4->data.length < VAR_6->wpa_ie_len) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_4->data.length = VAR_6->wpa_ie_len;
 FUNC_0(VAR_5, VAR_6->wpa_ie, VAR_6->wpa_ie_len);

out:
 FUNC_3(VAR_6, &VAR_7);
 return VAR_8;
}
