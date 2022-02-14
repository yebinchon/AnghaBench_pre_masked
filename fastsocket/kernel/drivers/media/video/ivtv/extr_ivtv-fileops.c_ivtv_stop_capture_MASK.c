
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_stream {int id; int s_flags; int name; } ;
struct ivtv_open_id {size_t type; struct ivtv* itv; } ;
struct ivtv {struct ivtv_stream* streams; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct ivtv_stream*) ;
 int FUNC_4 (struct ivtv_stream*,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;

void FUNC_6(struct ivtv_open_id *VAR_7, int VAR_8)
{
 struct ivtv *VAR_9 = VAR_7->itv;
 struct ivtv_stream *VAR_10 = &VAR_9->streams[VAR_7->type];

 FUNC_0("close() of %s\n", VAR_10->name);




 if (FUNC_5(VAR_5, &VAR_10->s_flags)) {
  struct ivtv_stream *VAR_11 = &VAR_9->streams[VAR_2];

  FUNC_1("close stopping capture\n");


  if (VAR_7->type == VAR_1 &&
      FUNC_5(VAR_5, &VAR_11->s_flags) &&
      !FUNC_5(VAR_3, &VAR_11->s_flags)) {
   FUNC_1("close stopping embedded VBI capture\n");
   FUNC_4(VAR_11, 0);
  }
  if ((VAR_7->type == VAR_0 ||
       VAR_7->type == VAR_2) &&
      FUNC_5(VAR_4, &VAR_10->s_flags)) {

   VAR_10->id = -1;
  }
  else {
   FUNC_4(VAR_10, VAR_8);
  }
 }
 if (!VAR_8) {
  FUNC_2(VAR_3, &VAR_10->s_flags);
  FUNC_2(VAR_6, &VAR_10->s_flags);
  FUNC_3(VAR_10);
 }
}
