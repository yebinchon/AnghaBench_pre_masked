
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {unsigned long data; int function; } ;
struct TYPE_4__ {int (* open ) (struct iss_net_private*) ;} ;
struct iss_net_private {int lock; scalar_t__ timer_val; TYPE_2__ timer; int opened_list; int * mac; int have_mac; TYPE_1__ tp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*,char*,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 struct iss_net_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct net_device*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct iss_net_private*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_5)
{
 struct iss_net_private *VAR_6 = FUNC_5(VAR_5);
 char VAR_7[sizeof "255.255.255.255\0"];
 int VAR_8;

 FUNC_8(&VAR_6->lock);

 if ((VAR_8 = VAR_6->tp.open(VAR_6)) < 0)
  goto out;

 if (!VAR_6->have_mac) {
  FUNC_0(VAR_5, VAR_7, &VAR_6->mac[2]);
  FUNC_7(VAR_5, VAR_6->mac);
 }

 FUNC_6(VAR_5);





 while ((VAR_8 = FUNC_2(VAR_5)) > 0)
  ;

 FUNC_8(&VAR_4);
 FUNC_3(&VAR_6->opened_list, &VAR_3);
 FUNC_9(&VAR_4);

 FUNC_1(&VAR_6->timer);
 VAR_6->timer_val = VAR_0;
 VAR_6->timer.data = (unsigned long) VAR_6;
 VAR_6->timer.function = VAR_1;
 FUNC_4(&VAR_6->timer, VAR_2 + VAR_6->timer_val);

out:
 FUNC_9(&VAR_6->lock);
 return VAR_8;
}
