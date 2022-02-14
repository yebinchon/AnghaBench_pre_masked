
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct TYPE_4__ {int lock; } ;
struct cx18_stream {int type; int buf_size; int bufs_per_mdl; int mdl_size; int id; int out_work_order; TYPE_2__ q_idle; TYPE_2__ q_full; TYPE_2__ q_busy; TYPE_2__ q_free; int waitq; int buf_pool; int buffers; int dma; int handle; int name; struct cx18* cx; int * dvb; struct video_device* video_dev; } ;
struct cx18 {int* stream_buf_size; int * stream_buffers; struct cx18_stream* streams; } ;
struct TYPE_3__ {int dma; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cx18_stream*,int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct cx18 *VAR_3, int VAR_4)
{
 struct cx18_stream *VAR_5 = &VAR_3->streams[VAR_4];
 struct video_device *VAR_6 = VAR_5->video_dev;


 FUNC_4(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->video_dev = VAR_6;


 VAR_5->dvb = ((void*)0);
 VAR_5->cx = VAR_3;
 VAR_5->type = VAR_4;
 VAR_5->name = VAR_2[VAR_4].name;
 VAR_5->handle = VAR_0;

 VAR_5->dma = VAR_2[VAR_4].dma;
 VAR_5->buffers = VAR_3->stream_buffers[VAR_4];
 VAR_5->buf_size = VAR_3->stream_buf_size[VAR_4];
 FUNC_0(&VAR_5->buf_pool);
 VAR_5->bufs_per_mdl = 1;
 VAR_5->mdl_size = VAR_5->buf_size * VAR_5->bufs_per_mdl;

 FUNC_3(&VAR_5->waitq);
 VAR_5->id = -1;
 FUNC_5(&VAR_5->q_free.lock);
 FUNC_2(&VAR_5->q_free);
 FUNC_5(&VAR_5->q_busy.lock);
 FUNC_2(&VAR_5->q_busy);
 FUNC_5(&VAR_5->q_full.lock);
 FUNC_2(&VAR_5->q_full);
 FUNC_5(&VAR_5->q_idle.lock);
 FUNC_2(&VAR_5->q_idle);

 FUNC_1(&VAR_5->out_work_order, VAR_1);
}
