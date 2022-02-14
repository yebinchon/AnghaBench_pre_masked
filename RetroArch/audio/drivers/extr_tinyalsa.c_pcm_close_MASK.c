
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm {int flags; int fd; scalar_t__ buffer_size; scalar_t__ running; scalar_t__ prepared; int mmap_buffer; } ;


 int VAR_0 ;
 struct pcm VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pcm*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct pcm*,scalar_t__) ;
 int FUNC_4 (struct pcm*) ;
 int FUNC_5 (struct pcm*) ;

__attribute__((used)) static int FUNC_6(struct pcm *VAR_2)
{
   if (VAR_2 == &VAR_1)
      return 0;

   FUNC_4(VAR_2);

   if (VAR_2->flags & VAR_0)
   {
      FUNC_5(VAR_2);
      FUNC_2(VAR_2->mmap_buffer, FUNC_3(VAR_2, VAR_2->buffer_size));
   }

   if (VAR_2->fd >= 0)
      FUNC_0(VAR_2->fd);
   VAR_2->prepared = 0;
   VAR_2->running = 0;
   VAR_2->buffer_size = 0;
   VAR_2->fd = -1;
   FUNC_1(VAR_2);
   return 0;
}
