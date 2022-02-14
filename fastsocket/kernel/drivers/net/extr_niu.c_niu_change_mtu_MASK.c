
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long data; int function; scalar_t__ expires; } ;
struct TYPE_4__ {scalar_t__ loopback_mode; } ;
struct niu {TYPE_2__ timer; TYPE_1__ link_config; int lock; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_5 ;
 struct niu* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct niu*) ;
 int FUNC_7 (struct niu*,int) ;
 int FUNC_8 (struct niu*) ;
 int FUNC_9 (struct niu*) ;
 int FUNC_10 (struct niu*,struct net_device*) ;
 int FUNC_11 (struct niu*) ;
 int FUNC_12 (struct niu*) ;
 int VAR_6 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_7, int VAR_8)
{
 struct niu *VAR_9 = FUNC_2(VAR_7);
 int VAR_10, VAR_11, VAR_12;

 if (VAR_8 < 68 || VAR_8 > VAR_4)
  return -VAR_0;

 VAR_11 = (VAR_7->mtu > VAR_1);
 VAR_12 = (VAR_8 > VAR_1);

 VAR_7->mtu = VAR_8;

 if (!FUNC_4(VAR_7) ||
     (VAR_11 == VAR_12))
  return 0;

 FUNC_10(VAR_9, VAR_7);

 FUNC_9(VAR_9);

 FUNC_8(VAR_9);

 VAR_10 = FUNC_6(VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_13(&VAR_9->lock);

 VAR_10 = FUNC_11(VAR_9);
 if (!VAR_10) {
  FUNC_1(&VAR_9->timer);
  VAR_9->timer.expires = VAR_5 + VAR_2;
  VAR_9->timer.data = (unsigned long) VAR_9;
  VAR_9->timer.function = VAR_6;

  VAR_10 = FUNC_7(VAR_9, 1);
  if (VAR_10)
   FUNC_12(VAR_9);
 }

 FUNC_14(&VAR_9->lock);

 if (!VAR_10) {
  FUNC_5(VAR_7);
  if (VAR_9->link_config.loopback_mode != VAR_3)
   FUNC_3(VAR_7);

  FUNC_0(&VAR_9->timer);
 }

 return VAR_10;
}
