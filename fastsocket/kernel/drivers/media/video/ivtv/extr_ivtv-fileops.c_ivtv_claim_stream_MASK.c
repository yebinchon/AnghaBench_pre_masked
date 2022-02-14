
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ivtv_stream {int id; int s_flags; } ;
struct ivtv_open_id {int open_id; struct ivtv* itv; } ;
struct TYPE_2__ {scalar_t__ insert_mpeg; } ;
struct ivtv {struct ivtv_stream* streams; TYPE_1__ vbi; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ivtv*,int ) ;
 int FUNC_2 (struct ivtv*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct ivtv_open_id *VAR_8, int VAR_9)
{
 struct ivtv *VAR_10 = VAR_8->itv;
 struct ivtv_stream *VAR_11 = &VAR_10->streams[VAR_9];
 struct ivtv_stream *VAR_12;
 int VAR_13;

 if (FUNC_4(VAR_5, &VAR_11->s_flags)) {

  if (VAR_11->id == VAR_8->open_id) {

   return 0;
  }
  if (VAR_11->id == -1 && (VAR_9 == VAR_2 ||
      VAR_9 == VAR_4)) {



   VAR_11->id = VAR_8->open_id;
   FUNC_0("Start Read VBI\n");
   return 0;
  }

  FUNC_0("Stream %d is busy\n", VAR_9);
  return -VAR_0;
 }
 VAR_11->id = VAR_8->open_id;
 if (VAR_9 == VAR_2) {

  FUNC_1(VAR_10, VAR_7);
 }





 if (VAR_9 == VAR_1) {
  VAR_13 = VAR_2;
 } else if (VAR_9 == VAR_3 &&
     VAR_10->vbi.insert_mpeg && !FUNC_2(VAR_10)) {
  VAR_13 = VAR_4;
 } else {
  return 0;
 }
 VAR_12 = &VAR_10->streams[VAR_13];

 if (!FUNC_4(VAR_5, &VAR_12->s_flags)) {

  if (VAR_13 == VAR_2)
   FUNC_1(VAR_10, VAR_7);
 }

 FUNC_3(VAR_6, &VAR_12->s_flags);
 return 0;
}
