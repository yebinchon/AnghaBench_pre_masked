
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx18_stream {int mdl_base_idx; int buffers; scalar_t__ type; int id; int waitq; int q_full; int q_free; int name; } ;
struct cx18_mdl_ack {int id; int data_used; } ;
struct cx18_mdl {int bytesused; } ;
struct cx18_mailbox {int* args; int request; } ;
struct cx18_in_work_order {int flags; struct cx18_mdl_ack* mdl_ack; struct cx18_mailbox mb; } ;
struct cx18 {int dma_waitq; int * pcm_announce_callback; } ;


 int FUNC_0 (char*,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (struct cx18_stream*,struct cx18_mdl*,int *) ;
 struct cx18_stream* FUNC_3 (struct cx18*,int) ;
 int FUNC_4 (struct cx18*,struct cx18_stream*,struct cx18_mdl*) ;
 int FUNC_5 (struct cx18_stream*,struct cx18_mdl*) ;
 struct cx18_mdl* FUNC_6 (struct cx18_stream*,int,int ) ;
 int FUNC_7 (struct cx18_stream*) ;
 int FUNC_8 (struct cx18*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct cx18 *VAR_4, struct cx18_in_work_order *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;
 struct cx18_mailbox *VAR_9;
 struct cx18_mdl_ack *VAR_10;
 struct cx18_stream *VAR_11;
 struct cx18_mdl *VAR_12;
 int VAR_13;

 VAR_9 = &VAR_5->mb;
 VAR_6 = VAR_9->args[0];
 VAR_11 = FUNC_3(VAR_4, VAR_6);

 if (VAR_11 == ((void*)0)) {
  FUNC_1("Got DMA done notification for unknown/inactive"
     " handle %d, %s mailbox seq no %d\n", VAR_6,
     (VAR_5->flags & VAR_3) ?
     "stale" : "good", VAR_9->request);
  return;
 }

 VAR_7 = VAR_9->args[2];
 VAR_10 = VAR_5->mdl_ack;
 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++, VAR_10++) {
  VAR_8 = VAR_10->id;
  if ((VAR_5->flags & VAR_3) &&
      !(VAR_8 >= VAR_11->mdl_base_idx &&
        VAR_8 < (VAR_11->mdl_base_idx + VAR_11->buffers))) {
   FUNC_1("Fell behind! Ignoring stale mailbox with "
      " inconsistent data. Lost MDL for mailbox "
      "seq no %d\n", VAR_9->request);
   break;
  }
  VAR_12 = FUNC_6(VAR_11, VAR_8, VAR_10->data_used);

  FUNC_0("DMA DONE for %s (MDL %d)\n", VAR_11->name, VAR_8);
  if (VAR_12 == ((void*)0)) {
   FUNC_1("Could not find MDL %d for stream %s\n",
      VAR_8, VAR_11->name);
   continue;
  }

  FUNC_0("%s recv bytesused = %d\n",
      VAR_11->name, VAR_12->bytesused);

  if (VAR_11->type == VAR_2) {
   FUNC_5(VAR_11, VAR_12);
   FUNC_2(VAR_11, VAR_12, &VAR_11->q_free);
  } else if (VAR_11->type == VAR_1) {

   if (VAR_4->pcm_announce_callback != ((void*)0)) {
    FUNC_4(VAR_4, VAR_11, VAR_12);
    FUNC_2(VAR_11, VAR_12, &VAR_11->q_free);
   } else {
    FUNC_2(VAR_11, VAR_12, &VAR_11->q_full);
   }
  } else {
   FUNC_2(VAR_11, VAR_12, &VAR_11->q_full);
   if (VAR_11->type == VAR_0)
    FUNC_8(VAR_4);
  }
 }

 FUNC_7(VAR_11);

 FUNC_9(&VAR_4->dma_waitq);
 if (VAR_11->id != -1)
  FUNC_9(&VAR_11->waitq);
}
