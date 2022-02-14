
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _sas_device {int list; } ;
struct MPT3SAS_ADAPTER {int sas_device_lock; } ;


 int FUNC_0 (struct _sas_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct MPT3SAS_ADAPTER *VAR_0,
 struct _sas_device *VAR_1)
{
 unsigned long VAR_2;

 if (!VAR_1)
  return;

 FUNC_2(&VAR_0->sas_device_lock, VAR_2);
 FUNC_1(&VAR_1->list);
 FUNC_0(VAR_1);
 FUNC_3(&VAR_0->sas_device_lock, VAR_2);
}
