
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int sas_address; } ;
struct sas_rphy {TYPE_1__ identify; } ;
struct _sas_device {int enclosure_logical_id; } ;
struct MPT2SAS_ADAPTER {int sas_device_lock; } ;


 int VAR_0 ;
 struct _sas_device* FUNC_0 (struct MPT2SAS_ADAPTER*,int ) ;
 struct MPT2SAS_ADAPTER* FUNC_1 (struct sas_rphy*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct sas_rphy *VAR_1, u64 *VAR_2)
{
 struct MPT2SAS_ADAPTER *VAR_3 = FUNC_1(VAR_1);
 struct _sas_device *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_2(&VAR_3->sas_device_lock, VAR_5);
 VAR_4 = FUNC_0(VAR_3,
     VAR_1->identify.sas_address);
 if (VAR_4) {
  *VAR_2 = VAR_4->enclosure_logical_id;
  VAR_6 = 0;
 } else {
  *VAR_2 = 0;
  VAR_6 = -VAR_0;
 }
 FUNC_3(&VAR_3->sas_device_lock, VAR_5);
 return VAR_6;
}
