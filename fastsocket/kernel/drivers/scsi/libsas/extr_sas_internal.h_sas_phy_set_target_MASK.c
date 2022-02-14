
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ target_port_protocols; int device_type; } ;
struct sas_phy {TYPE_1__ identify; } ;
struct domain_device {scalar_t__ tproto; int dev_type; } ;
struct asd_sas_phy {struct sas_phy* phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct domain_device*) ;

__attribute__((used)) static inline void FUNC_1(struct asd_sas_phy *VAR_2, struct domain_device *VAR_3)
{
 struct sas_phy *VAR_4 = VAR_2->phy;

 if (VAR_3) {
  if (FUNC_0(VAR_3))
   VAR_4->identify.device_type = VAR_0;
  else
   VAR_4->identify.device_type = VAR_3->dev_type;
  VAR_4->identify.target_port_protocols = VAR_3->tproto;
 } else {
  VAR_4->identify.device_type = VAR_1;
  VAR_4->identify.target_port_protocols = 0;
 }
}
