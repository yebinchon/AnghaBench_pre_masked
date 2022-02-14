
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device_type; int target_port_protocols; int initiator_port_protocols; int sas_address; } ;
struct sas_rphy {TYPE_1__ identify; } ;
struct domain_device {int dev_type; int tproto; int iproto; int sas_addr; } ;




 int FUNC_0 (int ) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



__attribute__((used)) static inline void FUNC_1(struct domain_device *VAR_4,
        struct sas_rphy *VAR_5)
{
 VAR_5->identify.sas_address = FUNC_0(VAR_4->sas_addr);
 VAR_5->identify.initiator_port_protocols = VAR_4->iproto;
 VAR_5->identify.target_port_protocols = VAR_4->tproto;
 switch (VAR_4->dev_type) {
 case 129:

 case 130:
 case 128:
  VAR_5->identify.device_type = VAR_1;
  break;
 case 132:
  VAR_5->identify.device_type = VAR_0;
  break;
 case 131:
  VAR_5->identify.device_type = VAR_2;
  break;
 default:
  VAR_5->identify.device_type = VAR_3;
  break;
 }
}
