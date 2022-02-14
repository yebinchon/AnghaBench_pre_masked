
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int descriptor_number; scalar_t__ descriptor_magic; int * descriptor_address; int operation; } ;
struct TYPE_5__ {TYPE_1__ info; int Rc; scalar_t__ Req; } ;
struct TYPE_6__ {TYPE_2__ xdi_dma_descriptor_operation; } ;
typedef TYPE_3__ IDI_SYNC_REQ ;
typedef int (* IDI_CALL ) (int *) ;
typedef int ENTITY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1 (IDI_CALL VAR_2, int VAR_3) {
  ENTITY VAR_4;
  IDI_SYNC_REQ* VAR_5 = (IDI_SYNC_REQ*)&VAR_4;

  if (!VAR_2 || (VAR_3 < 0)) {
    return;
  }

  VAR_5->xdi_dma_descriptor_operation.Req = 0;
  VAR_5->xdi_dma_descriptor_operation.Rc = VAR_1;

  VAR_5->xdi_dma_descriptor_operation.info.operation = VAR_0;
  VAR_5->xdi_dma_descriptor_operation.info.descriptor_number = VAR_3;
  VAR_5->xdi_dma_descriptor_operation.info.descriptor_address = ((void*)0);
  VAR_5->xdi_dma_descriptor_operation.info.descriptor_magic = 0;

  (*VAR_2)((ENTITY*)VAR_5);
}
