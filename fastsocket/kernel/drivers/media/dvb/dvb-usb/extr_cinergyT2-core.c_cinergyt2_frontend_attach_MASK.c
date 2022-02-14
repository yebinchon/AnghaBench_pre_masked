
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_adapter {int dev; int fe; } ;
typedef int state ;
typedef int query ;


 char VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int,char*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_2)
{
 char VAR_3[] = { VAR_0 };
 char VAR_4[3];
 int VAR_5;

 VAR_2->fe = FUNC_0(VAR_2->dev);

 VAR_5 = FUNC_2(VAR_2->dev, VAR_3, sizeof(VAR_3), VAR_4,
    sizeof(VAR_4), 0);
 if (VAR_5 < 0) {
  FUNC_1("cinergyt2_power_ctrl() Failed to retrieve sleep "
   "state info\n");
 }


 VAR_1 = VAR_2->dev;

 return 0;
}
