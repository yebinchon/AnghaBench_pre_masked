
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_2, int VAR_3)
{
 if (VAR_3)
  FUNC_0(VAR_2->dev, VAR_1, ((void*)0), 0, ((void*)0), 0);
 else
  FUNC_0(VAR_2->dev, VAR_0,
          ((void*)0), 0, ((void*)0), 0);
 return 0;
}
