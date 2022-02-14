
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int track_flush; } ;
typedef TYPE_2__ drm_radeon_private_t ;
struct TYPE_10__ {int buffer; } ;
typedef TYPE_3__ drm_radeon_kcmd_buffer_t ;
struct TYPE_8__ {int count; int adrhi; int adrlo; } ;
struct TYPE_11__ {TYPE_1__ vpu; } ;
typedef TYPE_4__ drm_r300_cmd_header_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static __inline__ int FUNC_8(drm_radeon_private_t *VAR_10,
        drm_radeon_kcmd_buffer_t *VAR_11,
        drm_r300_cmd_header_t VAR_12)
{
 int VAR_13;
 int VAR_14;
 VAR_9;

 VAR_13 = VAR_12.vpu.count;
 VAR_14 = (VAR_12.vpu.adrhi << 8) | VAR_12.vpu.adrlo;

 if (!VAR_13)
  return 0;
 if (VAR_13 * 16 > FUNC_7(VAR_11->buffer))
  return -VAR_0;



 FUNC_1(6);
 FUNC_4(FUNC_2(VAR_2, 0));
 FUNC_4(VAR_1);
 FUNC_4(FUNC_2(VAR_8, 0));
 FUNC_4(VAR_7);
 FUNC_4(FUNC_2(VAR_3, 0));
 FUNC_4(0);
 FUNC_0();

 VAR_10->track_flush |= VAR_6;

 FUNC_1(3 + VAR_13 * 4);
 FUNC_6(VAR_4, VAR_14);
 FUNC_4(FUNC_3(VAR_5, VAR_13 * 4 - 1));
 FUNC_5(VAR_11->buffer, VAR_13 * 4);
 FUNC_0();

 FUNC_1(2);
 FUNC_4(FUNC_2(VAR_3, 0));
 FUNC_4(0);
 FUNC_0();

 return 0;
}
