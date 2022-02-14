
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sas_address; } ;
struct sas_rphy {TYPE_1__ identify; } ;
struct _sas_device {int slot; } ;
struct MPT2SAS_ADAPTER {int sas_device_lock; } ;


 int VAR_0 ;
 struct _sas_device* FUNC_0 (struct MPT2SAS_ADAPTER*,int ) ;
 struct MPT2SAS_ADAPTER* FUNC_1 (struct sas_rphy*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct sas_rphy *VAR_1)
{
 struct MPT2SAS_ADAPTER *VAR_2 = FUNC_1(VAR_1);
 struct _sas_device *VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 FUNC_2(&VAR_2->sas_device_lock, VAR_4);
 VAR_3 = FUNC_0(VAR_2,
     VAR_1->identify.sas_address);
 if (VAR_3)
  VAR_5 = VAR_3->slot;
 else
  VAR_5 = -VAR_0;
 FUNC_3(&VAR_2->sas_device_lock, VAR_4);
 return VAR_5;
}
