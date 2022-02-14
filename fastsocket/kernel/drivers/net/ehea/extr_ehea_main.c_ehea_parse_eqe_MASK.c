
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct ehea_port {int full_duplex; TYPE_1__* netdev; int phy_link; int port_speed; } ;
struct ehea_adapter {int dummy; } ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (int ,int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,...) ;
 struct ehea_port* FUNC_2 (struct ehea_adapter*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct ehea_port*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct ehea_port*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_11(struct ehea_adapter *VAR_8, u64 VAR_9)
{
 int VAR_10;
 u8 VAR_11;
 u8 VAR_12;
 struct ehea_port *VAR_13;

 VAR_11 = FUNC_0(VAR_2, VAR_9);
 VAR_12 = FUNC_0(VAR_5, VAR_9);
 VAR_13 = FUNC_2(VAR_8, VAR_12);

 switch (VAR_11) {
 case 129:

  if (!VAR_13) {
   FUNC_1("unknown portnum %x", VAR_12);
   break;
  }

  if (FUNC_0(VAR_6, VAR_9)) {
   if (!FUNC_6(VAR_13->netdev)) {
    VAR_10 = FUNC_4(VAR_13);
    if (VAR_10) {
     FUNC_1("failed resensing port "
         "attributes");
     break;
    }

    if (FUNC_8(VAR_13))
     FUNC_3("%s: Logical port up: %dMbps "
        "%s Duplex",
        VAR_13->netdev->name,
        VAR_13->port_speed,
        VAR_13->full_duplex ==
        1 ? "Full" : "Half");

    FUNC_7(VAR_13->netdev);
    FUNC_10(VAR_13->netdev);
   }
  } else
   if (FUNC_6(VAR_13->netdev)) {
    if (FUNC_8(VAR_13))
     FUNC_3("%s: Logical port down",
        VAR_13->netdev->name);
    FUNC_5(VAR_13->netdev);
    FUNC_9(VAR_13->netdev);
   }

  if (FUNC_0(VAR_3, VAR_9)) {
   VAR_13->phy_link = VAR_1;
   if (FUNC_8(VAR_13))
    FUNC_3("%s: Physical port up",
       VAR_13->netdev->name);
   if (VAR_7)
    FUNC_7(VAR_13->netdev);
  } else {
   VAR_13->phy_link = VAR_0;
   if (FUNC_8(VAR_13))
    FUNC_3("%s: Physical port down",
       VAR_13->netdev->name);
   if (VAR_7)
    FUNC_5(VAR_13->netdev);
  }

  if (FUNC_0(VAR_4, VAR_9))
   FUNC_3("External switch port is primary port");
  else
   FUNC_3("External switch port is backup port");

  break;
 case 130:
  FUNC_1("Adapter malfunction");
  break;
 case 128:
  FUNC_3("Port malfunction: Device: %s", VAR_13->netdev->name);
  FUNC_5(VAR_13->netdev);
  FUNC_9(VAR_13->netdev);
  break;
 default:
  FUNC_1("unknown event code %x, eqe=0x%llX", VAR_11, VAR_9);
  break;
 }
}
