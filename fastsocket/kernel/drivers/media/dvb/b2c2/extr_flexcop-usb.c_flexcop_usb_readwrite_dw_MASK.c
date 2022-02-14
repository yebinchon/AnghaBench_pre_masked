
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct flexcop_usb {int udev; } ;
struct flexcop_device {struct flexcop_usb* bus_specific; } ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (char*,char*,int,int ) ;
 int FUNC_2 (int ,int ,int,int,int,int ,int *,int,int) ;

__attribute__((used)) static int FUNC_3(struct flexcop_device *VAR_10, u16 VAR_11, u32 *VAR_12, u8 VAR_13)
{
 struct flexcop_usb *VAR_14 = VAR_10->bus_specific;
 u8 VAR_15 = VAR_13 ? VAR_2 : VAR_3;
 u8 VAR_16 = (VAR_13 ? VAR_7 : VAR_8) | VAR_9;
 u8 VAR_17 = FUNC_0(VAR_11) |
  (VAR_13 ? 0x80 : 0);

 int VAR_18 = FUNC_2(VAR_14->udev,
   VAR_13 ? VAR_0 : VAR_1,
   VAR_15,
   VAR_16,
   VAR_17,
   0,
   VAR_12,
   sizeof(u32),
   VAR_4 * VAR_6);

 if (VAR_18 != sizeof(u32)) {
  FUNC_1("error while %s dword from %d (%d).", VAR_13 ? "reading" :
    "writing", VAR_17, VAR_11);
  return -VAR_5;
 }
 return 0;
}
