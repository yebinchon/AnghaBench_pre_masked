
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_request_info {int dummy; } ;
struct iw_param {int value; } ;
typedef int netdevice_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,struct iw_param*,int *) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(netdevice_t *VAR_1,
         struct iw_request_info *VAR_2,
         char *VAR_3, char *VAR_4)
{
 struct iw_param VAR_5;
 int VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_1, ((void*)0), &VAR_5, ((void*)0));

 if (VAR_6) {
  VAR_7 = -VAR_0;
  goto exit;
 }

 switch (VAR_5.value) {
 case 1000000:
 case 2000000:
  FUNC_1(VAR_3, "IEEE 802.11-DS");
  break;
 case 5500000:
 case 11000000:
  FUNC_1(VAR_3, "IEEE 802.11-b");
  break;
 }
exit:
 return VAR_7;
}
