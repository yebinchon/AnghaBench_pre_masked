
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
typedef int stack_header ;
typedef int drm_radeon_private_t ;
struct TYPE_10__ {int buffer; } ;
typedef TYPE_3__ drm_radeon_kcmd_buffer_t ;
struct TYPE_9__ {scalar_t__ packet; } ;
struct TYPE_8__ {scalar_t__ cmd_type; } ;
struct TYPE_11__ {TYPE_2__ packet3; TYPE_1__ header; } ;
typedef TYPE_4__ drm_r300_cmd_header_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,...) ;
 int VAR_0 ;
 int FUNC_4 (int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* FUNC_5 (int ,int) ;
 TYPE_4__* FUNC_6 (int ,int,TYPE_4__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static __inline__ int FUNC_9(drm_radeon_private_t *VAR_7,
         drm_radeon_kcmd_buffer_t *VAR_8)
{
 u32 *VAR_9 = FUNC_5(VAR_8->buffer, 0);
 u32 *VAR_10 = FUNC_5(VAR_8->buffer, 1);
 int VAR_11;
 int VAR_12;
 VAR_6;

 VAR_11 = (*VAR_9 & VAR_5) >> 16;

 VAR_12 = *VAR_10 >> 16;
 if (!(*VAR_10 & VAR_3))
  VAR_12 = (VAR_12+1)/2;

 if (VAR_11 && VAR_11 != VAR_12) {
  FUNC_3("3D_DRAW_INDX_2: packet size %i, expected %i\n",
   VAR_11, VAR_12);
  return -VAR_0;
 }

 FUNC_1(VAR_11+2);
 FUNC_4(VAR_8->buffer, VAR_11 + 2);
 FUNC_0();

 if (!VAR_11) {
  drm_r300_cmd_header_t VAR_13, *VAR_14;
  u32 *VAR_15, *VAR_16, *VAR_17;

  if (FUNC_7(VAR_8->buffer)
    < 4*4 + sizeof(VAR_13)) {
   FUNC_3("3D_DRAW_INDX_2: expect subsequent INDX_BUFFER, but stream is too short.\n");
   return -VAR_0;
  }

  VAR_14 = FUNC_6(VAR_8->buffer,
    sizeof(VAR_13), &VAR_13);

  VAR_9 = FUNC_5(VAR_8->buffer, 0);
  VAR_15 = FUNC_5(VAR_8->buffer, 1);
  VAR_16 = FUNC_5(VAR_8->buffer, 2);
  VAR_17 = FUNC_5(VAR_8->buffer, 3);

  if (VAR_14->header.cmd_type != VAR_1 ||
      VAR_14->packet3.packet != VAR_2 ||
      *VAR_9 != FUNC_2(VAR_4, 2)) {
   FUNC_3("3D_DRAW_INDX_2: expect subsequent INDX_BUFFER.\n");
   return -VAR_0;
  }

  if ((*VAR_15 & 0x8000ffff) != 0x80000810) {
   FUNC_3("Invalid indx_buffer reg address %08X\n",
     *VAR_15);
   return -VAR_0;
  }
  if (!FUNC_8(VAR_7, *VAR_16)) {
   FUNC_3("Invalid indx_buffer offset is %08X\n",
     *VAR_16);
   return -VAR_0;
  }
  if (*VAR_17 != VAR_12) {
   FUNC_3("INDX_BUFFER: buffer size %i, expected %i\n",
    *VAR_17, VAR_12);
   return -VAR_0;
  }

  FUNC_1(4);
  FUNC_4(VAR_8->buffer, 4);
  FUNC_0();
 }

 return 0;
}
