
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tc35815_local {scalar_t__ fd_buf; scalar_t__ fd_buf_dma; } ;
typedef scalar_t__ dma_addr_t ;



__attribute__((used)) static inline dma_addr_t FUNC_0(struct tc35815_local *VAR_0, void *VAR_1)
{
 return VAR_0->fd_buf_dma + ((u8 *)VAR_1 - (u8 *)VAR_0->fd_buf);
}
