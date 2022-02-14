
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ length; } ;
union iwreq_data {TYPE_1__ data; } ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_9__ {scalar_t__ spy_number; } ;
struct TYPE_10__ {int mib_sem; TYPE_2__ spy_data; } ;
typedef TYPE_3__ islpci_private ;
typedef enum oid_num_t { ____Placeholder_oid_num_t } oid_num_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*,struct iw_request_info*,union iwreq_data*,char*) ;
 int FUNC_2 (TYPE_3__*,int*,int) ;
 int FUNC_3 (TYPE_3__*,int,int *) ;
 int FUNC_4 (TYPE_3__*,int,int *) ;
 TYPE_3__* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_2,
  struct iw_request_info *VAR_3,
  union iwreq_data *VAR_4, char *VAR_5)
{
 islpci_private *VAR_6 = FUNC_5(VAR_2);
 u32 VAR_7;
 enum oid_num_t VAR_8 = VAR_1;

 FUNC_0(&VAR_6->mib_sem);
 FUNC_3(VAR_6, VAR_1, &VAR_7);

 if ((VAR_4->data.length == 0) && (VAR_6->spy_data.spy_number > 0))

  VAR_7 &= ~VAR_0;
 else if ((VAR_4->data.length > 0) && (VAR_6->spy_data.spy_number == 0))

  VAR_7 |= VAR_0;

 FUNC_4(VAR_6, VAR_1, &VAR_7);
 FUNC_2(VAR_6, &VAR_8, 1);
 FUNC_6(&VAR_6->mib_sem);

 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
