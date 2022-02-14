
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; } ;
struct TYPE_3__ {scalar_t__ length; } ;
struct ivtv_stream {TYPE_2__ q_io; TYPE_1__ q_full; int waitq; int name; int s_flags; } ;
struct ivtv_open_id {size_t type; struct ivtv* itv; } ;
struct ivtv {int serialize_lock; struct ivtv_stream* streams; } ;
struct file {int private_data; } ;
typedef int poll_table ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 struct ivtv_open_id* FUNC_3 (int ) ;
 int FUNC_4 (struct ivtv_open_id*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct file*,int *,int *) ;
 int FUNC_8 (int ,int *) ;

unsigned int FUNC_9(struct file *VAR_6, poll_table * VAR_7)
{
 struct ivtv_open_id *VAR_8 = FUNC_3(VAR_6->private_data);
 struct ivtv *VAR_9 = VAR_8->itv;
 struct ivtv_stream *VAR_10 = &VAR_9->streams[VAR_8->type];
 int VAR_11 = FUNC_8(VAR_1, &VAR_10->s_flags);


 if (!VAR_11 && !FUNC_8(VAR_0, &VAR_10->s_flags)) {
  int VAR_12;

  FUNC_5(&VAR_9->serialize_lock);
  VAR_12 = FUNC_4(VAR_8);
  FUNC_6(&VAR_9->serialize_lock);
  if (VAR_12) {
   FUNC_2("Could not start capture for %s (%d)\n",
     VAR_10->name, VAR_12);
   return VAR_2;
  }
  FUNC_0("Encoder poll started capture\n");
 }


 FUNC_1("Encoder poll\n");
 FUNC_7(VAR_6, &VAR_10->waitq, VAR_7);

 if (VAR_10->q_full.length || VAR_10->q_io.length)
  return VAR_4 | VAR_5;
 if (VAR_11)
  return VAR_3;
 return 0;
}
