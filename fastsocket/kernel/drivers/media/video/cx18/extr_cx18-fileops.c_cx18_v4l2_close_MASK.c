
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct cx18_open_id* private_data; } ;
struct cx18_stream {scalar_t__ id; int handle; int name; } ;
struct cx18_open_id {size_t type; scalar_t__ open_id; int prio; struct cx18* cx; } ;
struct TYPE_2__ {int video_mute; int video_mute_yuv; } ;
struct cx18 {int serialize_lock; TYPE_1__ params; int ana_capturing; int std; int i_flags; int prio; struct cx18_stream* streams; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_3 ;
 int FUNC_3 (struct cx18*) ;
 int FUNC_4 (struct cx18*,int ,int ,int ) ;
 int FUNC_5 (struct cx18*) ;
 int FUNC_6 (struct cx18_stream*) ;
 int FUNC_7 (struct cx18_open_id*,int ) ;
 int FUNC_8 (struct cx18*) ;
 int FUNC_9 (struct cx18*,int ,int,int ,int) ;
 int FUNC_10 (struct cx18_open_id*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_4 ;
 int FUNC_13 (int *,int ) ;

int FUNC_14(struct file *VAR_5)
{
 struct cx18_open_id *VAR_6 = VAR_5->private_data;
 struct cx18 *VAR_7 = VAR_6->cx;
 struct cx18_stream *VAR_8 = &VAR_7->streams[VAR_6->type];

 FUNC_0("close() of %s\n", VAR_8->name);

 FUNC_13(&VAR_7->prio, VAR_6->prio);


 if (VAR_8->id != VAR_6->open_id) {
  FUNC_10(VAR_6);
  return 0;
 }




 FUNC_11(&VAR_7->serialize_lock);
 if (VAR_6->type == VAR_1) {

  FUNC_5(VAR_7);

  FUNC_2(VAR_2, &VAR_7->i_flags);

  FUNC_4(VAR_7, VAR_3, VAR_4, VAR_7->std);

  FUNC_3(VAR_7);
  if (FUNC_1(&VAR_7->ana_capturing) > 0) {

   FUNC_9(VAR_7, VAR_0, 2, VAR_8->handle,
    VAR_7->params.video_mute |
     (VAR_7->params.video_mute_yuv << 8));
  }

  FUNC_8(VAR_7);
  FUNC_6(VAR_8);
 } else {
  FUNC_7(VAR_6, 0);
 }
 FUNC_10(VAR_6);
 FUNC_12(&VAR_7->serialize_lock);
 return 0;
}
