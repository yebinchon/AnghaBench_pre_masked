
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktcdvd_device {int dev; int kobj_wqueue; int kobj_stat; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct pktcdvd_device *VAR_1)
{
 FUNC_1(VAR_1->kobj_stat);
 FUNC_1(VAR_1->kobj_wqueue);
 if (VAR_0)
  FUNC_0(VAR_1->dev);
}
