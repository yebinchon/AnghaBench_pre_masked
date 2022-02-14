
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm {scalar_t__ running; scalar_t__ prepared; int fd; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct pcm *VAR_1)
{
   if (FUNC_1(VAR_1->fd, VAR_0) < 0)
   {
      FUNC_0("[TINYALSA]: Cannot stop channel.\n");
      return -1;
   }

   VAR_1->prepared = 0;
   VAR_1->running = 0;
   return 0;
}
