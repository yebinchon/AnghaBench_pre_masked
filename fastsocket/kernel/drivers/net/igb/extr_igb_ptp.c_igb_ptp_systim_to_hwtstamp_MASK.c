
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct igb_adapter {int tmreg_lock; int tc; TYPE_2__ hw; } ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(struct igb_adapter *VAR_0,
           struct skb_shared_hwtstamps *VAR_1,
           u64 VAR_2)
{
 unsigned long VAR_3;
 u64 VAR_4;

 switch (VAR_0->hw.mac.type) {
 case 133:
 case 132:
 case 128:
 case 129:
  FUNC_3(&VAR_0->tmreg_lock, VAR_3);

  VAR_4 = FUNC_5(&VAR_0->tc, VAR_2);

  FUNC_4(&VAR_0->tmreg_lock, VAR_3);

  FUNC_1(VAR_1, 0, sizeof(*VAR_1));
  VAR_1->hwtstamp = FUNC_2(VAR_4);
  break;
 case 131:
 case 130:
  FUNC_1(VAR_1, 0, sizeof(*VAR_1));

  VAR_1->hwtstamp = FUNC_0(VAR_2 >> 32,
      VAR_2 & 0xFFFFFFFF);
  break;
 default:
  break;
 }
}
