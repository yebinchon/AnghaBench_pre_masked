
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcm {TYPE_1__* sync_ptr; int fd; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct pcm *VAR_1, int VAR_2)
{
   if (VAR_1->sync_ptr)
   {
      VAR_1->sync_ptr->flags = VAR_2;
      if (FUNC_0(VAR_1->fd, VAR_0, VAR_1->sync_ptr) >= 0)
         return 0;
   }
   return -1;
}
