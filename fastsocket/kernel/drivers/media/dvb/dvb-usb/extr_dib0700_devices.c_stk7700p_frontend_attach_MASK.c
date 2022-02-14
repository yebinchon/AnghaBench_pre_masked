
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_usb_adapter {int * fe; TYPE_1__* dev; } ;
struct dib0700_state {int* mt2060_if1; int is_dib7000pc; } ;
struct TYPE_3__ {int i2c_adap; struct dib0700_state* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int *) ;
 void* FUNC_3 (int ,int *,int,int *) ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_adapter *VAR_10)
{
 struct dib0700_state *VAR_11 = VAR_10->dev->priv;


 FUNC_1(VAR_10->dev, VAR_2, VAR_5, 0);
 FUNC_1(VAR_10->dev, VAR_3, VAR_5, 0); FUNC_4(50);

 FUNC_1(VAR_10->dev, VAR_3, VAR_5, 1); FUNC_4(10);
 FUNC_1(VAR_10->dev, VAR_4, VAR_5, 1);

 FUNC_1(VAR_10->dev, VAR_2, VAR_5, 0); FUNC_4(10);
 FUNC_0(VAR_10->dev, 72, 1);
 FUNC_1(VAR_10->dev, VAR_2, VAR_5, 1); FUNC_4(100);

 FUNC_1(VAR_10->dev, VAR_1, VAR_5, 1);

 VAR_11->mt2060_if1[0] = 1220;

 if (FUNC_2(&VAR_10->dev->i2c_adap)) {
  VAR_10->fe = FUNC_3(VAR_7, &VAR_10->dev->i2c_adap, 18, &VAR_9);
  VAR_11->is_dib7000pc = 1;
 } else
  VAR_10->fe = FUNC_3(VAR_6, &VAR_10->dev->i2c_adap, 18, &VAR_8);

 return VAR_10->fe == ((void*)0) ? -VAR_0 : 0;
}
