
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct TYPE_4__ {int waveform_phase_value; int attenuation; int sample_offset; int backwards; int address_pointer; } ;
struct TYPE_3__ {int mdl; int lpctl; int lea; int lsa; scalar_t__ sa; int pcm8b; int mdysl; int mdxsl; } ;
struct Slot {TYPE_2__ state; TYPE_1__ regs; } ;
struct Scsp {int* sound_stack; } ;
typedef int s32 ;
typedef int s16 ;


 size_t FUNC_0 (struct Slot*,int ) ;

void FUNC_1(struct Slot * VAR_0, struct Scsp * VAR_1)
{
   s32 VAR_2 = 0;
   s32 VAR_3 = VAR_0->state.waveform_phase_value >> 18;

   if (VAR_0->state.attenuation > 0x3bf)
      return;

   if (VAR_0->regs.mdl)
   {

      u32 VAR_4 = FUNC_0(VAR_0, VAR_0->regs.mdxsl);
      u32 VAR_5 = FUNC_0(VAR_0, VAR_0->regs.mdysl);
      s16 VAR_6 = VAR_1->sound_stack[VAR_4];
      s16 VAR_7 = VAR_1->sound_stack[VAR_5];

      s32 VAR_8 = (VAR_6 + VAR_7) / 2;


      u16 VAR_9 = 0xf - (VAR_0->regs.mdl);
      VAR_8 >>= VAR_9;

      VAR_2 = VAR_8;
   }



   if (VAR_0->regs.lpctl == 0)
   {
      VAR_0->state.sample_offset += VAR_3;

      if (VAR_0->state.sample_offset >= VAR_0->regs.lea)
         VAR_0->state.attenuation = 0x3ff;
   }
   else if (VAR_0->regs.lpctl == 1)
   {
      VAR_0->state.sample_offset += VAR_3;

      if (VAR_0->state.sample_offset >= VAR_0->regs.lea)
         VAR_0->state.sample_offset = VAR_0->regs.lsa;
   }
   else if (VAR_0->regs.lpctl == 2)
   {
      if (!VAR_0->state.backwards)
         VAR_0->state.sample_offset += VAR_3;
      else
         VAR_0->state.sample_offset -= VAR_3;

      if (!VAR_0->state.backwards)
      {
         if (VAR_0->state.sample_offset >= VAR_0->regs.lea)
         {
            VAR_0->state.sample_offset = VAR_0->regs.lea;
            VAR_0->state.backwards = 1;
         }
      }
      else
      {

         if (VAR_0->state.sample_offset <= VAR_0->regs.lsa)
            VAR_0->state.sample_offset = VAR_0->regs.lea;
      }
   }
   else if (VAR_0->regs.lpctl == 3)
   {
      if(!VAR_0->state.backwards)
         VAR_0->state.sample_offset += VAR_3;
      else
         VAR_0->state.sample_offset -= VAR_3;

      if (!VAR_0->state.backwards)
      {
         if (VAR_0->state.sample_offset >= VAR_0->regs.lea)
         {
            VAR_0->state.sample_offset = VAR_0->regs.lea;
            VAR_0->state.backwards = 1;
         }
      }
      else
      {
         if (VAR_0->state.sample_offset <= VAR_0->regs.lsa)
         {
            VAR_0->state.sample_offset = VAR_0->regs.lsa;
            VAR_0->state.backwards = 0;
         }
      }
   }

   if (!VAR_0->regs.pcm8b)
      VAR_0->state.address_pointer = (s32)VAR_0->regs.sa + (VAR_0->state.sample_offset + VAR_2) * 2;
   else
      VAR_0->state.address_pointer = (s32)VAR_0->regs.sa + (VAR_0->state.sample_offset + VAR_2);
}
