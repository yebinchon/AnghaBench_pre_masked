
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct drm_file {int dummy; } ;
typedef int drm_radeon_private_t ;
struct TYPE_8__ {int buffer; } ;
typedef TYPE_2__ drm_radeon_kcmd_buffer_t ;
struct TYPE_7__ {scalar_t__ packet_id; } ;
struct TYPE_9__ {TYPE_1__ packet; } ;
typedef TYPE_3__ drm_radeon_cmd_header_t ;
struct TYPE_10__ {int len; int start; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 TYPE_6__* VAR_3 ;
 scalar_t__ FUNC_7 (int *,struct drm_file*,int,int ) ;

__attribute__((used)) static int FUNC_8(drm_radeon_private_t * VAR_4,
          struct drm_file *VAR_5,
          drm_radeon_cmd_header_t VAR_6,
          drm_radeon_kcmd_buffer_t *VAR_7)
{
 int VAR_8 = (int)VAR_6.packet.packet_id;
 int VAR_9, VAR_10;
 VAR_2;

 if (VAR_8 >= VAR_1)
  return -VAR_0;

 VAR_9 = VAR_3[VAR_8].len;
 VAR_10 = VAR_3[VAR_8].start;

 if (VAR_9 * sizeof(u32) > FUNC_6(VAR_7->buffer)) {
  FUNC_3("Packet size provided larger than data provided\n");
  return -VAR_0;
 }

 if (FUNC_7(VAR_4, VAR_5, VAR_8,
    VAR_7->buffer)) {
  FUNC_3("Packet verification failed\n");
  return -VAR_0;
 }

 FUNC_1(VAR_9 + 1);
 FUNC_4(FUNC_2(VAR_10, (VAR_9 - 1)));
 FUNC_5(VAR_7->buffer, VAR_9);
 FUNC_0();

 return 0;
}
