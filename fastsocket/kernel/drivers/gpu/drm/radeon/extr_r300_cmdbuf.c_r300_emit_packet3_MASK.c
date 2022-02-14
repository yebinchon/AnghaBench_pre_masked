
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int header ;
typedef int drm_radeon_private_t ;
struct TYPE_12__ {int nbox; TYPE_2__* buffer; } ;
typedef TYPE_3__ drm_radeon_kcmd_buffer_t ;
struct TYPE_10__ {int packet; } ;
struct TYPE_13__ {TYPE_1__ packet3; } ;
typedef TYPE_4__ drm_r300_cmd_header_t ;
struct TYPE_11__ {int iterator; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_3__*,int) ;
 int FUNC_4 (int *,TYPE_3__*) ;

__attribute__((used)) static __inline__ int FUNC_5(drm_radeon_private_t *VAR_2,
     drm_radeon_kcmd_buffer_t *VAR_3,
     drm_r300_cmd_header_t VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7 = VAR_3->buffer->iterator;




 VAR_5 = 0;
 do {
  if (VAR_3->nbox > VAR_1) {
   VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_5);
   if (VAR_6)
    return VAR_6;

   VAR_3->buffer->iterator = VAR_7;
  }

  switch (VAR_4.packet3.packet) {
  case 129:
   FUNC_0("R300_CMD_PACKET3_CLEAR\n");
   VAR_6 = FUNC_2(VAR_2, VAR_3);
   if (VAR_6) {
    FUNC_1("r300_emit_clear failed\n");
    return VAR_6;
   }
   break;

  case 128:
   FUNC_0("R300_CMD_PACKET3_RAW\n");
   VAR_6 = FUNC_4(VAR_2, VAR_3);
   if (VAR_6) {
    FUNC_1("r300_emit_raw_packet3 failed\n");
    return VAR_6;
   }
   break;

  default:
   FUNC_1("bad packet3 type %i at byte %d\n",
      VAR_4.packet3.packet,
      VAR_3->buffer->iterator - (int)sizeof(VAR_4));
   return -VAR_0;
  }

  VAR_5 += VAR_1;
 } while (VAR_5 < VAR_3->nbox);

 return 0;
}
