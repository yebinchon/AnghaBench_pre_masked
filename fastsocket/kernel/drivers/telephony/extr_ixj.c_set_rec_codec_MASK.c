
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int low; } ;
struct TYPE_9__ {int g729_loaded; int ts85_loaded; } ;
struct TYPE_8__ {int low; } ;
struct TYPE_7__ {int low; } ;
struct TYPE_11__ {int rec_codec; int rec_frame_size; int rec_mode; int read_buffer_size; int * read_buffer; TYPE_4__ baseframe; TYPE_3__ flags; TYPE_2__ dsp; TYPE_1__ ver; } ;
typedef TYPE_5__ IXJ ;
 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(IXJ *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 VAR_1->rec_codec = VAR_2;

 switch (VAR_2) {
 case 138:
  if (VAR_1->ver.low != 0x12 || VAR_0) {
   VAR_1->rec_frame_size = 12;
   VAR_1->rec_mode = 0;
  } else {
   VAR_3 = 1;
  }
  break;
 case 139:
  if (VAR_1->ver.low != 0x12 || VAR_0) {
   VAR_1->rec_frame_size = 10;
   VAR_1->rec_mode = 0;
  } else {
   VAR_3 = 1;
  }
  break;
 case 130:
  if (VAR_1->dsp.low == 0x20 || VAR_1->flags.ts85_loaded) {
   VAR_1->rec_frame_size = 16;
   VAR_1->rec_mode = 0;
  } else {
   VAR_3 = 1;
  }
  break;
 case 131:
  if (VAR_1->ver.low != 0x12 || VAR_0) {
   VAR_1->rec_frame_size = 9;
   VAR_1->rec_mode = 0;
  } else {
   VAR_3 = 1;
  }
  break;
 case 132:
  if (VAR_1->ver.low != 0x12 || VAR_0) {
   VAR_1->rec_frame_size = 8;
   VAR_1->rec_mode = 0;
  } else {
   VAR_3 = 1;
  }
  break;
 case 137:
  if (VAR_1->dsp.low != 0x20) {
   VAR_1->rec_frame_size = 48;
   VAR_1->rec_mode = 0;
  } else {
   VAR_3 = 1;
  }
  break;
 case 136:
  if (VAR_1->dsp.low != 0x20) {
   if (!VAR_1->flags.g729_loaded) {
    VAR_3 = 1;
    break;
   }
   switch (VAR_1->baseframe.low) {
   case 0xA0:
    VAR_1->rec_frame_size = 10;
    break;
   case 0x50:
    VAR_1->rec_frame_size = 5;
    break;
   default:
    VAR_1->rec_frame_size = 15;
    break;
   }
   VAR_1->rec_mode = 0;
  } else {
   VAR_3 = 1;
  }
  break;
 case 135:
  if (VAR_1->dsp.low != 0x20) {
   if (!VAR_1->flags.g729_loaded) {
    VAR_3 = 1;
    break;
   }
   switch (VAR_1->baseframe.low) {
   case 0xA0:
    VAR_1->rec_frame_size = 12;
    break;
   case 0x50:
    VAR_1->rec_frame_size = 6;
    break;
   default:
    VAR_1->rec_frame_size = 18;
    break;
   }
   VAR_1->rec_mode = 0;
  } else {
   VAR_3 = 1;
  }
  break;
 case 129:
  switch (VAR_1->baseframe.low) {
  case 0xA0:
   VAR_1->rec_frame_size = 80;
   break;
  case 0x50:
   VAR_1->rec_frame_size = 40;
   break;
  default:
   VAR_1->rec_frame_size = 120;
   break;
  }
  VAR_1->rec_mode = 4;
  break;
 case 140:
  switch (VAR_1->baseframe.low) {
  case 0xA0:
   VAR_1->rec_frame_size = 80;
   break;
  case 0x50:
   VAR_1->rec_frame_size = 40;
   break;
  default:
   VAR_1->rec_frame_size = 120;
   break;
  }
  VAR_1->rec_mode = 4;
  break;
 case 134:
  switch (VAR_1->baseframe.low) {
  case 0xA0:
   VAR_1->rec_frame_size = 160;
   break;
  case 0x50:
   VAR_1->rec_frame_size = 80;
   break;
  default:
   VAR_1->rec_frame_size = 240;
   break;
  }
  VAR_1->rec_mode = 5;
  break;
 case 133:
  switch (VAR_1->baseframe.low) {
  case 0xA0:
   VAR_1->rec_frame_size = 80;
   break;
  case 0x50:
   VAR_1->rec_frame_size = 40;
   break;
  default:
   VAR_1->rec_frame_size = 120;
   break;
  }
  VAR_1->rec_mode = 6;
  break;
 case 128:
  switch (VAR_1->baseframe.low) {
  case 0xA0:
   VAR_1->rec_frame_size = 80;
   break;
  case 0x50:
   VAR_1->rec_frame_size = 40;
   break;
  default:
   VAR_1->rec_frame_size = 120;
   break;
  }
  VAR_1->rec_mode = 7;
  break;
 default:
  FUNC_0(VAR_1->read_buffer);
  VAR_1->rec_frame_size = 0;
  VAR_1->rec_mode = -1;
  VAR_1->read_buffer = ((void*)0);
  VAR_1->read_buffer_size = 0;
  VAR_3 = 1;
  break;
 }
 return VAR_3;
}
