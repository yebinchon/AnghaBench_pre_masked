
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int vendor; int device; } ;
struct usb_ftdi {int function; scalar_t__ enumerated; TYPE_1__ platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct usb_ftdi*,int,int ) ;
 int FUNC_1 (struct usb_ftdi*,int,int ,int*) ;
 int FUNC_2 (struct usb_ftdi*,int) ;

__attribute__((used)) static int FUNC_3(struct usb_ftdi *VAR_9)
{
        int VAR_10;
        u32 VAR_11;
        int VAR_12 = 0;
        u8 VAR_13;
        int VAR_14 = 0;
        int VAR_15 = 0;
        int VAR_16 = 0;
        int VAR_17 = 0;
        VAR_9->function = 0;
        for (VAR_13 = 0; (VAR_13 < 4); VAR_13++) {
                u32 VAR_18 = 0;
                u32 VAR_19 = 0;
                int VAR_20 = 0;
                VAR_14 = VAR_13 << 8;
                VAR_10 = FUNC_1(VAR_9, VAR_14 | VAR_12, 0,
                        &VAR_11);
                if (VAR_10)
                        return VAR_10;
                VAR_18 = VAR_11 & 0xFFFF;
                VAR_19 = (VAR_11 >> 16) & 0xFFFF;
                if ((VAR_18 == VAR_8) && (VAR_19 == 0xc861)) {
                        VAR_20 = FUNC_0(VAR_9, VAR_13, 0);
                        VAR_16 += 1;
                } else if ((VAR_18 == VAR_7) && (VAR_19 == 0x0035))
                        {
                        VAR_20 = FUNC_0(VAR_9, VAR_13, 0);
                        VAR_16 += 1;
                } else if ((VAR_18 == VAR_3) && (VAR_19 == 0x5237)) {
                        VAR_20 = FUNC_0(VAR_9, VAR_13, 0);
                        VAR_16 += 1;
                } else if ((VAR_18 == VAR_5) && (VAR_19 == 0x5802))
                        {
                        VAR_20 = FUNC_0(VAR_9, VAR_13, 0);
                        VAR_16 += 1;
                } else if (VAR_18 == VAR_4 && VAR_19 == 0x740c) {
                        VAR_20 = FUNC_0(VAR_9, VAR_13,
                                VAR_1);
                        VAR_16 += 1;
                } else if (VAR_18 == VAR_6 && VAR_19 == 0xa0f8) {
                        VAR_20 = FUNC_0(VAR_9, VAR_13,
                                VAR_2);
                        VAR_16 += 1;
                } else if (0 == VAR_11) {
                } else
                        VAR_17 += 1;
                if (VAR_20 > VAR_15) {
                        VAR_15 = VAR_20;
                        VAR_9->function = VAR_13 + 1;
                        VAR_9->platform_data.vendor = VAR_18;
                        VAR_9->platform_data.device = VAR_19;
                }
        }
        if (VAR_9->function > 0) {
                VAR_10 = FUNC_2(VAR_9,
                        VAR_9->function - 1);
                if (VAR_10)
                        return VAR_10;
                return 0;
        } else if (VAR_16 > 0) {
                return -VAR_0;
        } else if (VAR_17 > 0) {
                return -VAR_0;
        } else {
                VAR_9->enumerated = 0;
                return -VAR_0;
        }
}
