
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct _sas_device {int list; } ;
struct MPT3SAS_ADAPTER {int sas_device_lock; scalar_t__ shost_recovery; } ;


 int FUNC_0 (struct MPT3SAS_ADAPTER*,struct _sas_device*) ;
 struct _sas_device* FUNC_1 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct MPT3SAS_ADAPTER *VAR_0, u16 VAR_1)
{
 struct _sas_device *VAR_2;
 unsigned long VAR_3;

 if (VAR_0->shost_recovery)
  return;

 FUNC_3(&VAR_0->sas_device_lock, VAR_3);
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_2(&VAR_2->list);
 FUNC_4(&VAR_0->sas_device_lock, VAR_3);
 if (VAR_2)
  FUNC_0(VAR_0, VAR_2);
}
