
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


typedef scalar_t__ dword ;
struct TYPE_14__ {scalar_t__* user; } ;
struct TYPE_10__ {int descriptor_number; scalar_t__ descriptor_magic; int operation; int * descriptor_address; } ;
struct TYPE_11__ {TYPE_2__ info; int Rc; scalar_t__ Req; } ;
struct TYPE_13__ {TYPE_3__ xdi_dma_descriptor_operation; } ;
struct TYPE_12__ {TYPE_1__* adapter; } ;
struct TYPE_9__ {scalar_t__ Id; int (* request ) (TYPE_6__*) ;} ;
typedef TYPE_4__ PLCI ;
typedef TYPE_5__ IDI_SYNC_REQ ;
typedef TYPE_6__ ENTITY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_3 (PLCI *VAR_4, dword *VAR_5) {
  ENTITY VAR_6;
  IDI_SYNC_REQ* VAR_7 = (IDI_SYNC_REQ*)&VAR_6;

  if (!(VAR_3 & VAR_0)) {
    return (-1);
  }

  VAR_7->xdi_dma_descriptor_operation.Req = 0;
  VAR_7->xdi_dma_descriptor_operation.Rc = VAR_2;

  VAR_7->xdi_dma_descriptor_operation.info.operation = VAR_1;
  VAR_7->xdi_dma_descriptor_operation.info.descriptor_number = -1;
  VAR_7->xdi_dma_descriptor_operation.info.descriptor_address = ((void*)0);
  VAR_7->xdi_dma_descriptor_operation.info.descriptor_magic = 0;

  VAR_6.user[0] = VAR_4->adapter->Id - 1;
  VAR_4->adapter->request((ENTITY*)VAR_7);

  if (!VAR_7->xdi_dma_descriptor_operation.info.operation &&
      (VAR_7->xdi_dma_descriptor_operation.info.descriptor_number >= 0) &&
      VAR_7->xdi_dma_descriptor_operation.info.descriptor_magic) {
    *VAR_5 = VAR_7->xdi_dma_descriptor_operation.info.descriptor_magic;
    FUNC_0(3,FUNC_1("dma_alloc, a:%d (%d-%08x)",
         VAR_4->adapter->Id,
         VAR_7->xdi_dma_descriptor_operation.info.descriptor_number,
         *VAR_5));
    return (VAR_7->xdi_dma_descriptor_operation.info.descriptor_number);
  } else {
    FUNC_0(1,FUNC_1("dma_alloc failed"));
    return (-1);
  }
}
