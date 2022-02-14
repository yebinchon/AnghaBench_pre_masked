
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_dma_contig_memory {scalar_t__ size; scalar_t__ dma_handle; scalar_t__ is_userptr; } ;



__attribute__((used)) static void FUNC_0(struct videobuf_dma_contig_memory *VAR_0)
{
 VAR_0->is_userptr = 0;
 VAR_0->dma_handle = 0;
 VAR_0->size = 0;
}
