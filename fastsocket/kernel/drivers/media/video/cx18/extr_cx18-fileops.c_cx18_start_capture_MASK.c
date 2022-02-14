
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx18_stream {scalar_t__ type; int s_flags; int name; int handle; } ;
struct cx18_open_id {size_t type; struct cx18* cx; } ;
struct cx18 {int i_flags; struct cx18_stream* streams; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct cx18_open_id*,scalar_t__) ;
 int FUNC_4 (struct cx18_stream*) ;
 scalar_t__ FUNC_5 (struct cx18_stream*) ;
 int FUNC_6 (struct cx18_stream*,int ) ;
 int FUNC_7 (struct cx18*,int ,int,int ) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

int FUNC_12(struct cx18_open_id *VAR_13)
{
 struct cx18 *VAR_14 = VAR_13->cx;
 struct cx18_stream *VAR_15 = &VAR_14->streams[VAR_13->type];
 struct cx18_stream *VAR_16;
 struct cx18_stream *VAR_17;

 if (VAR_15->type == VAR_3) {

  return -VAR_12;
 }


 if (FUNC_3(VAR_13, VAR_15->type))
  return -VAR_10;



 if (FUNC_11(VAR_9, &VAR_15->s_flags) ||
     FUNC_10(VAR_8, &VAR_15->s_flags)) {
  FUNC_8(VAR_6, &VAR_15->s_flags);
  return 0;
 }


 VAR_16 = &VAR_14->streams[VAR_4];
 VAR_17 = &VAR_14->streams[VAR_1];
 if (VAR_15->type == VAR_2) {





  if (FUNC_11(VAR_7, &VAR_17->s_flags) &&
      !FUNC_10(VAR_8, &VAR_17->s_flags)) {
   if (FUNC_5(VAR_17)) {
    FUNC_1("IDX capture start failed\n");
    FUNC_2(VAR_8, &VAR_17->s_flags);
    goto start_failed;
   }
   FUNC_0("IDX capture started\n");
  }
  if (FUNC_11(VAR_7, &VAR_16->s_flags) &&
      !FUNC_10(VAR_8, &VAR_16->s_flags)) {
   if (FUNC_5(VAR_16)) {
    FUNC_1("VBI capture start failed\n");
    FUNC_2(VAR_8, &VAR_16->s_flags);
    goto start_failed;
   }
   FUNC_0("VBI insertion started\n");
  }
 }


 if (!FUNC_5(VAR_15)) {

  FUNC_8(VAR_6, &VAR_15->s_flags);

  if (FUNC_9(VAR_5, &VAR_14->i_flags))
   FUNC_7(VAR_14, VAR_0, 1, VAR_15->handle);
  return 0;
 }

start_failed:
 FUNC_1("Failed to start capturing for stream %s\n", VAR_15->name);






 if (VAR_15->type == VAR_2) {

  if (FUNC_11(VAR_8, &VAR_17->s_flags)) {
   FUNC_6(VAR_17, 0);
   FUNC_2(VAR_8, &VAR_17->s_flags);
  }

  if (FUNC_11(VAR_8, &VAR_16->s_flags) &&
      !FUNC_11(VAR_6, &VAR_16->s_flags)) {
   FUNC_6(VAR_16, 0);
   FUNC_2(VAR_8, &VAR_16->s_flags);
  }
 }
 FUNC_2(VAR_8, &VAR_15->s_flags);
 FUNC_4(VAR_15);
 return -VAR_11;
}
