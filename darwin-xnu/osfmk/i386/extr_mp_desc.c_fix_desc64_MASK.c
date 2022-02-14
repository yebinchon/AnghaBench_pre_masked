
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef void* uint32_t ;
typedef void* uint16_t ;
struct real_gate64 {int selector16; int IST; int access8; void* offset_top32; void* offset_high16; void* offset_low16; } ;
struct real_descriptor64 {int limit_low16; int access8; int limit_high4; int granularity4; void* base_top32; void* base_high8; void* base_med8; void* base_low16; } ;
struct fake_descriptor64 {int access; int offset64; int lim_or_seg; int size_or_IST; } ;
typedef int real ;





 int VAR_0 ;
 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (void*,int) ;

void
FUNC_2(void *VAR_1, int VAR_2)
{
 struct fake_descriptor64 *VAR_3;
 union {
  struct real_gate64 gate;
  struct real_descriptor64 desc;
 } VAR_4;
 int VAR_5;

 VAR_3 = (struct fake_descriptor64 *) VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++, VAR_3++) {




  FUNC_1((void *) &VAR_4, sizeof(VAR_4));

  switch (VAR_3->access & VAR_0) {
  case 0:
   break;
  case 130:
  case 129:
  case 128:
   VAR_4.gate.offset_low16 = (uint16_t)(VAR_3->offset64 & 0xFFFF);
   VAR_4.gate.selector16 = VAR_3->lim_or_seg & 0xFFFF;
   VAR_4.gate.IST = VAR_3->size_or_IST & 0x7;
   VAR_4.gate.access8 = VAR_3->access;
   VAR_4.gate.offset_high16 = (uint16_t)((VAR_3->offset64>>16) & 0xFFFF);
   VAR_4.gate.offset_top32 = (uint32_t)(VAR_3->offset64>>32);
   break;
  default:
   VAR_4.desc.limit_low16 = VAR_3->lim_or_seg & 0xFFFF;
   VAR_4.desc.base_low16 = (uint16_t)(VAR_3->offset64 & 0xFFFF);
   VAR_4.desc.base_med8 = (uint8_t)((VAR_3->offset64 >> 16) & 0xFF);
   VAR_4.desc.access8 = VAR_3->access;
   VAR_4.desc.limit_high4 = (VAR_3->lim_or_seg >> 16) & 0xFF;
   VAR_4.desc.granularity4 = VAR_3->size_or_IST;
   VAR_4.desc.base_high8 = (uint8_t)((VAR_3->offset64 >> 24) & 0xFF);
   VAR_4.desc.base_top32 = (uint32_t)(VAR_3->offset64>>32);
  }




  FUNC_0((void *) &VAR_4, (void *) VAR_3, sizeof(VAR_4));
 }
}
