
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_stream {scalar_t__ type; int s_flags; int name; } ;
struct ivtv {int cur_pio_stream; int dma_waitq; struct ivtv_stream* streams; int i_flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ivtv_stream*) ;
 int FUNC_3 (struct ivtv*,int ,int,int ,int ,int) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ivtv *VAR_8)
{
 struct ivtv_stream *VAR_9;

 if (VAR_8->cur_pio_stream < 0 || VAR_8->cur_pio_stream >= VAR_7) {
  VAR_8->cur_pio_stream = -1;
  return;
 }
 VAR_9 = &VAR_8->streams[VAR_8->cur_pio_stream];
 FUNC_0("ENC PIO COMPLETE %s\n", VAR_9->name);
 FUNC_1(VAR_5, &VAR_8->i_flags);
 VAR_8->cur_pio_stream = -1;
 FUNC_2(VAR_9);
 if (VAR_9->type == VAR_1)
  FUNC_3(VAR_8, VAR_0, 3, 0, 0, 0);
 else if (VAR_9->type == VAR_4)
  FUNC_3(VAR_8, VAR_0, 3, 0, 0, 1);
 else if (VAR_9->type == VAR_2)
  FUNC_3(VAR_8, VAR_0, 3, 0, 0, 2);
 FUNC_1(VAR_5, &VAR_8->i_flags);
 if (FUNC_4(VAR_6, &VAR_9->s_flags)) {
  VAR_9 = &VAR_8->streams[VAR_3];
  FUNC_2(VAR_9);
 }
 FUNC_5(&VAR_8->dma_waitq);
}
