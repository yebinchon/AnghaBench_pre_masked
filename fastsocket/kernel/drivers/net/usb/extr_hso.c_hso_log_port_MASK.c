
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hso_device {int port_spec; TYPE_2__* interface; } ;
struct TYPE_8__ {TYPE_1__* net; } ;
struct TYPE_7__ {int minor; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {char* name; } ;
 int VAR_0 ;



 TYPE_4__* FUNC_0 (struct hso_device*) ;
 TYPE_3__* FUNC_1 (struct hso_device*) ;
 int FUNC_2 (int *,char*,char*,char*) ;
 int FUNC_3 (char*,char*,char*,...) ;
 char* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct hso_device *VAR_2)
{
 char *VAR_3;
 char VAR_4[20];

 switch (VAR_2->port_spec & VAR_0) {
 case 135:
  VAR_3 = "Control";
  break;
 case 137:
  VAR_3 = "Application";
  break;
 case 132:
  VAR_3 = "GPS";
  break;
 case 131:
  VAR_3 = "GPS control";
  break;
 case 136:
  VAR_3 = "Application2";
  break;
 case 128:
  VAR_3 = "PCSC";
  break;
 case 134:
  VAR_3 = "Diagnostic";
  break;
 case 133:
  VAR_3 = "Diagnostic2";
  break;
 case 130:
  VAR_3 = "Modem";
  break;
 case 129:
  VAR_3 = "Network";
  break;
 default:
  VAR_3 = "Unknown";
  break;
 }
 if ((VAR_2->port_spec & VAR_0) == 129) {
  FUNC_3(VAR_4, "%s", FUNC_0(VAR_2)->net->name);
 } else
  FUNC_3(VAR_4, "/dev/%s%d", VAR_1,
   FUNC_1(VAR_2)->minor);

 FUNC_2(&VAR_2->interface->dev, "HSO: Found %s port %s\n",
  VAR_3, VAR_4);
}
