
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ length; } ;
struct TYPE_6__ {unsigned long this_residual; int ptr; TYPE_3__* buffer; scalar_t__ buffers_residual; } ;
struct TYPE_7__ {TYPE_1__ SCp; } ;
typedef TYPE_2__ Scsi_Cmnd ;


 int FUNC_0 (char*,int,unsigned long,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 unsigned long FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(Scsi_Cmnd *VAR_0)
{
 unsigned long VAR_1;





 for (VAR_1 = FUNC_4(VAR_0->SCp.ptr + VAR_0->SCp.this_residual - 1) + 1;
      VAR_0->SCp.buffers_residual &&
      FUNC_4(FUNC_3(&VAR_0->SCp.buffer[1])) == VAR_1;) {
  FUNC_0("VTOP(%p) == %08lx -> merging\n",
      FUNC_1(FUNC_2(&VAR_0->SCp.buffer[1])), VAR_1);



  ++VAR_0->SCp.buffer;
  --VAR_0->SCp.buffers_residual;
  VAR_0->SCp.this_residual += VAR_0->SCp.buffer->length;
  VAR_1 += VAR_0->SCp.buffer->length;
 }





}
