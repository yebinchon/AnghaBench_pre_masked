
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int* rss_indir_tbl; int vfs_allocated_count; struct e1000_hw hw; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int FUNC_1 (int,int) ;

void FUNC_2(struct igb_adapter *VAR_1)
{
 struct e1000_hw *VAR_2 = &VAR_1->hw;
 u32 VAR_3 = FUNC_0(0);
 u32 VAR_4 = 0;
 int VAR_5 = 0;

 switch (VAR_2->mac.type) {
 case 129:
  VAR_4 = 6;
  break;
 case 128:

  if (VAR_1->vfs_allocated_count)
   VAR_4 = 3;
  break;
 default:
  break;
 }

 while (VAR_5 < VAR_0) {
  u32 VAR_6 = 0;
  int VAR_7;

  for (VAR_7 = 3; VAR_7 >= 0; VAR_7--) {
   VAR_6 <<= 8;
   VAR_6 |= VAR_1->rss_indir_tbl[VAR_5 + VAR_7];
  }

  FUNC_1(VAR_3, VAR_6 << VAR_4);
  VAR_3 += 4;
  VAR_5 += 4;
 }
}
