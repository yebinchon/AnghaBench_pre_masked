
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int func; } ;
struct TYPE_7__ {scalar_t__ (* read ) (struct e1000_hw*,scalar_t__,int,int*) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ bus; TYPE_4__ nvm; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,scalar_t__,int,int*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static s32 FUNC_6(struct e1000_hw *VAR_7)
{
 s32 VAR_8 = 0;
 u32 VAR_9;
 u16 VAR_10 = 0;

 if (VAR_7->mac.type != VAR_6)
  goto out;
 if (!FUNC_2(VAR_7))
  goto out;

 VAR_8 = VAR_7->nvm.ops.read(VAR_7, VAR_3 +
       FUNC_0(VAR_7->bus.func), 1,
       &VAR_10);
 if (VAR_8) {
  FUNC_1("NVM Read Error\n");
  goto out;
 }

 VAR_9 = FUNC_3(VAR_0);
 if (VAR_10 & VAR_5)
  VAR_9 |= VAR_2;
 if (VAR_10 & VAR_4)
  VAR_9 |= VAR_1;
 FUNC_5(VAR_0, VAR_9);
out:
 return VAR_8;
}
