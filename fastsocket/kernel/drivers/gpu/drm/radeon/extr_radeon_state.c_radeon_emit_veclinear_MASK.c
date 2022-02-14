
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int drm_radeon_private_t ;
struct TYPE_7__ {int buffer; } ;
typedef TYPE_2__ drm_radeon_kcmd_buffer_t ;
struct TYPE_6__ {int count; int addr_lo; int addr_hi; } ;
struct TYPE_8__ {TYPE_1__ veclinear; } ;
typedef TYPE_3__ drm_radeon_cmd_header_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static __inline__ int FUNC_8(drm_radeon_private_t *VAR_6,
       drm_radeon_cmd_header_t VAR_7,
       drm_radeon_kcmd_buffer_t *VAR_8)
{
 int VAR_9 = VAR_7.veclinear.count * 4;
 int VAR_10 = VAR_7.veclinear.addr_lo | (VAR_7.veclinear.addr_hi << 8);
 VAR_5;

        if (!VAR_9)
                return 0;
 if (VAR_9 * 4 > FUNC_7(VAR_8->buffer))
                return -VAR_0;

 FUNC_1(5 + VAR_9);
 FUNC_6(VAR_1, 0);
 FUNC_4(FUNC_2(VAR_3, 0));
 FUNC_4(VAR_10 | (1 << VAR_4));
 FUNC_4(FUNC_3(VAR_2, (VAR_9 - 1)));
 FUNC_5(VAR_8->buffer, VAR_9);
 FUNC_0();

 return 0;
}
