
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sema; int process_lock; int lock; scalar_t__ mmal; } ;
typedef TYPE_1__ BRCMJPEG_T ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(BRCMJPEG_T *VAR_0)
{
   if (VAR_0->mmal)
      FUNC_1(VAR_0->mmal);
   FUNC_2(&VAR_0->lock);
   FUNC_2(&VAR_0->process_lock);
   FUNC_3(&VAR_0->sema);
   FUNC_0(VAR_0);
}
