
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* ptr; scalar_t__ this_residual; scalar_t__ buffers_residual; TYPE_2__* buffer; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;
struct TYPE_5__ {scalar_t__ length; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_2 (struct scsi_cmnd*) ;
 TYPE_2__* FUNC_3 (struct scsi_cmnd*) ;

__attribute__((used)) static __inline__ void FUNC_4(struct scsi_cmnd *VAR_0)
{





    if (FUNC_1(VAR_0)) {
 VAR_0->SCp.buffer = FUNC_3(VAR_0);
 VAR_0->SCp.buffers_residual = FUNC_2(VAR_0) - 1;
 VAR_0->SCp.ptr = (char *) FUNC_0(VAR_0->SCp.buffer);
 VAR_0->SCp.this_residual = VAR_0->SCp.buffer->length;





    } else {
 VAR_0->SCp.buffer = ((void*)0);
 VAR_0->SCp.buffers_residual = 0;
 VAR_0->SCp.ptr = ((void*)0);
 VAR_0->SCp.this_residual = 0;
    }

}
