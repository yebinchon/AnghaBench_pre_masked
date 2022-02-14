
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int drm_radeon_private_t ;
struct TYPE_9__ {int buffer; } ;
typedef TYPE_2__ drm_radeon_kcmd_buffer_t ;
struct TYPE_8__ {int count; int reghi; int reglo; } ;
struct TYPE_10__ {TYPE_1__ packet0; } ;
typedef TYPE_3__ drm_r300_cmd_header_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (int *,TYPE_2__*,TYPE_3__) ;

__attribute__((used)) static __inline__ int FUNC_9(drm_radeon_private_t *VAR_2,
     drm_radeon_kcmd_buffer_t *VAR_3,
     drm_r300_cmd_header_t VAR_4)
{
 int VAR_5;
 int VAR_6;
 VAR_1;

 VAR_6 = VAR_4.packet0.count;
 VAR_5 = (VAR_4.packet0.reghi << 8) | VAR_4.packet0.reglo;

 if (!VAR_6)
  return 0;

 if (VAR_6 * 4 > FUNC_6(VAR_3->buffer))
  return -VAR_0;

 if (VAR_5 + VAR_6 * 4 >= 0x10000) {
  FUNC_3("No such registers in hardware reg=%04x sz=%d\n", VAR_5,
     VAR_6);
  return -VAR_0;
 }

 if (FUNC_7(VAR_5, VAR_6)) {

  return FUNC_8(VAR_2, VAR_3,
          VAR_4);
 }


 FUNC_1(1 + VAR_6);
 FUNC_4(FUNC_2(VAR_5, VAR_6 - 1));
 FUNC_5(VAR_3->buffer, VAR_6);
 FUNC_0();

 return 0;
}
