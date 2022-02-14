
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int track_flush; } ;
typedef TYPE_1__ drm_radeon_private_t ;
struct TYPE_6__ {int buffer; } ;
typedef TYPE_2__ drm_radeon_kcmd_buffer_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static __inline__ int FUNC_7(drm_radeon_private_t *VAR_11,
          drm_radeon_kcmd_buffer_t *VAR_12)
{
 VAR_10;

 if (8 * 4 > FUNC_6(VAR_12->buffer))
  return -VAR_0;

 FUNC_1(10);
 FUNC_4(FUNC_3(VAR_1, 8));
 FUNC_4(VAR_3 | VAR_4 |
   (1 << VAR_2));
 FUNC_5(VAR_12->buffer, 8);
 FUNC_0();

 FUNC_1(4);
 FUNC_4(FUNC_2(VAR_6, 0));
 FUNC_4(VAR_5);
 FUNC_4(FUNC_2(VAR_9, 0));
 FUNC_4(VAR_8);
 FUNC_0();

 VAR_11->track_flush |= VAR_7;

 return 0;
}
