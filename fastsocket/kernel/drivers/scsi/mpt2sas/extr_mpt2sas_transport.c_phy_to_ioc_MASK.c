
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct sas_phy {TYPE_1__ dev; } ;
struct Scsi_Host {int dummy; } ;


 struct Scsi_Host* FUNC_0 (int ) ;
 void* FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static inline void *
FUNC_2(struct sas_phy *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_0(VAR_0->dev.parent);
 return FUNC_1(VAR_1);
}
