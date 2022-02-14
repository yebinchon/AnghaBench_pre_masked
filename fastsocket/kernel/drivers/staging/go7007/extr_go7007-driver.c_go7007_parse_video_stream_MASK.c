
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct go7007 {int format; int state; int seen_frame; int parse_length; int modet_word; int spinlock; TYPE_1__* active_buf; int active_map; int video_dev; } ;
struct TYPE_2__ {int bytesused; int modet_active; int offset; int frame_offset; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (struct go7007*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct go7007*) ;

void FUNC_7(struct go7007 *VAR_2, u8 *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = -1, VAR_7 = -1;

 FUNC_2(&VAR_2->spinlock);

 switch (VAR_2->format) {
 case 137:
  VAR_6 = 0xB0;
  VAR_7 = 0xB6;
  break;
 case 139:
 case 138:
  VAR_6 = 0xB3;
  VAR_7 = 0x00;
  break;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
  if (VAR_2->active_buf != ((void*)0) &&
       VAR_2->active_buf->bytesused >= VAR_0 - 3) {
   FUNC_5(VAR_2->video_dev, "dropping oversized frame\n");
   VAR_2->active_buf->offset -= VAR_2->active_buf->bytesused;
   VAR_2->active_buf->bytesused = 0;
   VAR_2->active_buf->modet_active = 0;
   VAR_2->active_buf = ((void*)0);
  }

  switch (VAR_2->state) {
  case 133:
   switch (VAR_3[VAR_5]) {
   case 0x00:
    VAR_2->state = 136;
    break;
   case 0xFF:
    VAR_2->state = 132;
    break;
   default:
    FUNC_4(VAR_2->active_buf, VAR_3[VAR_5]);
    break;
   }
   break;
  case 136:
   switch (VAR_3[VAR_5]) {
   case 0x00:
    VAR_2->state = 135;
    break;
   case 0xFF:
    FUNC_4(VAR_2->active_buf, 0x00);
    VAR_2->state = 132;
    break;
   default:
    FUNC_4(VAR_2->active_buf, 0x00);
    FUNC_4(VAR_2->active_buf, VAR_3[VAR_5]);
    VAR_2->state = 133;
    break;
   }
   break;
  case 135:
   switch (VAR_3[VAR_5]) {
   case 0x00:
    FUNC_4(VAR_2->active_buf, 0x00);

    break;
   case 0x01:
    VAR_2->state = 134;
    break;
   case 0xFF:
    FUNC_4(VAR_2->active_buf, 0x00);
    FUNC_4(VAR_2->active_buf, 0x00);
    VAR_2->state = 132;
    break;
   default:
    FUNC_4(VAR_2->active_buf, 0x00);
    FUNC_4(VAR_2->active_buf, 0x00);
    FUNC_4(VAR_2->active_buf, VAR_3[VAR_5]);
    VAR_2->state = 133;
    break;
   }
   break;
  case 134:


   if ((VAR_2->format == 139 ||
     VAR_2->format == 138 ||
     VAR_2->format == 137) &&
     (VAR_3[VAR_5] == VAR_6 ||
      VAR_3[VAR_5] == 0xB8 ||
      VAR_3[VAR_5] == VAR_7)) {
    if (VAR_2->active_buf == ((void*)0) || VAR_2->seen_frame)
     FUNC_0(VAR_2);
    if (VAR_3[VAR_5] == VAR_7) {
     if (VAR_2->active_buf != ((void*)0))
      VAR_2->active_buf->frame_offset =
       VAR_2->active_buf->offset;
     VAR_2->seen_frame = 1;
    } else {
     VAR_2->seen_frame = 0;
    }
   }


   switch (VAR_3[VAR_5]) {
   case 0xF5:
    VAR_2->parse_length = 12;
    VAR_2->state = 130;
    break;
   case 0xF6:
    VAR_2->state = 129;
    break;
   case 0xF8:
    VAR_2->parse_length = 0;
    FUNC_1(VAR_2->active_map, 0,
      sizeof(VAR_2->active_map));
    VAR_2->state = 131;
    break;
   case 0xFF:
    FUNC_4(VAR_2->active_buf, 0x00);
    FUNC_4(VAR_2->active_buf, 0x00);
    FUNC_4(VAR_2->active_buf, 0x01);
    VAR_2->state = 132;
    break;
   default:
    FUNC_4(VAR_2->active_buf, 0x00);
    FUNC_4(VAR_2->active_buf, 0x00);
    FUNC_4(VAR_2->active_buf, 0x01);
    FUNC_4(VAR_2->active_buf, VAR_3[VAR_5]);
    VAR_2->state = 133;
    break;
   }
   break;
  case 132:
   switch (VAR_3[VAR_5]) {
   case 0x00:
    FUNC_4(VAR_2->active_buf, 0xFF);
    VAR_2->state = 136;
    break;
   case 0xFF:
    FUNC_4(VAR_2->active_buf, 0xFF);

    break;
   case 0xD8:
    if (VAR_2->format == VAR_1)
     FUNC_0(VAR_2);

   default:
    FUNC_4(VAR_2->active_buf, 0xFF);
    FUNC_4(VAR_2->active_buf, VAR_3[VAR_5]);
    VAR_2->state = 133;
    break;
   }
   break;
  case 129:
   VAR_2->parse_length = VAR_3[VAR_5] << 8;
   VAR_2->state = 128;
   break;
  case 128:
   VAR_2->parse_length |= VAR_3[VAR_5];
   if (VAR_2->parse_length > 0)
    VAR_2->state = 130;
   else
    VAR_2->state = 133;
   break;
  case 131:
   if (VAR_2->parse_length < 204) {
    if (VAR_2->parse_length & 1) {
     VAR_2->modet_word |= VAR_3[VAR_5];
     FUNC_6(VAR_2);
    } else
     VAR_2->modet_word = VAR_3[VAR_5] << 8;
   } else if (VAR_2->parse_length == 207 && VAR_2->active_buf) {
    VAR_2->active_buf->modet_active = VAR_3[VAR_5];
   }
   if (++VAR_2->parse_length == 208)
    VAR_2->state = 133;
   break;
  case 130:
   if (--VAR_2->parse_length == 0)
    VAR_2->state = 133;
   break;
  }
 }

 FUNC_3(&VAR_2->spinlock);
}
