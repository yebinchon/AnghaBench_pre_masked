
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union oid_res_t {scalar_t__ u; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; int fixed; scalar_t__ disabled; } ;
typedef int s32 ;
typedef int islpci_private ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int *,union oid_res_t*) ;
 int * FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_1, struct iw_request_info *VAR_2,
      struct iw_param *VAR_3, char *VAR_4)
{
 islpci_private *VAR_5 = FUNC_1(VAR_1);
 union oid_res_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_0, 0, ((void*)0), &VAR_6);

 VAR_3->value = (s32) VAR_6.u / 4;
 VAR_3->fixed = 1;



 VAR_3->disabled = 0;

 return VAR_7;
}
