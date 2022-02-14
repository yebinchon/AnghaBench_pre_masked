
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_usb_adapter {int * fe; TYPE_1__* dev; } ;
struct dib0700_state {int fw_use_new_i2c_api; int disable_streaming_master_mode; } ;
struct TYPE_2__ {int i2c_adap; struct dib0700_state* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int) ;
 int * FUNC_1 (int ,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_6)
{
 struct dib0700_state *VAR_7 = VAR_6->dev->priv;


 VAR_7->fw_use_new_i2c_api = 1;

 VAR_7->disable_streaming_master_mode = 1;


 FUNC_0(VAR_6->dev, VAR_2, VAR_3, 0);
 FUNC_2(30);
 FUNC_0(VAR_6->dev, VAR_2, VAR_3, 1);
 FUNC_2(30);


 FUNC_0(VAR_6->dev, VAR_1, VAR_3, 1);
 FUNC_2(30);
 FUNC_0(VAR_6->dev, VAR_1, VAR_3, 0);
 FUNC_2(30);
 FUNC_0(VAR_6->dev, VAR_1, VAR_3, 1);
 FUNC_2(30);

 VAR_6->fe = FUNC_1(VAR_5,
         &VAR_4,
         &VAR_6->dev->i2c_adap);

 return VAR_6->fe == ((void*)0) ? -VAR_0 : 0;
}
