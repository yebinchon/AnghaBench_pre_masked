
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union oid_res_t {int u; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; int value; scalar_t__ disabled; } ;
typedef int islpci_private ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ,int *,union oid_res_t*) ;
 int * FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_8, struct iw_request_info *VAR_9,
    struct iw_param *VAR_10, char *VAR_11)
{
 islpci_private *VAR_12 = FUNC_1(VAR_8);
 union oid_res_t VAR_13;
 int VAR_14 = 0;
 VAR_10->disabled = 0;

 if ((VAR_10->flags & VAR_7) == VAR_3) {

  VAR_14 =
      FUNC_0(VAR_12, VAR_1, 0, ((void*)0), &VAR_13);
  VAR_10->value = VAR_13.u * 1024;
  VAR_10->flags = VAR_3;
 } else if ((VAR_10->flags & VAR_5)) {

  VAR_14 |=
      FUNC_0(VAR_12, VAR_0, 0, ((void*)0), &VAR_13);
  VAR_10->value = VAR_13.u;
  VAR_10->flags = VAR_4 | VAR_5;
 } else {

  VAR_14 |=
      FUNC_0(VAR_12, VAR_2, 0, ((void*)0), &VAR_13);
  VAR_10->value = VAR_13.u;
  VAR_10->flags = VAR_4 | VAR_6;
 }

 return VAR_14;
}
