
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* parent; } ;
struct sas_rphy {TYPE_2__ dev; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {int parent; } ;


 struct Scsi_Host* FUNC_0 (int ) ;
 void* FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static inline void *
FUNC_2(struct sas_rphy *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_0(VAR_0->dev.parent->parent);
 return FUNC_1(VAR_1);
}
