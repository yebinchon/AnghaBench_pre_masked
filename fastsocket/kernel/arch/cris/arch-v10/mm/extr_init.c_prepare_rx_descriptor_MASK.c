
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etrax_dma_descr {int sw_len; scalar_t__ buf; } ;


 int FUNC_0 (void*,int) ;

void
FUNC_1(struct etrax_dma_descr *VAR_0)
{
 FUNC_0((void *)VAR_0->buf, VAR_0->sw_len ? VAR_0->sw_len : 65536);
}
