
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hermes {TYPE_1__* ops; } ;
struct orinoco_private {scalar_t__ iw_mode; int channel_mask; int channel; struct hermes hw; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {scalar_t__ e; int m; } ;
struct TYPE_2__ {int (* cmd_wait ) (struct hermes*,int,int,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 struct orinoco_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct orinoco_private*,unsigned long*) ;
 int FUNC_3 (struct orinoco_private*,unsigned long*) ;
 int FUNC_4 (struct hermes*,int,int,int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_8,
     struct iw_request_info *VAR_9,
     struct iw_freq *VAR_10,
     char *VAR_11)
{
 struct orinoco_private *VAR_12 = FUNC_1(VAR_8);
 int VAR_13 = -1;
 unsigned long VAR_14;
 int VAR_15 = -VAR_1;


 if (VAR_12->iw_mode == VAR_6)
  return -VAR_0;

 if ((VAR_10->e == 0) && (VAR_10->m <= 1000)) {

  VAR_13 = VAR_10->m;
 } else {

  int VAR_16 = 1;
  int VAR_17;


  for (VAR_17 = 0; VAR_17 < (6 - VAR_10->e); VAR_17++)
   VAR_16 *= 10;

  VAR_13 = FUNC_0(VAR_10->m / VAR_16);
 }

 if ((VAR_13 < 1) || (VAR_13 > VAR_7) ||
      !(VAR_12->channel_mask & (1 << (VAR_13 - 1))))
  return -VAR_2;

 if (FUNC_2(VAR_12, &VAR_14) != 0)
  return -VAR_0;

 VAR_12->channel = VAR_13;
 if (VAR_12->iw_mode == VAR_5) {

  struct hermes *VAR_18 = &VAR_12->hw;
  VAR_15 = VAR_18->ops->cmd_wait(VAR_18, VAR_3 |
         VAR_4,
     VAR_13, ((void*)0));
 }
 FUNC_3(VAR_12, &VAR_14);

 return VAR_15;
}
