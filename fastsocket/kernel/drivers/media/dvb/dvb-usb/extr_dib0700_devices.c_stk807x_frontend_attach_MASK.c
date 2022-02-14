
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_usb_adapter {int * fe; TYPE_1__* dev; } ;
struct TYPE_3__ {int i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int) ;
 int VAR_8 ;
 int FUNC_2 (int *,int,int,int) ;
 int * VAR_9 ;
 int * FUNC_3 (int ,int *,int,int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_adapter *VAR_10)
{
 FUNC_1(VAR_10->dev, VAR_4, VAR_7, 1);
 FUNC_4(10);
 FUNC_1(VAR_10->dev, VAR_6, VAR_7, 1);
 FUNC_1(VAR_10->dev, VAR_3, VAR_7, 1);
 FUNC_1(VAR_10->dev, VAR_5, VAR_7, 1);

 FUNC_1(VAR_10->dev, VAR_2, VAR_7, 0);

 FUNC_0(VAR_10->dev, 72, 1);

 FUNC_4(10);
 FUNC_1(VAR_10->dev, VAR_2, VAR_7, 1);
 FUNC_4(10);
 FUNC_1(VAR_10->dev, VAR_1, VAR_7, 1);

 FUNC_2(&VAR_10->dev->i2c_adap, 1, 18,
    0x80);

 VAR_10->fe = FUNC_3(VAR_8, &VAR_10->dev->i2c_adap, 0x80,
         &VAR_9[0]);

 return VAR_10->fe == ((void*)0) ? -VAR_0 : 0;
}
