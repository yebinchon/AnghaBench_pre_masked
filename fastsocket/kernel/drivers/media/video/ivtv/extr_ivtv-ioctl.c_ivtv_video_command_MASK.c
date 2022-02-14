
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pts; } ;
struct TYPE_3__ {int speed; int format; } ;
struct video_command {int cmd; int flags; TYPE_2__ stop; TYPE_1__ play; } ;
struct ivtv_stream {int dummy; } ;
struct ivtv_open_id {int dummy; } ;
struct ivtv {int v4l2_cap; int speed; int i_flags; int output_mode; int decoding; struct ivtv_stream* streams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;


 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ivtv*,int ) ;
 int FUNC_2 (struct ivtv_open_id*,int) ;
 int FUNC_3 (struct ivtv_stream*,int,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct ivtv*,int ,int,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct ivtv *VAR_12, struct ivtv_open_id *VAR_13,
  struct video_command *VAR_14, int VAR_15)
{
 struct ivtv_stream *VAR_16 = &VAR_12->streams[VAR_3];

 if (!(VAR_12->v4l2_cap & VAR_7))
  return -VAR_2;

 switch (VAR_14->cmd) {
 case 129: {
  VAR_14->flags = 0;
  VAR_14->play.speed = FUNC_4(VAR_12->speed, VAR_14->play.speed);
  if (VAR_14->play.speed < 0)
   VAR_14->play.format = VAR_11;
  if (VAR_15) break;

  if (FUNC_1(VAR_12, VAR_5) != VAR_5)
   return -VAR_1;
  if (FUNC_7(VAR_4, &VAR_12->i_flags)) {

   VAR_12->speed = 0;
  }
  return FUNC_2(VAR_13, VAR_14->play.speed);
 }

 case 128:
  VAR_14->flags &= VAR_9|VAR_10;
  if (VAR_14->flags & VAR_9)
   VAR_14->stop.pts = 0;
  if (VAR_15) break;
  if (FUNC_0(&VAR_12->decoding) == 0)
   return 0;
  if (VAR_12->output_mode != VAR_5)
   return -VAR_1;

  VAR_12->output_mode = VAR_6;
  return FUNC_3(VAR_16, VAR_14->flags, VAR_14->stop.pts);

 case 130:
  VAR_14->flags &= VAR_8;
  if (VAR_15) break;
  if (VAR_12->output_mode != VAR_5)
   return -VAR_1;
  if (FUNC_0(&VAR_12->decoding) > 0) {
   FUNC_5(VAR_12, VAR_0, 1,
    (VAR_14->flags & VAR_8) ? 1 : 0);
   FUNC_6(VAR_4, &VAR_12->i_flags);
  }
  break;

 case 131:
  VAR_14->flags = 0;
  if (VAR_15) break;
  if (VAR_12->output_mode != VAR_5)
   return -VAR_1;
  if (FUNC_7(VAR_4, &VAR_12->i_flags)) {
   int VAR_17 = VAR_12->speed;
   VAR_12->speed = 0;
   return FUNC_2(VAR_13, VAR_17);
  }
  break;

 default:
  return -VAR_2;
 }
 return 0;
}
