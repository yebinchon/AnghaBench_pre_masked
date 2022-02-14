
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct MPT2SAS_ADAPTER {scalar_t__ sense; } ;


 int VAR_0 ;

void *
FUNC_0(struct MPT2SAS_ADAPTER *VAR_1, u16 VAR_2)
{
 return (void *)(VAR_1->sense + ((VAR_2 - 1) * VAR_0));
}
