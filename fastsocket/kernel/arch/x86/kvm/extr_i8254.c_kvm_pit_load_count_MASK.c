
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {TYPE_3__* vpit; } ;
struct kvm {TYPE_4__ arch; } ;
struct TYPE_6__ {TYPE_1__* channels; } ;
struct TYPE_7__ {TYPE_2__ pit_state; } ;
struct TYPE_5__ {int mode; } ;


 int FUNC_0 (struct kvm*,int,int ) ;

void FUNC_1(struct kvm *VAR_0, int VAR_1, u32 VAR_2, int VAR_3)
{
 u8 VAR_4;
 if (VAR_3) {

  VAR_4 = VAR_0->arch.vpit->pit_state.channels[0].mode;
  VAR_0->arch.vpit->pit_state.channels[0].mode = 0xff;
  FUNC_0(VAR_0, VAR_1, VAR_2);
  VAR_0->arch.vpit->pit_state.channels[0].mode = VAR_4;
 } else {
  FUNC_0(VAR_0, VAR_1, VAR_2);
 }
}
