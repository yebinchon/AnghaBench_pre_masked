
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_stream {scalar_t__ type; int s_flags; int name; } ;
struct ivtv_open_id {size_t type; struct ivtv* itv; } ;
struct ivtv {int i_flags; struct ivtv_stream* streams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct ivtv_open_id*,scalar_t__) ;
 int FUNC_4 (struct ivtv_stream*) ;
 scalar_t__ FUNC_5 (struct ivtv_stream*) ;
 int FUNC_6 (struct ivtv_stream*,int ) ;
 int FUNC_7 (struct ivtv*,int ,int,int) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

int FUNC_12(struct ivtv_open_id *VAR_16)
{
 struct ivtv *VAR_17 = VAR_16->itv;
 struct ivtv_stream *VAR_18 = &VAR_17->streams[VAR_16->type];
 struct ivtv_stream *VAR_19;

 if (VAR_18->type == VAR_9 ||
     VAR_18->type == VAR_4 ||
     VAR_18->type == VAR_7 ||
     VAR_18->type == VAR_6) {

  return -VAR_3;
 }


 if (FUNC_3(VAR_16, VAR_18->type))
  return -VAR_1;


 if (VAR_18->type == VAR_5) {
  FUNC_8(VAR_12, &VAR_18->s_flags);
  return 0;
 }



 if (FUNC_11(VAR_15, &VAR_18->s_flags) || FUNC_10(VAR_14, &VAR_18->s_flags)) {
  FUNC_8(VAR_12, &VAR_18->s_flags);
  return 0;
 }


 VAR_19 = &VAR_17->streams[VAR_10];
 if (VAR_18->type == VAR_8 &&
     FUNC_11(VAR_13, &VAR_19->s_flags) &&
     !FUNC_10(VAR_14, &VAR_19->s_flags)) {



  if (FUNC_5(VAR_19)) {
   FUNC_1("VBI capture start failed\n");


   FUNC_2(VAR_14, &VAR_19->s_flags);
   FUNC_2(VAR_14, &VAR_18->s_flags);

   FUNC_4(VAR_18);
   return -VAR_2;
  }
  FUNC_0("VBI insertion started\n");
 }


 if (!FUNC_5(VAR_18)) {

  FUNC_8(VAR_12, &VAR_18->s_flags);

  if (FUNC_9(VAR_11, &VAR_17->i_flags))
   FUNC_7(VAR_17, VAR_0, 1, 1);
  return 0;
 }


 FUNC_1("Failed to start capturing for stream %s\n", VAR_18->name);




 if (VAR_18->type == VAR_8 &&
     FUNC_11(VAR_14, &VAR_19->s_flags)) {
  FUNC_6(VAR_19, 0);
  FUNC_2(VAR_14, &VAR_19->s_flags);
 }
 FUNC_2(VAR_14, &VAR_18->s_flags);
 FUNC_4(VAR_18);
 return -VAR_2;
}
