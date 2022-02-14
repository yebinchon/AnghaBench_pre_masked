
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct islpci_acl {scalar_t__ policy; } ;
struct TYPE_5__ {scalar_t__ iw_mode; int mib_sem; scalar_t__ wpa; struct islpci_acl acl; } ;
typedef TYPE_1__ islpci_private ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 TYPE_1__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct islpci_acl*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_9, struct iw_request_info *VAR_10,
     __u32 * VAR_11, char *VAR_12)
{
 islpci_private *VAR_13 = FUNC_3(VAR_9);
 struct islpci_acl *VAR_14 = &VAR_13->acl;
 u32 VAR_15;

 FUNC_4(VAR_14);

 if ((*VAR_11 < VAR_7) || (*VAR_11 > VAR_8))
  return -VAR_4;

 FUNC_0(&VAR_13->mib_sem);

 VAR_14->policy = *VAR_11;


 if ((VAR_13->iw_mode == VAR_6) &&
     (VAR_14->policy != VAR_7))
  VAR_15 = VAR_2;
 else
  VAR_15 = VAR_0;
 if (VAR_13->wpa)
  VAR_15 = VAR_1;
 FUNC_2(VAR_13, VAR_3, &VAR_15);

 if (FUNC_1(VAR_13)) {
  FUNC_5(&VAR_13->mib_sem);
  return -VAR_5;
 }
 FUNC_5(&VAR_13->mib_sem);

 return 0;
}
