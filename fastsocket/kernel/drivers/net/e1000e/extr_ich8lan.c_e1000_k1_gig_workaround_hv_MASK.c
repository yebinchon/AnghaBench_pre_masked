
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_9__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_10__ {scalar_t__ type; TYPE_4__ ops; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_6__ {int nvm_k1_enabled; } ;
struct TYPE_7__ {TYPE_1__ ich8lan; } ;
struct e1000_hw {TYPE_5__ phy; TYPE_3__ mac; TYPE_2__ dev_spec; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_6(struct e1000_hw *VAR_13, bool VAR_14)
{
 s32 VAR_15 = 0;
 u16 VAR_16 = 0;
 bool VAR_17 = VAR_13->dev_spec.ich8lan.nvm_k1_enabled;

 if (VAR_13->mac.type != VAR_10)
  return 0;


 VAR_15 = VAR_13->phy.ops.acquire(VAR_13);
 if (VAR_15)
  return VAR_15;


 if (VAR_14) {
  if (VAR_13->phy.type == VAR_12) {
   VAR_15 = FUNC_2(VAR_13, VAR_0,
        &VAR_16);
   if (VAR_15)
    goto release;

   VAR_16 &= (VAR_1 |
           VAR_2 |
           VAR_4);

   if (VAR_16 == (VAR_1 |
        VAR_2 |
        VAR_3))
    VAR_17 = 0;
  }

  if (VAR_13->phy.type == VAR_11) {
   VAR_15 = FUNC_2(VAR_13, VAR_5, &VAR_16);
   if (VAR_15)
    goto release;

   VAR_16 &= (VAR_7 |
           VAR_6 |
           VAR_9);

   if (VAR_16 == (VAR_7 |
        VAR_6 |
        VAR_8))
    VAR_17 = 0;
  }


  VAR_15 = FUNC_3(VAR_13, FUNC_0(770, 19), 0x0100);
  if (VAR_15)
   goto release;

 } else {

  VAR_15 = FUNC_3(VAR_13, FUNC_0(770, 19), 0x4100);
  if (VAR_15)
   goto release;
 }

 VAR_15 = FUNC_1(VAR_13, VAR_17);

release:
 VAR_13->phy.ops.release(VAR_13);

 return VAR_15;
}
