
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct MPT2SAS_ADAPTER {TYPE_1__* scsi_lookup; } ;
struct TYPE_2__ {int direct_io; } ;



__attribute__((used)) static inline u8
FUNC_0(struct MPT2SAS_ADAPTER *VAR_0, u16 VAR_1)
{
 return VAR_0->scsi_lookup[VAR_1 - 1].direct_io;
}
