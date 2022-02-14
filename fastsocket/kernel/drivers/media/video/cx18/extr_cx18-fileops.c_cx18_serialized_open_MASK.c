
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct cx18_open_id* private_data; } ;
struct cx18_stream {scalar_t__ type; int name; struct cx18* cx; } ;
struct cx18_open_id {scalar_t__ type; scalar_t__ open_id; int prio; struct cx18* cx; } ;
struct cx18 {int i_flags; int ana_capturing; int open_id; int prio; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct cx18*) ;
 int FUNC_4 (struct cx18*,int ,int ) ;
 scalar_t__ FUNC_5 (struct cx18_open_id*,scalar_t__) ;
 int FUNC_6 (struct cx18*) ;
 int FUNC_7 (struct cx18_stream*) ;
 int FUNC_8 (struct cx18*) ;
 int FUNC_9 (struct cx18_open_id*) ;
 struct cx18_open_id* FUNC_10 (int,int ) ;
 int VAR_5 ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;
 int VAR_6 ;
 int FUNC_13 (int *,int *) ;

__attribute__((used)) static int FUNC_14(struct cx18_stream *VAR_7, struct file *VAR_8)
{
 struct cx18 *VAR_9 = VAR_7->cx;
 struct cx18_open_id *VAR_10;

 FUNC_0("open %s\n", VAR_7->name);


 VAR_10 = FUNC_10(sizeof(struct cx18_open_id), VAR_4);
 if (((void*)0) == VAR_10) {
  FUNC_1("nomem on v4l2 open\n");
  return -VAR_3;
 }
 VAR_10->cx = VAR_9;
 VAR_10->type = VAR_7->type;
 FUNC_13(&VAR_9->prio, &VAR_10->prio);

 VAR_10->open_id = VAR_9->open_id++;
 VAR_8->private_data = VAR_10;

 if (VAR_10->type == VAR_0) {

  if (FUNC_5(VAR_10, VAR_10->type)) {

   FUNC_9(VAR_10);
   return -VAR_2;
  }

  if (!FUNC_12(VAR_1, &VAR_9->i_flags)) {
   if (FUNC_2(&VAR_9->ana_capturing) > 0) {


    FUNC_7(VAR_7);
    FUNC_9(VAR_10);
    return -VAR_2;
   }
  }


  FUNC_11(VAR_1, &VAR_9->i_flags);

  FUNC_6(VAR_9);

  FUNC_4(VAR_9, VAR_6, VAR_5);

  FUNC_3(VAR_9);

  FUNC_8(VAR_9);
 }
 return 0;
}
