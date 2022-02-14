
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nic {int flags; int netdev; } ;
struct net_device {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nic*,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 struct nic* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct nic*,int ,int ,int ,char*,scalar_t__,int) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_9)
{
 struct nic *VAR_10 = FUNC_2(VAR_9);

 FUNC_3(VAR_10, VAR_6, VAR_3, VAR_10->netdev,
       "mc_count=%d, flags=0x%04X\n",
       FUNC_1(VAR_9), VAR_9->flags);

 if (VAR_9->flags & VAR_2)
  VAR_10->flags |= VAR_8;
 else
  VAR_10->flags &= ~VAR_8;

 if (VAR_9->flags & VAR_1 ||
  FUNC_1(VAR_9) > VAR_0)
  VAR_10->flags |= VAR_7;
 else
  VAR_10->flags &= ~VAR_7;

 FUNC_0(VAR_10, ((void*)0), VAR_4);
 FUNC_0(VAR_10, ((void*)0), VAR_5);
}
