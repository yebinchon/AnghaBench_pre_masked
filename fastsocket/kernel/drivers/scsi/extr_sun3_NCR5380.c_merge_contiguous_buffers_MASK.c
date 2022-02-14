
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long this_residual; int ptr; TYPE_2__* buffer; scalar_t__ buffers_residual; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;
struct TYPE_4__ {scalar_t__ length; } ;


 int FUNC_0 (char*,int,unsigned long,...) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 unsigned long FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct scsi_cmnd *VAR_0)
{
    unsigned long VAR_1;





    for (VAR_1 = FUNC_2(VAR_0->SCp.ptr + VAR_0->SCp.this_residual - 1) + 1;
  VAR_0->SCp.buffers_residual &&
  FUNC_2(FUNC_1(&(VAR_0->SCp.buffer[1]))) == VAR_1; ) {

 FUNC_0("VTOP(%p) == %08lx -> merging\n",
     FUNC_1(&(VAR_0->SCp.buffer[1])), VAR_1);



 ++VAR_0->SCp.buffer;
 --VAR_0->SCp.buffers_residual;
 VAR_0->SCp.this_residual += VAR_0->SCp.buffer->length;
 VAR_1 += VAR_0->SCp.buffer->length;
    }





}
