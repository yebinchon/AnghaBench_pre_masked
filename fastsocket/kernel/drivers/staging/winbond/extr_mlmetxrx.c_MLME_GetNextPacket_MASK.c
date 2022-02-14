
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int DataType; scalar_t__ len; int pMMPDU; } ;
struct wbsoft_priv {TYPE_1__ sMlmeFrame; } ;
struct wb35_descriptor {size_t InternalUsed; size_t buffer_start_index; size_t buffer_number; int Type; int buffer_total_size; scalar_t__* buffer_size; int * buffer_address; } ;


 size_t VAR_0 ;

void FUNC_0(struct wbsoft_priv *VAR_1, struct wb35_descriptor *VAR_2)
{
 VAR_2->InternalUsed = VAR_2->buffer_start_index + VAR_2->buffer_number;
 VAR_2->InternalUsed %= VAR_0;
 VAR_2->buffer_address[VAR_2->InternalUsed] = VAR_1->sMlmeFrame.pMMPDU;
 VAR_2->buffer_size[VAR_2->InternalUsed] = VAR_1->sMlmeFrame.len;
 VAR_2->buffer_total_size += VAR_1->sMlmeFrame.len;
 VAR_2->buffer_number++;
 VAR_2->Type = VAR_1->sMlmeFrame.DataType;
}
