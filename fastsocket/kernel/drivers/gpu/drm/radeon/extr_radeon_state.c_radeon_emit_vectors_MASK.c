
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
struct TYPE_6__ {int count; int offset; int stride; } ;
struct TYPE_8__ {TYPE_1__ vectors; } ;
typedef TYPE_3__ drm_radeon_cmd_header_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static __inline__ int FUNC_7(drm_radeon_private_t *VAR_5,
       drm_radeon_cmd_header_t VAR_6,
       drm_radeon_kcmd_buffer_t *VAR_7)
{
 int VAR_8 = VAR_6.vectors.count;
 int VAR_9 = VAR_6.vectors.offset;
 int VAR_10 = VAR_6.vectors.stride;
 VAR_4;

 FUNC_1(5 + VAR_8);
 FUNC_6(VAR_0, 0);
 FUNC_4(FUNC_2(VAR_2, 0));
 FUNC_4(VAR_9 | (VAR_10 << VAR_3));
 FUNC_4(FUNC_3(VAR_1, (VAR_8 - 1)));
 FUNC_5(VAR_7->buffer, VAR_8);
 FUNC_0();

 return 0;
}
