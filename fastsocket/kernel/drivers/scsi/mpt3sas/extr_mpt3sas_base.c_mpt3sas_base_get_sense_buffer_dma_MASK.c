
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct MPT3SAS_ADAPTER {scalar_t__ sense_dma; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__le32
FUNC_1(struct MPT3SAS_ADAPTER *VAR_1, u16 VAR_2)
{
 return FUNC_0(VAR_1->sense_dma + ((VAR_2 - 1) *
     VAR_0));
}
