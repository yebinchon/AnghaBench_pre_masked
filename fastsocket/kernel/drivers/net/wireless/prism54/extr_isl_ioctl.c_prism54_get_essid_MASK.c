
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union oid_res_t {struct obj_ssid* ptr; } ;
typedef int u8 ;
struct obj_ssid {int length; char* octets; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;
typedef int islpci_private ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct obj_ssid*) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (int *,int ,int ,int *,union oid_res_t*) ;
 int FUNC_3 (int ,int) ;
 int * FUNC_4 (struct net_device*) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_2, struct iw_request_info *VAR_3,
    struct iw_point *VAR_4, char *VAR_5)
{
 islpci_private *VAR_6 = FUNC_4(VAR_2);
 struct obj_ssid *VAR_7;
 union oid_res_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_6, VAR_0, 0, ((void*)0), &VAR_8);
 VAR_7 = VAR_8.ptr;

 if (VAR_7->length) {
  VAR_4->flags = 1;

  VAR_4->length = FUNC_3((u8)VAR_1, VAR_7->length);
 } else {
  VAR_4->flags = 0;
  VAR_4->length = 0;
 }
 VAR_7->octets[VAR_7->length] = '\0';
 FUNC_1(VAR_5, VAR_7->octets, VAR_4->length);
 FUNC_0(VAR_7);

 return VAR_9;
}
