
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_3__* fe; TYPE_1__* dev; } ;
struct dvb_tuner_ops {int get_bandwidth; int set_bandwidth; int get_frequency; int set_frequency; } ;
struct TYPE_5__ {void* set_voltage; struct dvb_tuner_ops tuner_ops; } ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,TYPE_3__*,int *,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_1 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_18)
{
 struct dvb_tuner_ops *VAR_19 = ((void*)0);

 if (VAR_2 & 4) {
  VAR_18->fe = FUNC_0(VAR_16, &VAR_9,
    &VAR_18->dev->i2c_adap, 0);
  if (VAR_18->fe != ((void*)0)) {
   if (FUNC_0(VAR_11, VAR_18->fe,
     &VAR_8,
     &VAR_18->dev->i2c_adap)) {
    VAR_19 = &VAR_18->fe->ops.tuner_ops;
    VAR_19->set_frequency = VAR_15;
    VAR_19->get_frequency = VAR_13;
    VAR_19->set_bandwidth = VAR_14;
    VAR_19->get_bandwidth = VAR_12;
    VAR_18->fe->ops.set_voltage = VAR_10;
    FUNC_1("Attached STV0900+STB6100!\n");
    return 0;
   }
  }
 }

 if (VAR_2 & 2) {
  VAR_18->fe = FUNC_0(VAR_16, &VAR_6,
    &VAR_18->dev->i2c_adap, 0);
  if (VAR_18->fe != ((void*)0)) {
   if (FUNC_0(VAR_17, VAR_18->fe,
     &VAR_7,
     &VAR_18->dev->i2c_adap)) {
    VAR_18->fe->ops.set_voltage = VAR_10;
    FUNC_1("Attached STV0900+STV6110A!\n");
    return 0;
   }
  }
 }

 if (VAR_2 & 1) {
  VAR_18->fe = FUNC_0(VAR_1, &VAR_4,
    &VAR_18->dev->i2c_adap);
  if (VAR_18->fe != ((void*)0)) {
   VAR_18->fe->ops.set_voltage = VAR_10;
   FUNC_1("Attached cx24116!\n");
   return 0;
  }
 }

 VAR_18->fe = FUNC_0(VAR_3, &VAR_5,
   &VAR_18->dev->i2c_adap);
 if (VAR_18->fe != ((void*)0)) {
  VAR_18->fe->ops.set_voltage = VAR_10;
  FUNC_1("Attached DS3000!\n");
  return 0;
 }

 return -VAR_0;
}
