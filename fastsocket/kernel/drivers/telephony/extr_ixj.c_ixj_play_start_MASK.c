
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int playing; int play_first_frame; scalar_t__ recording; } ;
struct TYPE_8__ {int low; } ;
struct TYPE_10__ {int play_codec; int play_mode; int play_frame_size; int write_buffers_empty; int write_buffer_size; int aec_level; TYPE_2__ flags; TYPE_1__ ver; scalar_t__ write_buffer; scalar_t__ write_buffer_wp; scalar_t__ write_buffer_rp; scalar_t__ write_buffer_end; int board; scalar_t__ drybuffer; } ;
typedef TYPE_3__ IXJ ;


 int VAR_0 ;





 int VAR_1 ;



 scalar_t__ FUNC_0 (int,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int ,...) ;

__attribute__((used)) static int FUNC_5(IXJ *VAR_4)
{
 unsigned short VAR_5 = 0x0000;

 if (VAR_4->write_buffer) {
  FUNC_2(VAR_4);
 }

 if(VAR_2 & 0x0002)
  FUNC_4("IXJ %d Starting Play Codec %d at %ld\n", VAR_4->board, VAR_4->play_codec, VAR_3);

 VAR_4->flags.playing = 1;
 FUNC_0(0x0FE0, VAR_4);

 VAR_4->flags.play_first_frame = 1;
 VAR_4->drybuffer = 0;

 if (!VAR_4->play_mode) {
  switch (VAR_4->play_codec) {
  case 134:
   VAR_5 = 0x5231;
   break;
  case 135:
   VAR_5 = 0x5232;
   break;
  case 128:
   VAR_5 = 0x5230;

   break;
  case 129:
   VAR_5 = 0x5233;

   break;
  case 130:
   VAR_5 = 0x5234;

   break;
  case 133:
   VAR_5 = 0x5235;
   break;
  case 132:
  case 131:
   VAR_5 = 0x5236;
   break;
  default:
   return 1;
  }
  if (FUNC_0(VAR_5, VAR_4))
   return -1;
 }
 VAR_4->write_buffer = FUNC_3(VAR_4->play_frame_size * 2, VAR_1);
 if (!VAR_4->write_buffer) {
  FUNC_4("Write buffer allocation for ixj board %d failed!\n", VAR_4->board);
  return -VAR_0;
 }

 VAR_4->write_buffers_empty = 1;
 VAR_4->write_buffer_size = VAR_4->play_frame_size * 2;
 VAR_4->write_buffer_end = VAR_4->write_buffer + VAR_4->play_frame_size * 2;
 VAR_4->write_buffer_rp = VAR_4->write_buffer_wp = VAR_4->write_buffer;

 if (FUNC_0(0x5202, VAR_4))

  return -1;

 switch (VAR_4->play_mode) {
 case 0:
  VAR_5 = 0x2C03;
  break;
 case 2:
  if (VAR_4->ver.low == 0x12) {
   VAR_5 = 0x2C23;
  } else {
   VAR_5 = 0x2C21;
  }
  break;
 case 4:
  if (VAR_4->ver.low == 0x12) {
   VAR_5 = 0x2C43;
  } else {
   VAR_5 = 0x2C41;
  }
  break;
 case 5:
  if (VAR_4->ver.low == 0x12) {
   VAR_5 = 0x2C53;
  } else {
   VAR_5 = 0x2C51;
  }
  break;
 case 6:
  if (VAR_4->ver.low == 0x12) {
   VAR_5 = 0x2C63;
  } else {
   VAR_5 = 0x2C61;
  }
  break;
 }
 if (FUNC_0(VAR_5, VAR_4))
  return -1;

 if (FUNC_0(0x2000, VAR_4))
  return -1;

 if (FUNC_0(0x2000 + VAR_4->play_frame_size, VAR_4))
  return -1;

 if (VAR_4->flags.recording) {
  FUNC_1(VAR_4, VAR_4->aec_level);
 }

 return 0;
}
