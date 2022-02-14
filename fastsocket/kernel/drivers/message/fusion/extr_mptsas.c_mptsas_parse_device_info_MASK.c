
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sas_identify {int device_type; int target_port_protocols; int initiator_port_protocols; int phy_identifier; int sas_address; } ;
struct mptsas_devinfo {int device_info; int phy_id; int sas_address; } ;





 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void
FUNC_0(struct sas_identify *VAR_17,
  struct mptsas_devinfo *VAR_18)
{
 u16 VAR_19;

 VAR_17->sas_address = VAR_18->sas_address;
 VAR_17->phy_identifier = VAR_18->phy_id;





 VAR_19 = VAR_18->device_info & 0x78;
 VAR_17->initiator_port_protocols = 0;
 if (VAR_19 & VAR_5)
  VAR_17->initiator_port_protocols |= VAR_15;
 if (VAR_19 & VAR_7)
  VAR_17->initiator_port_protocols |= VAR_16;
 if (VAR_19 & VAR_3)
  VAR_17->initiator_port_protocols |= VAR_14;
 if (VAR_19 & VAR_2)
  VAR_17->initiator_port_protocols |= VAR_13;





 VAR_19 = VAR_18->device_info & 0x780;
 VAR_17->target_port_protocols = 0;
 if (VAR_19 & VAR_6)
  VAR_17->target_port_protocols |= VAR_15;
 if (VAR_19 & VAR_8)
  VAR_17->target_port_protocols |= VAR_16;
 if (VAR_19 & VAR_4)
  VAR_17->target_port_protocols |= VAR_14;
 if (VAR_19 & VAR_1)
  VAR_17->target_port_protocols |= VAR_13;




 switch (VAR_18->device_info &
   VAR_0) {
 case 128:
  VAR_17->device_type = VAR_12;
  break;
 case 130:
  VAR_17->device_type = VAR_10;
  break;
 case 131:
  VAR_17->device_type = VAR_9;
  break;
 case 129:
  VAR_17->device_type = VAR_11;
  break;
 }
}
