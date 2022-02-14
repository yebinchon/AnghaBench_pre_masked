
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {struct audio* private_data; } ;
struct audio {int pcm_buf_count; int lock; scalar_t__ pcm_feedback; int * read_data; int read_phys; TYPE_1__* in; int * data; int phys; scalar_t__ opened; int * audplay; } ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 int FUNC_0 (struct audio*) ;
 int FUNC_1 (struct audio*) ;
 int FUNC_2 (struct audio*) ;
 int FUNC_3 (int *,int,int *,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_1, struct file *VAR_2)
{
 struct audio *VAR_3 = VAR_2->private_data;

 FUNC_4("audqcelp_release()\n");

 FUNC_6(&VAR_3->lock);
 FUNC_0(VAR_3);
 FUNC_1(VAR_3);
 FUNC_2(VAR_3);
 FUNC_5(VAR_3->audplay);
 VAR_3->audplay = ((void*)0);
 VAR_3->opened = 0;
 if (VAR_3->data)
  FUNC_3(((void*)0), VAR_0, VAR_3->data, VAR_3->phys);
 VAR_3->data = ((void*)0);
 if (VAR_3->read_data) {
  FUNC_3(((void*)0),
     VAR_3->in[0].size * VAR_3->pcm_buf_count,
     VAR_3->read_data, VAR_3->read_phys);
  VAR_3->read_data = ((void*)0);
 }
 VAR_3->pcm_feedback = 0;
 FUNC_7(&VAR_3->lock);
 return 0;
}
