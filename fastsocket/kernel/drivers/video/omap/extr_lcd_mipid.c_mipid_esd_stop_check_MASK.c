
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipid_device {int esd_work; int esd_wq; int * esd_check; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct mipid_device *VAR_0)
{
 if (VAR_0->esd_check != ((void*)0))
  FUNC_0(VAR_0->esd_wq, &VAR_0->esd_work);
}
