
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct flexcop_usb {int udev; } ;
typedef int flexcop_usb_request_t ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,int ,int,int,int) ;
 int FUNC_2 (int*,int,int (*) (char*,int,int ,int,int,int)) ;
 int FUNC_3 (int ,int,int ,int,int,int,int*,int,int) ;

__attribute__((used)) static int FUNC_4(struct flexcop_usb *VAR_11,
  flexcop_usb_request_t VAR_12, u8 VAR_13, u16 VAR_14,
  u8 *VAR_15, u32 VAR_16)
{
 u8 VAR_17 = VAR_10;
 u16 VAR_18;
 int VAR_19, VAR_20, VAR_21;
 VAR_18 = VAR_13 << 8;

 switch (VAR_12) {
 case 129:
  VAR_19 = VAR_3;
  VAR_17 |= VAR_8;
  VAR_20 = VAR_0;
  break;
 case 128:
  VAR_18 |= VAR_15[0];
  VAR_17 |= VAR_9;
  VAR_19 = VAR_4;
  VAR_20 = VAR_1;
  break;
 case 130:
  VAR_17 |= VAR_9;
  VAR_19 = VAR_2;
  VAR_20 = VAR_1;
  break;
 default:
  FUNC_0("unsupported request for v8_mem_req %x.\n", VAR_12);
  return -VAR_5;
 }
 FUNC_1("v8mem: %02x %02x %04x %04x, len: %d\n", VAR_17, VAR_12,
   VAR_14, VAR_18, VAR_16);

 VAR_21 = FUNC_3(VAR_11->udev, VAR_20,
   VAR_12,
   VAR_17,
   VAR_14,
   VAR_18,
   VAR_15,
   VAR_16,
   VAR_19 * VAR_7);

 FUNC_2(VAR_15, VAR_21, FUNC_1);
 return VAR_21 == VAR_16 ? 0 : -VAR_6;
}
