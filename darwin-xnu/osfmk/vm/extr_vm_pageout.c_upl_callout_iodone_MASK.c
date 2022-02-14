
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* upl_t ;
struct upl_io_completion {void (* io_done ) (void*,int) ;void* io_context; int io_error; } ;
struct TYPE_3__ {struct upl_io_completion* upl_iodone; } ;


 int FUNC_0 (void (*) (void*,int)) ;
 void FUNC_1 (void*,int) ;

void FUNC_2(upl_t VAR_0)
{
        struct upl_io_completion *VAR_1 = VAR_0->upl_iodone;

 if (VAR_1) {
         void (*VAR_2)(void *, int) = VAR_1->io_done;

  FUNC_0(VAR_1->io_done);

  (*VAR_2)(VAR_1->io_context, VAR_1->io_error);
 }
}
