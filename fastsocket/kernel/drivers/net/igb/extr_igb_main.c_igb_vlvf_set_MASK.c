
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {scalar_t__ vfs_allocated_count; TYPE_2__* vf_data; struct e1000_hw hw; } ;
typedef int s32 ;
struct TYPE_4__ {int vlans_enabled; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct e1000_hw*,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static s32 FUNC_5(struct igb_adapter *VAR_7, u32 VAR_8, bool VAR_9, u32 VAR_10)
{
 struct e1000_hw *VAR_11 = &VAR_7->hw;
 u32 VAR_12, VAR_13;


 if (VAR_11->mac.type < VAR_6)
  return -1;


 if (!VAR_7->vfs_allocated_count)
  return -1;


 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  VAR_12 = FUNC_3(FUNC_0(VAR_13));
  if ((VAR_12 & VAR_3) &&
      VAR_8 == (VAR_12 & VAR_4))
   break;
 }

 if (VAR_9) {
  if (VAR_13 == VAR_0) {




   for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
    VAR_12 = FUNC_3(FUNC_0(VAR_13));
    if (!(VAR_12 & VAR_3))
     break;
   }
  }
  if (VAR_13 < VAR_0) {

   VAR_12 |= 1 << (VAR_2 + VAR_10);


   if (!(VAR_12 & VAR_3)) {

    FUNC_2(VAR_11, VAR_8, 1);
    VAR_12 |= VAR_3;
   }
   VAR_12 &= ~VAR_4;
   VAR_12 |= VAR_8;
   FUNC_4(FUNC_0(VAR_13), VAR_12);


   if (VAR_10 >= VAR_7->vfs_allocated_count)
    return 0;

   if (!VAR_7->vf_data[VAR_10].vlans_enabled) {
    u32 VAR_14;
    VAR_12 = FUNC_3(FUNC_1(VAR_10));
    VAR_14 = VAR_12 & VAR_5;
    VAR_14 += 4;
    VAR_12 &= ~VAR_5;
    VAR_12 |= VAR_14;
    FUNC_4(FUNC_1(VAR_10), VAR_12);
   }

   VAR_7->vf_data[VAR_10].vlans_enabled++;
  }
 } else {
  if (VAR_13 < VAR_0) {

   VAR_12 &= ~(1 << (VAR_2 + VAR_10));

   if (!(VAR_12 & VAR_1)) {
    VAR_12 = 0;
    FUNC_2(VAR_11, VAR_8, 0);
   }
   FUNC_4(FUNC_0(VAR_13), VAR_12);


   if (VAR_10 >= VAR_7->vfs_allocated_count)
    return 0;

   VAR_7->vf_data[VAR_10].vlans_enabled--;
   if (!VAR_7->vf_data[VAR_10].vlans_enabled) {
    u32 VAR_15;
    VAR_12 = FUNC_3(FUNC_1(VAR_10));
    VAR_15 = VAR_12 & VAR_5;
    VAR_15 -= 4;
    VAR_12 &= ~VAR_5;
    VAR_12 |= VAR_15;
    FUNC_4(FUNC_1(VAR_10), VAR_12);
   }
  }
 }
 return 0;
}
