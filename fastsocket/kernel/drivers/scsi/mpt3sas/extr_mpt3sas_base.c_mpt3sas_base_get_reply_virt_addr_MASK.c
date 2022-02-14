
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct MPT3SAS_ADAPTER {void* reply; scalar_t__ reply_dma; } ;



void *
FUNC_0(struct MPT3SAS_ADAPTER *VAR_0, u32 VAR_1)
{
 if (!VAR_1)
  return ((void*)0);
 return VAR_0->reply + (VAR_1 - (u32)VAR_0->reply_dma);
}
