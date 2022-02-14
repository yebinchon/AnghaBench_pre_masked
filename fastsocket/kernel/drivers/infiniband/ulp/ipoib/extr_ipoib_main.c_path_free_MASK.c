
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int raw; } ;
struct TYPE_4__ {TYPE_1__ dgid; } ;
struct ipoib_path {scalar_t__ ah; TYPE_2__ pathrec; int queue; } ;


 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct ipoib_path*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_0, struct ipoib_path *VAR_1)
{
 struct sk_buff *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_1->queue)))
  FUNC_1(VAR_2);

 FUNC_2(FUNC_6(VAR_0), "path_free\n");


 FUNC_3(VAR_0, VAR_1->pathrec.dgid.raw);

 if (VAR_1->ah)
  FUNC_4(VAR_1->ah);

 FUNC_5(VAR_1);
}
