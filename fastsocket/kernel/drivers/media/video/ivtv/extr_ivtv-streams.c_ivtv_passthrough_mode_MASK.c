
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_stream {int s_flags; int * vdev; } ;
struct ivtv {scalar_t__ output_mode; int cxhdl; int capturing; int decoding; struct ivtv_stream* streams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct ivtv*,scalar_t__) ;
 int FUNC_8 (struct ivtv_stream*) ;
 int FUNC_9 (struct ivtv*,int ,int,int,int,...) ;
 int FUNC_10 (int ,int *) ;

int FUNC_11(struct ivtv *VAR_12, int VAR_13)
{
 struct ivtv_stream *VAR_14 = &VAR_12->streams[VAR_7];
 struct ivtv_stream *VAR_15 = &VAR_12->streams[VAR_6];

 if (VAR_14->vdev == ((void*)0) || VAR_15->vdev == ((void*)0))
  return -VAR_5;

 FUNC_0("ivtv ioctl: Select passthrough mode\n");



 if (VAR_13) {
  if (VAR_12->output_mode == VAR_11) {
   return 0;
  }
  if (FUNC_7(VAR_12, VAR_11) != VAR_11)
   return -VAR_4;


  FUNC_10(VAR_8, &VAR_15->s_flags);
  FUNC_10(VAR_9, &VAR_15->s_flags);


  FUNC_8(VAR_15);


  FUNC_9(VAR_12, VAR_0, 2, 0, 1);
  FUNC_2(&VAR_12->decoding);


  if (FUNC_3(&VAR_12->capturing) == 0) {
   FUNC_6(&VAR_12->cxhdl);
   FUNC_5(&VAR_12->cxhdl, 1);
  }


  FUNC_9(VAR_12, VAR_2, 2, 2, 11);
  FUNC_2(&VAR_12->capturing);
  return 0;
 }

 if (VAR_12->output_mode != VAR_11)
  return 0;


 FUNC_9(VAR_12, VAR_3, 3, 1, 2, 11);
 FUNC_9(VAR_12, VAR_1, 3, 1, 0, 0);

 FUNC_1(&VAR_12->capturing);
 FUNC_1(&VAR_12->decoding);
 FUNC_4(VAR_8, &VAR_15->s_flags);
 FUNC_4(VAR_9, &VAR_15->s_flags);
 VAR_12->output_mode = VAR_10;
 if (FUNC_3(&VAR_12->capturing) == 0)
  FUNC_5(&VAR_12->cxhdl, 0);

 return 0;
}
