
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long data; int function; scalar_t__ expires; } ;
struct TYPE_4__ {scalar_t__ loopback_mode; } ;
struct niu {TYPE_2__ timer; TYPE_1__ link_config; int lock; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 struct niu* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct niu*) ;
 int FUNC_7 (struct niu*) ;
 int FUNC_8 (struct niu*,int) ;
 int FUNC_9 (struct niu*) ;
 int FUNC_10 (struct niu*) ;
 int FUNC_11 (struct niu*) ;
 int FUNC_12 (struct niu*) ;
 int FUNC_13 (struct niu*) ;
 int FUNC_14 (struct niu*) ;
 int VAR_3 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct net_device *VAR_4)
{
 struct niu *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;

 FUNC_3(VAR_4);

 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6)
  goto out_err;

 VAR_6 = FUNC_8(VAR_5, 0);
 if (VAR_6)
  goto out_free_channels;

 VAR_6 = FUNC_13(VAR_5);
 if (VAR_6)
  goto out_free_channels;

 FUNC_9(VAR_5);

 FUNC_15(&VAR_5->lock);

 VAR_6 = FUNC_12(VAR_5);
 if (!VAR_6) {
  FUNC_1(&VAR_5->timer);
  VAR_5->timer.expires = VAR_2 + VAR_0;
  VAR_5->timer.data = (unsigned long) VAR_5;
  VAR_5->timer.function = VAR_3;

  VAR_6 = FUNC_8(VAR_5, 1);
  if (VAR_6)
   FUNC_14(VAR_5);
 }

 FUNC_16(&VAR_5->lock);

 if (VAR_6) {
  FUNC_7(VAR_5);
  goto out_free_irq;
 }

 FUNC_5(VAR_4);

 if (VAR_5->link_config.loopback_mode != VAR_1)
  FUNC_4(VAR_4);

 FUNC_0(&VAR_5->timer);

 return 0;

out_free_irq:
 FUNC_11(VAR_5);

out_free_channels:
 FUNC_10(VAR_5);

out_err:
 return VAR_6;
}
