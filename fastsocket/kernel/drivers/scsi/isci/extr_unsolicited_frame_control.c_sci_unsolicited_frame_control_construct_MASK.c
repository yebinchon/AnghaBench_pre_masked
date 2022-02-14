
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int physical_address; int * array; } ;
struct TYPE_5__ {int physical_address; int* array; } ;
struct TYPE_4__ {struct sci_unsolicited_frame* array; } ;
struct sci_unsolicited_frame_control {TYPE_3__ headers; TYPE_2__ address_table; TYPE_1__ buffers; scalar_t__ get; } ;
struct sci_unsolicited_frame {int state; int * header; void* buffer; } ;
struct isci_host {int ufi_dma; void* ufi_buf; struct sci_unsolicited_frame_control uf_control; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(struct isci_host *VAR_5)
{
 struct sci_unsolicited_frame_control *VAR_6 = &VAR_5->uf_control;
 struct sci_unsolicited_frame *VAR_7;
 dma_addr_t VAR_8 = VAR_5->ufi_dma;
 void *VAR_9 = VAR_5->ufi_buf;
 int VAR_10;
 VAR_6->headers.physical_address = VAR_8 + VAR_0;
 VAR_6->headers.array = VAR_9 + VAR_0;
 VAR_6->address_table.physical_address = VAR_8 + VAR_0 + VAR_1;
 VAR_6->address_table.array = VAR_9 + VAR_0 + VAR_1;
 VAR_6->get = 0;
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_7 = &VAR_6->buffers.array[VAR_10];

  VAR_6->address_table.array[VAR_10] = VAR_8;

  VAR_7->buffer = VAR_9;
  VAR_7->header = &VAR_6->headers.array[VAR_10];
  VAR_7->state = VAR_4;






  VAR_9 += VAR_3;
  VAR_8 += VAR_3;
 }
}
