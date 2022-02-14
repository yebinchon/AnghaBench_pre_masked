
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int drm_radeon_private_t ;
struct TYPE_7__ {int buffer; } ;
typedef TYPE_2__ drm_radeon_kcmd_buffer_t ;
struct TYPE_6__ {int count; int reghi; int reglo; } ;
struct TYPE_8__ {TYPE_1__ packet0; } ;
typedef TYPE_3__ drm_r300_cmd_header_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int,int) ;
 int VAR_0 ;


 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_1 ;
 int * FUNC_6 (int ,int) ;
 int* VAR_2 ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static __inline__ int FUNC_8(drm_radeon_private_t *
         VAR_3,
         drm_radeon_kcmd_buffer_t
         * VAR_4,
         drm_r300_cmd_header_t
         VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;
 u32 *VAR_9;
 VAR_1;

 VAR_7 = VAR_5.packet0.count;
 VAR_6 = (VAR_5.packet0.reghi << 8) | VAR_5.packet0.reglo;

 if ((VAR_7 > 64) || (VAR_7 < 0)) {
  FUNC_3("Cannot emit more than 64 values at a time (reg=%04x sz=%d)\n",
    VAR_6, VAR_7);
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  switch (VAR_2[(VAR_6 >> 2) + VAR_8]) {
  case 128:
   break;
  case 129:
   VAR_9 = FUNC_6(VAR_4->buffer, VAR_8);
   if (!FUNC_7(VAR_3, *VAR_9)) {
    FUNC_3("Offset failed range check (reg=%04x sz=%d)\n",
      VAR_6, VAR_7);
    return -VAR_0;
   }
   break;
  default:
   FUNC_3("Register %04x failed check as flag=%02x\n",
    VAR_6 + VAR_8 * 4, VAR_2[(VAR_6 >> 2) + VAR_8]);
   return -VAR_0;
  }
 }

 FUNC_1(1 + VAR_7);
 FUNC_4(FUNC_2(VAR_6, VAR_7 - 1));
 FUNC_5(VAR_4->buffer, VAR_7);
 FUNC_0();

 return 0;
}
