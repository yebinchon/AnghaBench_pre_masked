
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
struct TYPE_10__ {int requested_mode; } ;
struct TYPE_8__ {scalar_t__ (* read ) (struct e1000_hw*,int,int,int*) ;} ;
struct TYPE_9__ {TYPE_3__ ops; } ;
struct TYPE_7__ {int func; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_5__ fc; TYPE_4__ nvm; TYPE_2__ bus; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int,int,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int,int,int*) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_7)
{
 s32 VAR_8 = 0;
 u16 VAR_9;
 u16 VAR_10;
 if (VAR_7->mac.type == VAR_6) {
  VAR_9 = FUNC_0(VAR_7->bus.func);
  VAR_8 = VAR_7->nvm.ops.read(VAR_7, VAR_0
        + VAR_9, 1, &VAR_10);
  } else {
  VAR_8 = VAR_7->nvm.ops.read(VAR_7, VAR_0,
        1, &VAR_10);
  }

 if (VAR_8) {
  FUNC_1("NVM Read Error\n");
  goto out;
 }

 if ((VAR_10 & VAR_2) == 0)
  VAR_7->fc.requested_mode = VAR_4;
 else if ((VAR_10 & VAR_2) ==
   VAR_1)
  VAR_7->fc.requested_mode = VAR_5;
 else
  VAR_7->fc.requested_mode = VAR_3;

out:
 return VAR_8;
}
