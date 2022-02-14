
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ length; } ;
struct TYPE_10__ {scalar_t__ this_residual; int * ptr; scalar_t__ buffers_residual; TYPE_3__* buffer; } ;
struct TYPE_11__ {TYPE_1__ SCp; } ;
typedef TYPE_2__ Scsi_Cmnd ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 TYPE_3__* FUNC_3 (TYPE_2__*) ;
 int * FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static inline void FUNC_5(Scsi_Cmnd *VAR_0)
{





 if (FUNC_1(VAR_0)) {
  VAR_0->SCp.buffer = FUNC_3(VAR_0);
  VAR_0->SCp.buffers_residual = FUNC_2(VAR_0) - 1;
  VAR_0->SCp.ptr = FUNC_4(VAR_0->SCp.buffer);
  VAR_0->SCp.this_residual = VAR_0->SCp.buffer->length;



  FUNC_0(VAR_0);
 } else {
  VAR_0->SCp.buffer = ((void*)0);
  VAR_0->SCp.buffers_residual = 0;
  VAR_0->SCp.ptr = ((void*)0);
  VAR_0->SCp.this_residual = 0;
 }
}
