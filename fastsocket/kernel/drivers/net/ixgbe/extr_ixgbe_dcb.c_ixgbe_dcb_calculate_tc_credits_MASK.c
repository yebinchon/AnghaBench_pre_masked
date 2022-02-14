
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct tc_bw_alloc {size_t bwg_id; size_t bwg_percent; size_t link_percent; size_t data_credits_refill; size_t data_credits_max; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_dcb_config {size_t** bw_percentage; TYPE_2__* tc_config; } ;
typedef int s32 ;
struct TYPE_4__ {size_t desc_credits_max; struct tc_bw_alloc* path; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (size_t,int ) ;

s32 FUNC_1(struct ixgbe_hw *VAR_8,
       struct ixgbe_dcb_config *VAR_9,
       int VAR_10, u8 VAR_11)
{
 struct tc_bw_alloc *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15 = 100;
 s32 VAR_16 = 0;

 u32 VAR_17 = 0;
 u32 VAR_18 = 0;
 u16 VAR_19 = 0;
 u8 VAR_20 = 0;
 u8 VAR_21;

 if (VAR_9 == ((void*)0)) {
  VAR_16 = VAR_1;
  goto out;
 }

 VAR_13 = ((VAR_10 / 2) + VAR_0 - 1) /
   VAR_0;


 for (VAR_21 = 0; VAR_21 < VAR_5; VAR_21++) {
  VAR_12 = &VAR_9->tc_config[VAR_21].path[VAR_11];
  VAR_20 = VAR_9->bw_percentage[VAR_11][VAR_12->bwg_id];
  VAR_19 = VAR_12->bwg_percent;

  VAR_19 = (VAR_19 * VAR_20) / 100;

  if (VAR_19 && VAR_19 < VAR_15)
   VAR_15 = VAR_19;
 }
 VAR_14 = (VAR_13 / VAR_15) + 1;


 for (VAR_21 = 0; VAR_21 < VAR_5; VAR_21++) {
  VAR_12 = &VAR_9->tc_config[VAR_21].path[VAR_11];
  VAR_20 = VAR_9->bw_percentage[VAR_11][VAR_12->bwg_id];

  VAR_19 = VAR_12->bwg_percent;

  VAR_19 = (VAR_19 * VAR_20) / 100;
  if (VAR_12->bwg_percent > 0 && VAR_19 == 0)
   VAR_19 = 1;


  VAR_12->link_percent = (u8)VAR_19;


  VAR_17 = FUNC_0(VAR_19 * VAR_14,
        VAR_4);
  VAR_12->data_credits_refill = (u16)VAR_17;


  VAR_18 = (VAR_19 * VAR_3) / 100;






  if (VAR_18 && (VAR_18 < VAR_13))
   VAR_18 = VAR_13;

  if (VAR_11 == VAR_2) {






   if ((VAR_8->mac.type == VAR_7) &&
       VAR_18 &&
       (VAR_18 < VAR_6))
    VAR_18 = VAR_6;

   VAR_9->tc_config[VAR_21].desc_credits_max =
    (u16)VAR_18;
  }

  VAR_12->data_credits_max = (u16)VAR_18;
 }

out:
 return VAR_16;
}
