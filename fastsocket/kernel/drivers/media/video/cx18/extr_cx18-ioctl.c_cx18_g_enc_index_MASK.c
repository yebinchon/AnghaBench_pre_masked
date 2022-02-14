
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_enc_idx {scalar_t__ entries; int entries_cap; int reserved; } ;
struct file {int dummy; } ;
struct cx18_stream {int buffers; int bufs_per_mdl; int buf_size; int q_free; int q_full; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct cx18_mdl {scalar_t__ readpos; scalar_t__ bytesused; } ;
struct cx18_enc_idx_entry {int dummy; } ;
struct cx18 {struct cx18_stream* streams; } ;
typedef int s32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct cx18_mdl* FUNC_0 (struct cx18_stream*,int *) ;
 int FUNC_1 (struct cx18_stream*,struct cx18_mdl*,int *) ;
 int FUNC_2 (struct cx18_stream*,struct cx18_mdl*,struct v4l2_enc_idx*) ;
 int FUNC_3 (struct cx18_stream*,struct cx18_mdl*,int *) ;
 int FUNC_4 (struct cx18_stream*) ;
 int FUNC_5 (struct cx18_stream*) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_4, void *VAR_5,
    struct v4l2_enc_idx *VAR_6)
{
 struct cx18 *VAR_7 = ((struct cx18_open_id *)VAR_5)->cx;
 struct cx18_stream *VAR_8 = &VAR_7->streams[VAR_0];
 s32 VAR_9;
 struct cx18_mdl *VAR_10;

 if (!FUNC_4(VAR_8))
  return -VAR_2;


 VAR_9 = VAR_8->buffers -
     VAR_8->bufs_per_mdl * VAR_1;
 if (VAR_9 <= 0)
  VAR_9 = 1;
 VAR_9 = VAR_9 * VAR_8->buf_size / sizeof(struct cx18_enc_idx_entry);


 VAR_6->entries = 0;
 VAR_6->entries_cap = VAR_9;
 FUNC_6(VAR_6->reserved, 0, sizeof(VAR_6->reserved));


 do {
  VAR_10 = FUNC_0(VAR_8, &VAR_8->q_full);
  if (VAR_10 == ((void*)0))
   break;


  FUNC_2(VAR_8, VAR_10, VAR_6);
  if (VAR_10->readpos < VAR_10->bytesused) {

   FUNC_3(VAR_8, VAR_10, &VAR_8->q_full);
   break;
  }


  FUNC_1(VAR_8, VAR_10, &VAR_8->q_free);

 } while (VAR_6->entries < VAR_3);


 FUNC_5(VAR_8);
 return 0;
}
