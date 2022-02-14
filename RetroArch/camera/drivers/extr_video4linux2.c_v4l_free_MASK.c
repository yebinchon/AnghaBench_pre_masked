
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int n_buffers; scalar_t__ fd; int scaler; struct TYPE_5__* buffer_output; TYPE_1__* buffers; } ;
typedef TYPE_2__ video4linux_t ;
struct TYPE_4__ {int length; int start; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
   video4linux_t *VAR_1 = (video4linux_t*)VAR_0;

   unsigned VAR_2;
   for (VAR_2 = 0; VAR_2 < VAR_1->n_buffers; VAR_2++)
      if (FUNC_3(VAR_1->buffers[VAR_2].start, VAR_1->buffers[VAR_2].length) == -1)
         FUNC_0("[V4L2]: munmap failed.\n");

   if (VAR_1->fd >= 0)
      FUNC_1(VAR_1->fd);

   FUNC_2(VAR_1->buffer_output);
   FUNC_4(&VAR_1->scaler);
   FUNC_2(VAR_1);
}
