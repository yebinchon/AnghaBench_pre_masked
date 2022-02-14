
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char bRequest; } ;
struct iforce {int bus; char* edata; int expect_packet; int wait; TYPE_2__* ctrl; int usbdev; TYPE_1__ cr; } ;
struct TYPE_5__ {int status; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct iforce*,int ,char*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int,int ) ;

int FUNC_6(struct iforce *VAR_4, char *VAR_5)
{
 switch (VAR_4->bus) {

 case 128: {
  FUNC_0("iforce_get_id_packet: iforce->bus = USB!");

  }
  break;

 case 129:
  FUNC_1("iforce_get_id_packet: iforce->bus = SERIO!");

  break;

 default:
  FUNC_1("iforce_get_id_packet: iforce->bus = %d", VAR_4->bus);
  break;
 }

 return -(VAR_4->edata[0] != VAR_5[0]);
}
