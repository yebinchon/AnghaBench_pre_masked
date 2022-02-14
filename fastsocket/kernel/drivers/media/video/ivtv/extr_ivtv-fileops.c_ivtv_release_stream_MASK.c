
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_stream {int id; size_t type; int s_flags; int name; struct ivtv* itv; } ;
struct ivtv {struct ivtv_stream* streams; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ivtv_stream*) ;
 int FUNC_3 (struct ivtv*,int ) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

void FUNC_6(struct ivtv_stream *VAR_7)
{
 struct ivtv *VAR_8 = VAR_7->itv;
 struct ivtv_stream *VAR_9;

 VAR_7->id = -1;
 if ((VAR_7->type == VAR_1 || VAR_7->type == VAR_3) &&
  FUNC_5(VAR_5, &VAR_7->s_flags)) {

  return;
 }
 if (!FUNC_4(VAR_4, &VAR_7->s_flags)) {
  FUNC_0("Release stream %s not in use!\n", VAR_7->name);
  return;
 }

 FUNC_2(VAR_7);


 if (VAR_7->type == VAR_1)
  FUNC_3(VAR_8, VAR_6);




 if (VAR_7->type == VAR_0)
  VAR_9 = &VAR_8->streams[VAR_1];
 else if (VAR_7->type == VAR_2)
  VAR_9 = &VAR_8->streams[VAR_3];
 else
  return;


 if (!FUNC_4(VAR_5, &VAR_9->s_flags)) {

  return;
 }
 if (VAR_9->id != -1) {

  return;
 }

 if (VAR_9->type == VAR_1)
  FUNC_3(VAR_8, VAR_6);
 FUNC_1(VAR_4, &VAR_9->s_flags);
 FUNC_2(VAR_9);
}
