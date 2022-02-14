
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* force_speed_duplex ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ autoneg; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;

s32 FUNC_6(struct e1000_hw *VAR_1)
{
 s32 VAR_2;
 bool VAR_3;

 if (VAR_1->mac.autoneg) {



  VAR_2 = FUNC_3(VAR_1);
  if (VAR_2)
   goto out;
 } else {



  FUNC_0("Forcing Speed and Duplex\n");
  VAR_2 = VAR_1->phy.ops.force_speed_duplex(VAR_1);
  if (VAR_2) {
   FUNC_0("Error Forcing Speed and Duplex\n");
   goto out;
  }
 }




 VAR_2 = FUNC_4(VAR_1, VAR_0, 10, &VAR_3);
 if (VAR_2)
  goto out;

 if (VAR_3) {
  FUNC_0("Valid link established!!!\n");
  FUNC_1(VAR_1);
  VAR_2 = FUNC_2(VAR_1);
 } else {
  FUNC_0("Unable to establish link!!!\n");
 }

out:
 return VAR_2;
}
