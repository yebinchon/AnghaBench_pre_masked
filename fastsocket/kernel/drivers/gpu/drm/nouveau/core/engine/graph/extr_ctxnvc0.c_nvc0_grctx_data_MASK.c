
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvc0_grctx {int* buffer; size_t buffer_nr; int addr; TYPE_1__* data; } ;
struct TYPE_2__ {int size; int align; int access; } ;



void
FUNC_0(struct nvc0_grctx *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 VAR_0->buffer[VAR_0->buffer_nr] = VAR_0->addr;
 VAR_0->buffer[VAR_0->buffer_nr] += (VAR_2 - 1);
 VAR_0->buffer[VAR_0->buffer_nr] &= ~(VAR_2 - 1);
 VAR_0->addr = VAR_0->buffer[VAR_0->buffer_nr++] + VAR_1;

 VAR_0->data->size = VAR_1;
 VAR_0->data->align = VAR_2;
 VAR_0->data->access = VAR_3;
 VAR_0->data++;
}
