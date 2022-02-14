
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct flexcop_usb {int udev; } ;
struct flexcop_i2c_adapter {int port; TYPE_1__* fc; } ;
typedef int flexcop_usb_request_t ;
typedef int flexcop_usb_i2c_function_t ;
struct TYPE_2__ {struct flexcop_usb* bus_specific; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int VAR_7 ;
 int FUNC_0 (char*,int,int,int ,int,int,int,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int,int ,int,int,int,int*,int,int) ;

__attribute__((used)) static int FUNC_3(struct flexcop_i2c_adapter *VAR_8,
  flexcop_usb_request_t VAR_9, flexcop_usb_i2c_function_t VAR_10,
  u8 VAR_11, u8 VAR_12, u8 *VAR_13, u8 VAR_14)
{
 struct flexcop_usb *VAR_15 = VAR_8->fc->bus_specific;
 u16 VAR_16, VAR_17;
 int VAR_18,VAR_19,VAR_20;
 u8 VAR_21 = VAR_7;

 switch (VAR_10) {
 case 128:
 case 132:
 case 129:

 case 133:
  VAR_19 = VAR_1;
  VAR_18 = 2;
  VAR_21 |= VAR_6;
  break;
 case 131:
 case 130:
  VAR_19 = VAR_0;
  VAR_18 = 2;
  VAR_21 |= VAR_5;
  break;
 default:
  FUNC_1("unsupported function for i2c_req %x\n", VAR_10);
  return -VAR_2;
 }
 VAR_16 = (VAR_10 << 8) | (VAR_8->port << 4);
 VAR_17 = (VAR_11 << 8 ) | VAR_12;

 FUNC_0("i2c %2d: %02x %02x %02x %02x %02x %02x\n",
   VAR_10, VAR_21, VAR_9,
   VAR_16 & 0xff, VAR_16 >> 8,
   VAR_17 & 0xff, VAR_17 >> 8);

 VAR_20 = FUNC_2(VAR_15->udev,VAR_19,
   VAR_9,
   VAR_21,
   VAR_16,
   VAR_17,
   VAR_13,
   VAR_14,
   VAR_18 * VAR_4);
 return VAR_20 == VAR_14 ? 0 : -VAR_3;
}
