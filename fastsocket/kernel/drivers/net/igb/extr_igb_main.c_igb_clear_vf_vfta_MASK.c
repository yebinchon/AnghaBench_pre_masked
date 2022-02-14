
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {TYPE_1__* vf_data; struct e1000_hw hw; } ;
struct TYPE_2__ {scalar_t__ vlans_enabled; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct e1000_hw*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct igb_adapter *VAR_5, u32 VAR_6)
{
 struct e1000_hw *VAR_7 = &VAR_5->hw;
 u32 VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_8 = 1 << (VAR_2 + VAR_6);


 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  VAR_9 = FUNC_2(FUNC_0(VAR_11));


  VAR_9 &= ~VAR_8;


  if (!(VAR_9 & VAR_1) &&
      (VAR_9 & VAR_3)) {
   VAR_9 = 0;
   VAR_10 = VAR_9 & VAR_4;
   FUNC_1(VAR_7, VAR_10, 0);
  }

  FUNC_3(FUNC_0(VAR_11), VAR_9);
 }

 VAR_5->vf_data[VAR_6].vlans_enabled = 0;
}
