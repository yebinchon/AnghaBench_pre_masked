
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm {int fd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct pcm *VAR_1, int VAR_2)
{
   if (FUNC_0(VAR_1->fd, VAR_0, VAR_2) < 0)
      return -1;

   return 0;
}
