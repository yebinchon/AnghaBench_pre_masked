
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; } ;
struct TYPE_3__ {int mib_sem; int nickname; } ;
typedef TYPE_1__ islpci_private ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 TYPE_1__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_2, struct iw_request_info *VAR_3,
   struct iw_point *VAR_4, char *VAR_5)
{
 islpci_private *VAR_6 = FUNC_3(VAR_2);

 if (VAR_4->length > VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_6->mib_sem);
 FUNC_2(VAR_6->nickname, 0, sizeof (VAR_6->nickname));
 FUNC_1(VAR_6->nickname, VAR_5, VAR_4->length);
 FUNC_4(&VAR_6->mib_sem);

 return 0;
}
