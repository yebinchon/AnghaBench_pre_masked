
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {int type; TYPE_2__ ops; } ;
struct e1000_dev_spec_ich8lan {int eee_lp_ability; int eee_disable; } ;
struct TYPE_4__ {struct e1000_dev_spec_ich8lan ich8lan; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ dev_spec; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;


 scalar_t__ FUNC_0 (struct e1000_hw*,int,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_14)
{
 struct e1000_dev_spec_ich8lan *VAR_15 = &VAR_14->dev_spec.ich8lan;
 s32 VAR_16;
 u16 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

 switch (VAR_14->phy.type) {
 case 129:
  VAR_17 = VAR_6;
  VAR_18 = VAR_7;
  VAR_20 = VAR_5;
  break;
 case 128:
  VAR_17 = VAR_1;
  VAR_18 = VAR_2;
  VAR_20 = VAR_0;
  break;
 default:
  return 0;
 }

 VAR_16 = VAR_14->phy.ops.acquire(VAR_14);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_1(VAR_14, VAR_8, &VAR_21);
 if (VAR_16)
  goto release;


 VAR_21 &= ~VAR_11;


 if (!VAR_15->eee_disable) {

  VAR_16 = FUNC_0(VAR_14, VAR_17,
          &VAR_15->eee_lp_ability);
  if (VAR_16)
   goto release;


  VAR_16 = FUNC_0(VAR_14, VAR_20, &VAR_19);
  if (VAR_16)
   goto release;




  if (VAR_19 & VAR_15->eee_lp_ability & VAR_3)
   VAR_21 |= VAR_9;

  if (VAR_19 & VAR_15->eee_lp_ability & VAR_4) {
   FUNC_1(VAR_14, VAR_13, &VAR_22);
   if (VAR_22 & VAR_12)
    VAR_21 |= VAR_10;
   else




    VAR_15->eee_lp_ability &=
        ~VAR_4;
  }
 }


 VAR_16 = FUNC_0(VAR_14, VAR_18, &VAR_22);
 if (VAR_16)
  goto release;

 VAR_16 = FUNC_2(VAR_14, VAR_8, VAR_21);
release:
 VAR_14->phy.ops.release(VAR_14);

 return VAR_16;
}
