
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_mmap_status {int avail_min; } ;
struct TYPE_4__ {struct snd_pcm_mmap_status control; } ;
struct TYPE_3__ {struct snd_pcm_mmap_status status; } ;
struct snd_pcm_sync_ptr {TYPE_2__ c; TYPE_1__ s; } ;
struct snd_pcm_mmap_control {int avail_min; } ;
struct pcm {struct snd_pcm_mmap_status* mmap_control; struct snd_pcm_sync_ptr* sync_ptr; struct snd_pcm_mmap_status* mmap_status; int fd; } ;


 int VAR_0 ;
 struct snd_pcm_mmap_status* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int *,size_t,int,int,int ,int ) ;
 int FUNC_2 (struct snd_pcm_mmap_status*,int) ;
 int FUNC_3 (struct pcm*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct pcm *VAR_9)
{
   int VAR_10;
   if (VAR_9->sync_ptr)
      return 0;

   VAR_10 = FUNC_4(VAR_8);

   VAR_9->mmap_status = (struct snd_pcm_mmap_status*)
      FUNC_1(((void*)0), VAR_10, VAR_4, VAR_2 | VAR_3,
            VAR_9->fd, VAR_7);
   if (VAR_9->mmap_status == VAR_1)
      VAR_9->mmap_status = ((void*)0);
   if (!VAR_9->mmap_status)
      goto mmap_error;

   VAR_9->mmap_control = (struct snd_pcm_mmap_control*)
      FUNC_1(((void*)0), (size_t)VAR_10, VAR_4 | VAR_5,
            VAR_2 | VAR_3, VAR_9->fd, VAR_6);
   if (VAR_9->mmap_control == VAR_1)
      VAR_9->mmap_control = ((void*)0);
   if (!VAR_9->mmap_control)
   {
      FUNC_2(VAR_9->mmap_status, VAR_10);
      VAR_9->mmap_status = ((void*)0);
      goto mmap_error;
   }
   VAR_9->mmap_control->avail_min = 1;

   return 0;

mmap_error:

   VAR_9->sync_ptr = (struct snd_pcm_sync_ptr*)
      FUNC_0(1, sizeof(*VAR_9->sync_ptr));
   if (!VAR_9->sync_ptr)
      return -VAR_0;
   VAR_9->mmap_status = &VAR_9->sync_ptr->s.status;
   VAR_9->mmap_control = &VAR_9->sync_ptr->c.control;
   VAR_9->mmap_control->avail_min = 1;
   FUNC_3(VAR_9, 0);

   return 0;
}
