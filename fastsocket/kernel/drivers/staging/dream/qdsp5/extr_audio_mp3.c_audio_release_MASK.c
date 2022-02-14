
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {struct audio* private_data; } ;
struct audio {int out_dma_sz; int pcm_buf_count; int lock; scalar_t__ pcm_feedback; int * read_data; int read_phys; TYPE_1__* in; int * data; int phys; scalar_t__ reserved; scalar_t__ opened; int * audplay; } ;
struct TYPE_2__ {int size; } ;


 int FUNC_0 (struct audio*) ;
 int FUNC_1 (struct audio*) ;
 int FUNC_2 (struct audio*) ;
 int FUNC_3 (int *,int,int *,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_0, struct file *VAR_1)
{
 struct audio *VAR_2 = VAR_1->private_data;

 FUNC_4("audio_release()\n");

 FUNC_6(&VAR_2->lock);
 FUNC_0(VAR_2);
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
 FUNC_5(VAR_2->audplay);
 VAR_2->audplay = ((void*)0);
 VAR_2->opened = 0;
 VAR_2->reserved = 0;
 FUNC_3(((void*)0), VAR_2->out_dma_sz, VAR_2->data, VAR_2->phys);
 VAR_2->data = ((void*)0);
 if (VAR_2->read_data != ((void*)0)) {
  FUNC_3(((void*)0),
      VAR_2->in[0].size * VAR_2->pcm_buf_count,
      VAR_2->read_data, VAR_2->read_phys);
  VAR_2->read_data = ((void*)0);
 }
 VAR_2->pcm_feedback = 0;
 FUNC_7(&VAR_2->lock);
 return 0;
}
