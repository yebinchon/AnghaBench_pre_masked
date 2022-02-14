
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct ivtv_stream {int type; int buf_size; int buffers; int id; int q_io; int q_predma; int q_dma; int q_full; int q_free; int sg_handle; int waitq; int qlock; int dma; int name; struct ivtv* itv; struct video_device* vdev; } ;
struct TYPE_3__ {int* kilobytes; } ;
struct ivtv {int* stream_buf_size; TYPE_1__ options; struct ivtv_stream* streams; } ;
struct TYPE_4__ {int dma; scalar_t__ pio; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (struct ivtv_stream*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ivtv *VAR_3, int VAR_4)
{
 struct ivtv_stream *VAR_5 = &VAR_3->streams[VAR_4];
 struct video_device *VAR_6 = VAR_5->vdev;


 FUNC_2(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->vdev = VAR_6;


 VAR_5->itv = VAR_3;
 VAR_5->type = VAR_4;
 VAR_5->name = VAR_2[VAR_4].name;

 if (VAR_2[VAR_4].pio)
  VAR_5->dma = VAR_1;
 else
  VAR_5->dma = VAR_2[VAR_4].dma;
 VAR_5->buf_size = VAR_3->stream_buf_size[VAR_4];
 if (VAR_5->buf_size)
  VAR_5->buffers = (VAR_3->options.kilobytes[VAR_4] * 1024 + VAR_5->buf_size - 1) / VAR_5->buf_size;
 FUNC_3(&VAR_5->qlock);
 FUNC_0(&VAR_5->waitq);
 VAR_5->id = -1;
 VAR_5->sg_handle = VAR_0;
 FUNC_1(&VAR_5->q_free);
 FUNC_1(&VAR_5->q_full);
 FUNC_1(&VAR_5->q_dma);
 FUNC_1(&VAR_5->q_predma);
 FUNC_1(&VAR_5->q_io);
}
