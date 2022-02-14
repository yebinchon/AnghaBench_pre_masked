
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {int track_flush; } ;
typedef TYPE_1__ drm_radeon_private_t ;
struct TYPE_12__ {int buffer; } ;
typedef TYPE_2__ drm_radeon_kcmd_buffer_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int FUNC_3 (int ,int) ;







 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static __inline__ int FUNC_9(drm_radeon_private_t *VAR_4,
         drm_radeon_kcmd_buffer_t *VAR_5)
{
 u32 *VAR_6;
 int VAR_7;
 VAR_3;

 if (4 > FUNC_5(VAR_5->buffer))
  return -VAR_0;





 VAR_6 = FUNC_4(VAR_5->buffer, 0);


 if ((*VAR_6 >> 30) != 0x3) {
  FUNC_2("Not a packet3 header (0x%08x)\n", *VAR_6);
  return -VAR_0;
 }

 VAR_7 = (*VAR_6 >> 16) & 0x3fff;


 if ((VAR_7 + 2) * 4 > FUNC_5(VAR_5->buffer)) {
  FUNC_2
      ("Expected packet3 of length %d but have only %d bytes left\n",
       (VAR_7 + 2) * 4, FUNC_5(VAR_5->buffer));
  return -VAR_0;
 }


 switch (*VAR_6 & 0xff00) {
 case 135:
  return FUNC_6(VAR_4, VAR_5, *VAR_6);

 case 134:
  return FUNC_7(VAR_4, VAR_5);

 case 130:
  FUNC_2("packet3 INDX_BUFFER without preceding 3D_DRAW_INDX_2 is illegal.\n");
  return -VAR_0;
 case 133:

 case 131:

  VAR_4->track_flush &= ~(VAR_1 |
        VAR_2);
  break;
 case 132:


  VAR_4->track_flush &= ~(VAR_1 |
        VAR_2);
  return FUNC_8(VAR_4, VAR_5);
 case 128:
 case 129:

  break;
 default:
  FUNC_2("Unknown packet3 header (0x%08x)\n", *VAR_6);
  return -VAR_0;
 }

 FUNC_1(VAR_7 + 2);
 FUNC_3(VAR_5->buffer, VAR_7 + 2);
 FUNC_0();

 return 0;
}
