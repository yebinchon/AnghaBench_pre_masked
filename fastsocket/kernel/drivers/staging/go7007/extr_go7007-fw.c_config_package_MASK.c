
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct go7007 {int sensor_framerate; int fps_scale; int height; int width; TYPE_1__* board_info; int modet_enable; scalar_t__ interlace_coding; int ipb; int gop_header_enable; int dvd_mode; int repeat_seqhead; int format; } ;
typedef int __le16 ;
struct TYPE_2__ {int sensor_flags; int hpi_buffer_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int*,int,int) ;

__attribute__((used)) static int FUNC_1(struct go7007 *VAR_6, __le16 *VAR_7, int VAR_8)
{
 int VAR_9 = VAR_6->sensor_framerate / VAR_6->fps_scale / 1000;
 int VAR_10 = VAR_6->interlace_coding ? VAR_6->height / 32 : VAR_6->height / 16;
 int VAR_11 = VAR_9;
 int VAR_12 = 2, VAR_13 = 31;
 int VAR_14 = 0;
 u16 VAR_15[] = {
  0x200e, 0x0000,
  0xc002, 0x14b4,
  0xc003, 0x28b4,
  0xc004, 0x3c5a,
  0xdc05, 0x2a77,
  0xc6c3, VAR_6->format == VAR_3 ? 0 :
    (VAR_6->format == VAR_0 ? 0 : 1),
  0xc680, VAR_6->format == VAR_3 ? 0xf1 :
    (VAR_6->format == VAR_0 ? 0x61 :
         0xd3),
  0xc780, 0x0140,
  0xe009, 0x0001,
  0xc60f, 0x0008,
  0xd4ff, 0x0002,
  0xe403, 2340,
  0xe406, 75,
  0xd411, 0x0001,
  0xd410, 0xa1d6,
  0x0001, 0x2801,

  0x200d, 0x0000,
  0xe402, 0x018b,
  0xe401, 0x8b01,
  0xd472, (VAR_6->board_info->sensor_flags &
       VAR_4) &&
      (!VAR_6->interlace_coding) ?
     0x01b0 : 0x0170,
  0xd475, (VAR_6->board_info->sensor_flags &
       VAR_4) &&
      (!VAR_6->interlace_coding) ?
     0x0008 : 0x0009,
  0xc404, VAR_6->interlace_coding ? 0x44 :
    (VAR_6->format == VAR_3 ? 0x11 :
    (VAR_6->format == VAR_1 ? 0x02 :
    (VAR_6->format == VAR_2 ? 0x04 :
    (VAR_6->format == VAR_0 ? 0x08 :
             0x20)))),
  0xbf0a, (VAR_6->format == VAR_3 ? 8 :
    (VAR_6->format == VAR_1 ? 1 :
    (VAR_6->format == VAR_2 ? 2 :
    (VAR_6->format == VAR_0 ? 4 : 16)))) |
    ((VAR_6->repeat_seqhead ? 1 : 0) << 6) |
    ((VAR_6->dvd_mode ? 1 : 0) << 9) |
    ((VAR_6->gop_header_enable ? 1 : 0) << 10),
  0xbf0b, 0,
  0xdd5a, VAR_6->ipb ? 0x14 : 0x0a,
  0xbf0c, 0,
  0xbf0d, 0,
  0xc683, VAR_14,
  0xc40a, (VAR_6->width << 4) | VAR_10,
  0xe01a, VAR_6->board_info->hpi_buffer_cap,
  0, 0,
  0, 0,

  0x2008, 0,
  0xe402, 0x88,
  0xe401, 0x8f01,
  0xbf6a, 0,
  0xbf6b, 0,
  0xbf6c, 0,
  0xbf6d, 0,
  0xbf6e, 0,
  0xbf6f, 0,
  0, 0,
  0, 0,
  0, 0,
  0, 0,
  0, 0,
  0, 0,
  0, 0,

  0x200e, 0,
  0xbf66, VAR_11,
  0xbf67, 0,
  0xbf68, VAR_12,
  0xbf69, VAR_13,
  0xbfe0, 0,
  0xbfe1, 0,
  0xbfe2, 0,
  0xbfe3, VAR_6->ipb ? 3 : 1,
  0xc031, VAR_6->board_info->sensor_flags &
     VAR_5 ? 1 : 0,
  0xc01c, 0x1f,
  0xdd8c, 0x15,
  0xdd94, 0x15,
  0xdd88, VAR_6->ipb ? 0x1401 : 0x0a01,
  0xdd90, VAR_6->ipb ? 0x1401 : 0x0a01,
  0, 0,

  0x200e, 0,
  0xbfe4, 0,
  0xbfe5, 0,
  0xbfe6, 0,
  0xbfe7, VAR_9 << 8,
  0xbfe8, 0x3a00,
  0xbfe9, 0,
  0xbfea, 0,
  0xbfeb, 0,
  0xbfec, (VAR_6->interlace_coding ? 1 << 15 : 0) |
     (VAR_6->modet_enable ? 0xa : 0) |
     (VAR_6->board_info->sensor_flags &
      VAR_5 ? 1 : 0),
  0xbfed, 0,
  0xbfee, 0,
  0xbfef, 0,
  0xbff0, VAR_6->board_info->sensor_flags &
     VAR_4 ? 0xf060 : 0xb060,
  0xbff1, 0,
  0, 0,
 };

 return FUNC_0(VAR_7, VAR_15, 5, VAR_8);
}
