
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sd {int* jpeg_hdr; int avg_lum; } ;
struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {scalar_t__ last_packet_type; scalar_t__ curr_mode; TYPE_2__ cam; } ;
struct TYPE_3__ {int priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct gspca_dev*,scalar_t__,int*,int) ;
 scalar_t__ FUNC_2 (int*,int*,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_5,
   u8 *VAR_6,
   int VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_5;
 int VAR_9;
 static u8 VAR_10[] =
  {0xff, 0xff, 0x00, 0xc4, 0xc4, 0x96};
 if (VAR_7 == 64 && FUNC_2(VAR_6, VAR_10, 6) == 0) {
  VAR_9 = ((VAR_6[35] >> 2) & 3) |
      (VAR_6[20] << 2) |
      (VAR_6[19] << 10);
  VAR_9 += ((VAR_6[35] >> 4) & 3) |
       (VAR_6[22] << 2) |
       (VAR_6[21] << 10);
  VAR_9 += ((VAR_6[35] >> 6) & 3) |
       (VAR_6[24] << 2) |
       (VAR_6[23] << 10);
  VAR_9 += (VAR_6[36] & 3) |
      (VAR_6[26] << 2) |
      (VAR_6[25] << 10);
  VAR_9 += ((VAR_6[36] >> 2) & 3) |
       (VAR_6[28] << 2) |
       (VAR_6[27] << 10);
  VAR_9 += ((VAR_6[36] >> 4) & 3) |
       (VAR_6[30] << 2) |
       (VAR_6[29] << 10);
  VAR_9 += ((VAR_6[36] >> 6) & 3) |
       (VAR_6[32] << 2) |
       (VAR_6[31] << 10);
  VAR_9 += ((VAR_6[44] >> 4) & 3) |
       (VAR_6[34] << 2) |
       (VAR_6[33] << 10);
  VAR_9 >>= 9;
  FUNC_0(&VAR_8->avg_lum, VAR_9);
  FUNC_1(VAR_5, VAR_3, ((void*)0), 0);
  return;
 }
 if (VAR_5->last_packet_type == VAR_3) {
  if (VAR_5->cam.cam_mode[(int) VAR_5->curr_mode].priv
    & VAR_4) {
   FUNC_1(VAR_5, VAR_0,
    VAR_8->jpeg_hdr, VAR_2);
   FUNC_1(VAR_5, VAR_1,
    VAR_6, VAR_7);
  } else {
   FUNC_1(VAR_5, VAR_0,
    VAR_6, VAR_7);
  }
 } else {
  FUNC_1(VAR_5, VAR_1, VAR_6, VAR_7);
 }
}
