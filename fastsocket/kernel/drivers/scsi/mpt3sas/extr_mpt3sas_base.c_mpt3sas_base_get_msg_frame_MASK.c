
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct MPT3SAS_ADAPTER {int request_sz; scalar_t__ request; } ;



void *
FUNC_0(struct MPT3SAS_ADAPTER *VAR_0, u16 VAR_1)
{
 return (void *)(VAR_0->request + (VAR_1 * VAR_0->request_sz));
}
