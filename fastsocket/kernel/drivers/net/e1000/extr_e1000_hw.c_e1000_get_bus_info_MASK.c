
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int mac_type; void* bus_type; int bus_width; void* bus_speed; int device_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;


 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct e1000_hw *VAR_18)
{
 u32 VAR_19;

 switch (VAR_18->mac_type) {
 case 129:
 case 128:
  VAR_18->bus_type = VAR_13;
  VAR_18->bus_speed = VAR_12;
  VAR_18->bus_width = VAR_17;
  break;
 default:
  VAR_19 = FUNC_0(VAR_5);
  VAR_18->bus_type = (VAR_19 & VAR_3) ?
      VAR_14 : VAR_13;

  if (VAR_18->device_id == VAR_0) {
   VAR_18->bus_speed = (VAR_18->bus_type == VAR_13) ?
       VAR_10 : VAR_7;
  } else if (VAR_18->bus_type == VAR_13) {
   VAR_18->bus_speed = (VAR_19 & VAR_2) ?
       VAR_10 : VAR_9;
  } else {
   switch (VAR_19 & VAR_4) {
   case 130:
    VAR_18->bus_speed = VAR_10;
    break;
   case 132:
    VAR_18->bus_speed = VAR_6;
    break;
   case 131:
    VAR_18->bus_speed = VAR_8;
    break;
   default:
    VAR_18->bus_speed = VAR_11;
    break;
   }
  }
  VAR_18->bus_width = (VAR_19 & VAR_1) ?
      VAR_16 : VAR_15;
  break;
 }
}
