
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int dummy; } ;
struct fib {TYPE_2__* dev; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int options; } ;
struct TYPE_4__ {TYPE_1__ adapter_info; scalar_t__ needs_dac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fib*,struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_1(struct fib * VAR_2, struct scsi_cmnd * VAR_3)
{
 if ((sizeof(dma_addr_t) > 4) && VAR_2->dev->needs_dac &&
     (VAR_2->dev->adapter_info.options & VAR_0))
  return VAR_1;
 return FUNC_0(VAR_2, VAR_3);
}
