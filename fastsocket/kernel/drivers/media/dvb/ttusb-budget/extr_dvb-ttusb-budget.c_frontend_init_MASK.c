
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct ttusb {TYPE_8__* fe; int adapter; TYPE_4__* dev; int i2c_adap; int revision; } ;
struct TYPE_12__ {int set_params; int init; } ;
struct TYPE_13__ {TYPE_1__ tuner_ops; void* set_voltage; } ;
struct TYPE_17__ {TYPE_2__ ops; } ;
struct TYPE_16__ {int inittab; } ;
struct TYPE_14__ {int idProduct; int idVendor; } ;
struct TYPE_15__ {TYPE_3__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ,...) ;
 int FUNC_1 (TYPE_8__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_8__*) ;
 TYPE_5__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 TYPE_5__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct ttusb*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_5__ VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static void FUNC_6(struct ttusb* VAR_23)
{
 switch(FUNC_3(VAR_23->dev->descriptor.idProduct)) {
 case 0x1003:

  VAR_23->fe = FUNC_0(VAR_16, &VAR_2, &VAR_23->i2c_adap);
  if (VAR_23->fe != ((void*)0)) {
   VAR_23->fe->ops.tuner_ops.set_params = VAR_14;

   if(VAR_23->revision == VAR_0) {
    VAR_2.inittab = VAR_1;
    FUNC_0(VAR_10, VAR_23->fe, &VAR_23->i2c_adap, 0, 0);
   } else {
    VAR_23->fe->ops.set_voltage = VAR_21;
   }
   break;
  }


  VAR_23->fe = FUNC_0(VAR_18, &VAR_19, &VAR_23->i2c_adap);
  if (VAR_23->fe != ((void*)0)) {
   VAR_23->fe->ops.tuner_ops.set_params = VAR_20;
   VAR_23->fe->ops.set_voltage = VAR_21;
   break;
  }
  break;

 case 0x1004:
  VAR_23->fe = FUNC_0(VAR_22, &VAR_3, &VAR_23->i2c_adap, FUNC_5(VAR_23));
  if (VAR_23->fe != ((void*)0)) {
   VAR_23->fe->ops.tuner_ops.set_params = VAR_4;
   break;
  }

  VAR_23->fe = FUNC_0(VAR_15, &VAR_8, &VAR_23->i2c_adap);
  if (VAR_23->fe != ((void*)0)) {
   VAR_23->fe->ops.tuner_ops.set_params = VAR_9;
   break;
  }
  break;

 case 0x1005:

  VAR_23->fe = FUNC_0(VAR_7, &VAR_5, &VAR_23->i2c_adap);
  if (VAR_23->fe != ((void*)0)) {
   VAR_23->fe->ops.tuner_ops.set_params = VAR_6;
   break;
  }


  VAR_23->fe = FUNC_0(VAR_17, &VAR_11, &VAR_23->i2c_adap);
  if (VAR_23->fe != ((void*)0)) {
   VAR_23->fe->ops.tuner_ops.init = VAR_12;
   VAR_23->fe->ops.tuner_ops.set_params = VAR_13;
   break;
  }
  break;
 }

 if (VAR_23->fe == ((void*)0)) {
  FUNC_4("dvb-ttusb-budget: A frontend driver was not found for device [%04x:%04x]\n",
         FUNC_3(VAR_23->dev->descriptor.idVendor),
         FUNC_3(VAR_23->dev->descriptor.idProduct));
 } else {
  if (FUNC_2(&VAR_23->adapter, VAR_23->fe)) {
   FUNC_4("dvb-ttusb-budget: Frontend registration failed!\n");
   FUNC_1(VAR_23->fe);
   VAR_23->fe = ((void*)0);
  }
 }
}
