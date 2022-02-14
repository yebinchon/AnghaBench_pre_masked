
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int sound_ram_mask; } ;
struct TYPE_4__ {int sa; int lsa; int lsa_shifted; int lea; int lea_shifted; int looplen_shifted; scalar_t__ pcm8b; int * buf; } ;
typedef TYPE_1__ SlotState ;


 int VAR_0 ;
 int * VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_0(SlotState *VAR_3)
{
   u32 VAR_4;

   if (VAR_3->pcm8b)
      VAR_3->sa &= ~1;
   VAR_3->sa &= VAR_2.sound_ram_mask;
   VAR_3->buf = &VAR_1[VAR_3->sa];
   VAR_4 = VAR_2.sound_ram_mask - VAR_3->sa;
   if (VAR_3->pcm8b)
      VAR_4 >>= 1;

   if (VAR_3->lsa > VAR_4)
      VAR_3->lsa = VAR_4;
   VAR_3->lsa_shifted = VAR_3->lsa << VAR_0;

   if (VAR_3->lea > VAR_4)
      VAR_3->lea = VAR_4;
   VAR_3->lea_shifted = ((VAR_3->lea + 1) << VAR_0) - 1;

   VAR_3->looplen_shifted = VAR_3->lea_shifted - VAR_3->lsa_shifted + 1;
}
