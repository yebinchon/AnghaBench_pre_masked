
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sniffer; } ;
struct TYPE_3__ {scalar_t__ promisc_mode; scalar_t__ guestlan; } ;
struct qeth_card {TYPE_2__ options; TYPE_1__ info; struct net_device* dev; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct qeth_card*,int ) ;
 int FUNC_2 (struct qeth_card*,int ) ;
 int FUNC_3 (struct qeth_card*) ;

__attribute__((used)) static void
FUNC_4(struct qeth_card *VAR_8)
{
 struct net_device *VAR_9 = VAR_8->dev;

 if (((VAR_9->flags & VAR_0) &&
      (VAR_8->info.promisc_mode == VAR_6)) ||
     (!(VAR_9->flags & VAR_0) &&
      (VAR_8->info.promisc_mode == VAR_5)))
  return;

 if (VAR_8->info.guestlan) {
  if (FUNC_1(VAR_8, VAR_2))
   FUNC_3(VAR_8);
 } else if (VAR_8->options.sniffer &&
     FUNC_1(VAR_8, VAR_1)) {
  if (VAR_9->flags & VAR_0) {
   FUNC_0(VAR_7, 3, "+promisc");
   FUNC_2(VAR_8, VAR_4);
  } else {
   FUNC_0(VAR_7, 3, "-promisc");
   FUNC_2(VAR_8, VAR_3);
  }
 }
}
