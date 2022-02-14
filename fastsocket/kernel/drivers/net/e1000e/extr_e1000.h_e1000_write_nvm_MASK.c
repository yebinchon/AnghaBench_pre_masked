
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int (* write ) (struct e1000_hw*,int ,int ,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ nvm; } ;
typedef int s32 ;


 int FUNC_0 (struct e1000_hw*,int ,int ,int *) ;

__attribute__((used)) static inline s32 FUNC_1(struct e1000_hw *VAR_0, u16 VAR_1, u16 VAR_2,
      u16 *VAR_3)
{
 return VAR_0->nvm.ops.write(VAR_0, VAR_1, VAR_2, VAR_3);
}
