
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int depth; } ;
struct cx18_stream {scalar_t__ type; int name; int waitq; TYPE_2__ q_full; int s_flags; struct cx18* cx; } ;
struct cx18_mdl {scalar_t__ readpos; scalar_t__ bytesused; int m_flags; } ;
struct TYPE_3__ {struct cx18_mdl sliced_mpeg_mdl; } ;
struct cx18 {TYPE_1__ vbi; scalar_t__ dualwatch_jiffies; struct cx18_stream* streams; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int VAR_9 ;
 struct cx18_mdl* FUNC_3 (struct cx18_stream*,TYPE_2__*) ;
 int FUNC_4 (struct cx18*) ;
 int FUNC_5 (struct cx18_mdl*) ;
 int FUNC_6 (struct cx18*,struct cx18_mdl*,scalar_t__) ;
 int FUNC_7 (struct cx18_stream*,struct cx18_mdl*) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *,int *,int ) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 int VAR_11 ;

__attribute__((used)) static struct cx18_mdl *FUNC_16(struct cx18_stream *VAR_12, int VAR_13,
         int *VAR_14)
{
 struct cx18 *VAR_15 = VAR_12->cx;
 struct cx18_stream *VAR_16 = &VAR_15->streams[VAR_1];
 struct cx18_mdl *VAR_17;
 FUNC_1(VAR_11);

 *VAR_14 = 0;
 while (1) {
  if (VAR_12->type == VAR_0) {

   if (FUNC_15(VAR_10, VAR_15->dualwatch_jiffies + FUNC_9(1000))) {
    VAR_15->dualwatch_jiffies = VAR_10;
    FUNC_4(VAR_15);
   }
   if (FUNC_14(VAR_4, &VAR_16->s_flags) &&
       !FUNC_14(VAR_3, &VAR_16->s_flags)) {
    while ((VAR_17 = FUNC_3(VAR_16,
          &VAR_16->q_full))) {

     FUNC_6(VAR_15, VAR_17,
             VAR_16->type);
     FUNC_7(VAR_16, VAR_17);
    }
   }
   VAR_17 = &VAR_15->vbi.sliced_mpeg_mdl;
   if (VAR_17->readpos != VAR_17->bytesused)
    return VAR_17;
  }


  VAR_17 = FUNC_3(VAR_12, &VAR_12->q_full);
  if (VAR_17) {
   if (!FUNC_13(VAR_2,
      &VAR_17->m_flags))
    return VAR_17;
   if (VAR_12->type == VAR_0)

    FUNC_5(VAR_17);
   else {

    FUNC_6(VAR_15, VAR_17, VAR_12->type);
   }
   return VAR_17;
  }


  if (!FUNC_14(VAR_5, &VAR_12->s_flags)) {
   FUNC_0("EOS %s\n", VAR_12->name);
   return ((void*)0);
  }


  if (VAR_13) {
   *VAR_14 = -VAR_6;
   return ((void*)0);
  }


  FUNC_10(&VAR_12->waitq, &VAR_11, VAR_8);


  if (!FUNC_2(&VAR_12->q_full.depth))
   FUNC_11();
  FUNC_8(&VAR_12->waitq, &VAR_11);
  if (FUNC_12(VAR_9)) {

   FUNC_0("User stopped %s\n", VAR_12->name);
   *VAR_14 = -VAR_7;
   return ((void*)0);
  }
 }
}
