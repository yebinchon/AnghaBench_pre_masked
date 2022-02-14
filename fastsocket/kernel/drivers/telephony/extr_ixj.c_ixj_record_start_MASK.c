
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int recording; scalar_t__ playing; } ;
struct TYPE_8__ {int low; } ;
struct TYPE_10__ {int rec_codec; int rec_mode; int rec_frame_size; int read_buffer_size; int aec_level; TYPE_2__ flags; TYPE_1__ ver; int board; scalar_t__ read_buffer; } ;
typedef TYPE_3__ IXJ ;


 int VAR_0 ;





 int VAR_1 ;



 scalar_t__ FUNC_0 (unsigned short,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int ,...) ;

__attribute__((used)) static int FUNC_5(IXJ *VAR_4)
{
 unsigned short VAR_5 = 0x0000;

 if (VAR_4->read_buffer) {
  FUNC_2(VAR_4);
 }
 VAR_4->flags.recording = 1;
 FUNC_0(0x0FE0, VAR_4);

 if(VAR_2 & 0x0002)
  FUNC_4("IXJ %d Starting Record Codec %d at %ld\n", VAR_4->board, VAR_4->rec_codec, VAR_3);

 if (!VAR_4->rec_mode) {
  switch (VAR_4->rec_codec) {
  case 134:
   VAR_5 = 0x5131;
   break;
  case 135:
   VAR_5 = 0x5132;
   break;
  case 128:
   VAR_5 = 0x5130;

   break;
  case 129:
   VAR_5 = 0x5133;

   break;
  case 130:
   VAR_5 = 0x5134;

   break;
  case 133:
   VAR_5 = 0x5135;
   break;
  case 132:
  case 131:
   VAR_5 = 0x5136;
   break;
  default:
   return 1;
  }
  if (FUNC_0(VAR_5, VAR_4))
   return -1;
 }
 if (!VAR_4->read_buffer) {
  if (!VAR_4->read_buffer)
   VAR_4->read_buffer = FUNC_3(VAR_4->rec_frame_size * 2, VAR_1);
  if (!VAR_4->read_buffer) {
   FUNC_4("Read buffer allocation for ixj board %d failed!\n", VAR_4->board);
   return -VAR_0;
  }
 }
 VAR_4->read_buffer_size = VAR_4->rec_frame_size * 2;

 if (FUNC_0(0x5102, VAR_4))

  return -1;

 switch (VAR_4->rec_mode) {
 case 0:
  VAR_5 = 0x1C03;

  break;
 case 4:
  if (VAR_4->ver.low == 0x12) {
   VAR_5 = 0x1E03;

  } else {
   VAR_5 = 0x1E01;

  }
  break;
 case 5:
  if (VAR_4->ver.low == 0x12) {
   VAR_5 = 0x1E83;

  } else {
   VAR_5 = 0x1E81;

  }
  break;
 case 6:
  if (VAR_4->ver.low == 0x12) {
   VAR_5 = 0x1F03;

  } else {
   VAR_5 = 0x1F01;

  }
  break;
 case 7:
  if (VAR_4->ver.low == 0x12) {
   VAR_5 = 0x1F83;
  } else {
   VAR_5 = 0x1F81;
  }
  break;
 }
 if (FUNC_0(VAR_5, VAR_4))
  return -1;

 if (VAR_4->flags.playing) {
  FUNC_1(VAR_4, VAR_4->aec_level);
 }
 return 0;
}
