
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int acks; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;
struct e1000_hw {TYPE_2__ mbx; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct e1000_hw*,int) ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_2, u16 VAR_3)
{
 s32 VAR_4 = -VAR_0;

 if (!FUNC_0(VAR_2, VAR_1 << VAR_3)) {
  VAR_4 = 0;
  VAR_2->mbx.stats.acks++;
 }

 return VAR_4;
}
