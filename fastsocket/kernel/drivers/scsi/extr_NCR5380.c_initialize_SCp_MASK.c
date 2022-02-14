
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ length; } ;
struct TYPE_9__ {scalar_t__ this_residual; int * ptr; scalar_t__ buffers_residual; TYPE_3__* buffer; } ;
struct TYPE_10__ {TYPE_1__ SCp; } ;
typedef TYPE_2__ Scsi_Cmnd ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 TYPE_3__* FUNC_2 (TYPE_2__*) ;
 int * FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static __inline__ void FUNC_4(Scsi_Cmnd * VAR_0)
{





 if (FUNC_0(VAR_0)) {
  VAR_0->SCp.buffer = FUNC_2(VAR_0);
  VAR_0->SCp.buffers_residual = FUNC_1(VAR_0) - 1;
  VAR_0->SCp.ptr = FUNC_3(VAR_0->SCp.buffer);
  VAR_0->SCp.this_residual = VAR_0->SCp.buffer->length;
 } else {
  VAR_0->SCp.buffer = ((void*)0);
  VAR_0->SCp.buffers_residual = 0;
  VAR_0->SCp.ptr = ((void*)0);
  VAR_0->SCp.this_residual = 0;
 }
}
