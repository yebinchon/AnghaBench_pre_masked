
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
struct TYPE_6__ {int count; int adrhi_flags; int adrlo; } ;
struct TYPE_8__ {TYPE_1__ r500fp; } ;
typedef TYPE_3__ drm_r300_cmd_header_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,int,int,int) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static inline int FUNC_8(drm_radeon_private_t *VAR_6,
           drm_radeon_kcmd_buffer_t *VAR_7,
           drm_r300_cmd_header_t VAR_8)
{
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 VAR_5;

 VAR_9 = VAR_8.r500fp.count;

 VAR_10 = ((VAR_8.r500fp.adrhi_flags & 1) << 8) | VAR_8.r500fp.adrlo;

 VAR_11 = !!(VAR_8.r500fp.adrhi_flags & VAR_2);
 VAR_12 = !!(VAR_8.r500fp.adrhi_flags & VAR_1);

 VAR_10 |= (VAR_11 << 16);
 VAR_10 |= (VAR_12 << 17);

 VAR_13 = VAR_11 ? 4 : 6;

 FUNC_3("r500fp %d %d type: %d\n", VAR_9, VAR_10, VAR_11);
 if (!VAR_9)
  return 0;
 if (VAR_9 * VAR_13 * 4 > FUNC_7(VAR_7->buffer))
  return -VAR_0;

 FUNC_1(3 + VAR_9 * VAR_13);
 FUNC_6(VAR_4, VAR_10);
 FUNC_4(FUNC_2(VAR_3, VAR_9 * VAR_13 - 1));
 FUNC_5(VAR_7->buffer, VAR_9 * VAR_13);

 FUNC_0();

 return 0;
}
