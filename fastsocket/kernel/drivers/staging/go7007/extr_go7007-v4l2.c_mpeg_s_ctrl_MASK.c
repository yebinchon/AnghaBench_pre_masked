
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct go7007 {int bitrate; int gop_size; int pali; int closed_gop; int seq_header_enable; int gop_header_enable; int dvd_mode; int aspect_ratio; void* format; int repeat_seqhead; scalar_t__ streaming; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
__attribute__((used)) static int FUNC_0(struct v4l2_control *VAR_9, struct go7007 *VAR_10)
{

 if (VAR_10->streaming)
  return -VAR_0;

 switch (VAR_9->id) {
 case 142:
  switch (VAR_9->value) {
  case 136:
   VAR_10->format = VAR_4;
   VAR_10->bitrate = 9800000;
   VAR_10->gop_size = 15;
   VAR_10->pali = 0x48;
   VAR_10->closed_gop = 1;
   VAR_10->repeat_seqhead = 0;
   VAR_10->seq_header_enable = 1;
   VAR_10->gop_header_enable = 1;
   VAR_10->dvd_mode = 1;
   break;
  case 135:

   break;
  default:
   return -VAR_1;
  }
  break;
 case 139:
  switch (VAR_9->value) {
  case 130:
   VAR_10->format = VAR_3;
   VAR_10->pali = 0;
   break;
  case 129:
   VAR_10->format = VAR_4;



    VAR_10->pali = 0x48;
   break;
  case 128:
   VAR_10->format = VAR_5;



    VAR_10->pali = 0xf5;
   break;
  default:
   return -VAR_1;
  }
  VAR_10->gop_header_enable =

           1;



   VAR_10->repeat_seqhead = 0;
  VAR_10->dvd_mode = 0;
  break;
 case 141:
  if (VAR_10->format == VAR_2)
   return -VAR_1;
  switch (VAR_9->value) {
  case 133:
   VAR_10->aspect_ratio = VAR_7;
   break;
  case 131:
   VAR_10->aspect_ratio = VAR_8;
   break;
  case 134:
   VAR_10->aspect_ratio = VAR_6;
   break;
  case 132:
  default:
   return -VAR_1;
  }
  break;
 case 137:
  if (VAR_9->value < 0 || VAR_9->value > 34)
   return -VAR_1;
  VAR_10->gop_size = VAR_9->value;
  break;
 case 138:
  if (VAR_9->value != 0 && VAR_9->value != 1)
   return -VAR_1;
  VAR_10->closed_gop = VAR_9->value;
  break;
 case 140:

  if (VAR_9->value < 64000 || VAR_9->value > 10000000)
   return -VAR_1;
  VAR_10->bitrate = VAR_9->value;
  break;
 default:
  return -VAR_1;
 }
 return 0;
}
