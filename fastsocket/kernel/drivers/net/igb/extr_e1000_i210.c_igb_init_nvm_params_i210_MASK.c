
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * update; int * validate; int * write; int read; int valid_led_default; int release; int acquire; } ;
struct e1000_nvm_info {TYPE_1__ ops; int type; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;

s32 FUNC_1(struct e1000_hw *VAR_10)
{
 s32 VAR_11 = 0;
 struct e1000_nvm_info *VAR_12 = &VAR_10->nvm;

 VAR_12->ops.acquire = VAR_2;
 VAR_12->ops.release = VAR_5;
 VAR_12->ops.valid_led_default = VAR_7;


 if (FUNC_0(VAR_10)) {
  VAR_10->nvm.type = VAR_0;
  VAR_12->ops.read = VAR_4;
  VAR_12->ops.write = VAR_9;
  VAR_12->ops.validate = VAR_8;
  VAR_12->ops.update = VAR_6;
 } else {
  VAR_10->nvm.type = VAR_1;
  VAR_12->ops.read = VAR_3;
  VAR_12->ops.write = ((void*)0);
  VAR_12->ops.validate = ((void*)0);
  VAR_12->ops.update = ((void*)0);
 }
 return VAR_11;
}
