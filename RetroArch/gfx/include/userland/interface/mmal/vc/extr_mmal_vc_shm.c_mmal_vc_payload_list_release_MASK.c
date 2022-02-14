
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
struct TYPE_4__ {scalar_t__ in_use; scalar_t__ mem; scalar_t__ vc_handle; scalar_t__ handle; } ;
typedef TYPE_1__ MMAL_VC_PAYLOAD_ELEM_T ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(MMAL_VC_PAYLOAD_ELEM_T *VAR_1)
{
   FUNC_0(&VAR_0.lock);
   VAR_1->handle = VAR_1->vc_handle = 0;
   VAR_1->mem = 0;
   VAR_1->in_use = 0;
   FUNC_1(&VAR_0.lock);
}
