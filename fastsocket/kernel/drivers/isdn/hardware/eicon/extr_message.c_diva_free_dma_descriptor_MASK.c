
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__* user; } ;
struct TYPE_10__ {int descriptor_number; int operation; scalar_t__ descriptor_magic; int * descriptor_address; } ;
struct TYPE_11__ {TYPE_2__ info; int Rc; scalar_t__ Req; } ;
struct TYPE_13__ {TYPE_3__ xdi_dma_descriptor_operation; } ;
struct TYPE_12__ {TYPE_1__* adapter; } ;
struct TYPE_9__ {int (* request ) (TYPE_6__*) ;scalar_t__ Id; } ;
typedef TYPE_4__ PLCI ;
typedef TYPE_5__ IDI_SYNC_REQ ;
typedef TYPE_6__ ENTITY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_3 (PLCI *VAR_2, int VAR_3) {
  ENTITY VAR_4;
  IDI_SYNC_REQ* VAR_5 = (IDI_SYNC_REQ*)&VAR_4;

  if (VAR_3 < 0) {
    return;
  }

  VAR_5->xdi_dma_descriptor_operation.Req = 0;
  VAR_5->xdi_dma_descriptor_operation.Rc = VAR_1;

  VAR_5->xdi_dma_descriptor_operation.info.operation = VAR_0;
  VAR_5->xdi_dma_descriptor_operation.info.descriptor_number = VAR_3;
  VAR_5->xdi_dma_descriptor_operation.info.descriptor_address = ((void*)0);
  VAR_5->xdi_dma_descriptor_operation.info.descriptor_magic = 0;

  VAR_4.user[0] = VAR_2->adapter->Id - 1;
  VAR_2->adapter->request((ENTITY*)VAR_5);

  if (!VAR_5->xdi_dma_descriptor_operation.info.operation) {
    FUNC_0(1,FUNC_1("dma_free(%d)", VAR_3));
  } else {
    FUNC_0(1,FUNC_1("dma_free failed (%d)", VAR_3));
  }
}
