
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cx18_stream {int id; int s_flags; } ;
struct cx18_open_id {int open_id; struct cx18* cx; } ;
struct TYPE_2__ {scalar_t__ insert_mpeg; } ;
struct cx18 {struct cx18_stream* streams; TYPE_1__ vbi; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct cx18*) ;
 int FUNC_3 (struct cx18_stream*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct cx18_open_id *VAR_7, int VAR_8)
{
 struct cx18 *VAR_9 = VAR_7->cx;
 struct cx18_stream *VAR_10 = &VAR_9->streams[VAR_8];
 struct cx18_stream *VAR_11;


 if (VAR_8 == VAR_0) {
  FUNC_1("MPEG Index stream cannot be claimed "
     "directly, but something tried.\n");
  return -VAR_6;
 }

 if (FUNC_5(VAR_3, &VAR_10->s_flags)) {

  if (VAR_10->id == VAR_7->open_id) {

   return 0;
  }
  if (VAR_10->id == -1 && VAR_8 == VAR_2) {



   VAR_10->id = VAR_7->open_id;
   FUNC_0("Start Read VBI\n");
   return 0;
  }

  FUNC_0("Stream %d is busy\n", VAR_8);
  return -VAR_5;
 }
 VAR_10->id = VAR_7->open_id;
 if (VAR_8 != VAR_1)
  return 0;

 VAR_11 = &VAR_9->streams[VAR_0];
 if (VAR_9->vbi.insert_mpeg && !FUNC_2(VAR_9))
  VAR_11 = &VAR_9->streams[VAR_2];
 else if (!FUNC_3(VAR_11))
  return 0;

 FUNC_4(VAR_3, &VAR_11->s_flags);


 FUNC_4(VAR_4, &VAR_11->s_flags);
 return 0;
}
