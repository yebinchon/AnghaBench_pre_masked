
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_xferi {unsigned int frames; int result; void* buf; } ;
struct pcm {int flags; int running; int underruns; scalar_t__ prepared; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ,struct snd_xferi*) ;
 int FUNC_2 (struct pcm*) ;

__attribute__((used)) static int FUNC_3(struct pcm *VAR_8, const void *VAR_9, unsigned int VAR_10)
{
   struct snd_xferi VAR_11;

   if (VAR_8->flags & VAR_3)
      return -VAR_0;




   if (VAR_10 > VAR_2)
      return -VAR_0;

   VAR_11.buf = (void*)VAR_9;
   VAR_11.frames = VAR_10;
   VAR_11.result = 0;

restart:
   if (!VAR_8->running)
   {
      int VAR_12 = FUNC_2(VAR_8);
      if (VAR_12)
         return VAR_12;
      if (FUNC_1(VAR_8->fd, VAR_5, &VAR_11))
      {
         FUNC_0("[TINYALSA]: Cannot write initial data.\n");
         return -1;
      }
      VAR_8->running = 1;
      return 0;
   }

   if (FUNC_1(VAR_8->fd, VAR_5, &VAR_11))
   {
      VAR_8->prepared = 0;
      VAR_8->running = 0;
      if (VAR_7 == VAR_1)
      {



         VAR_8->underruns++;
         if (VAR_8->flags & VAR_4)
            return -VAR_1;
         goto restart;
      }




      return -1;
   }

   return VAR_11.result;
}
