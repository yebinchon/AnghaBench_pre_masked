
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct dvb_usb_adapter {int dev; int fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int ,char*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_3)
{
 u8 VAR_4[255] = { 0 };

 FUNC_2(VAR_3->dev,VAR_2,((void*)0),0,VAR_4,20,0);
 VAR_4[10] = '\0';
 FUNC_0("firmware says: %s ",VAR_4);

 FUNC_2(VAR_3->dev,VAR_1,((void*)0),0,VAR_4,20,0);
 VAR_4[10] = '\0';
 FUNC_0("%s ",VAR_4);

 FUNC_2(VAR_3->dev,VAR_0,((void*)0),0,VAR_4,20,0);
 VAR_4[10] = '\0';
 FUNC_0("v%s\n",VAR_4);




 VAR_3->fe = FUNC_1(VAR_3->dev);

 return 0;
}
