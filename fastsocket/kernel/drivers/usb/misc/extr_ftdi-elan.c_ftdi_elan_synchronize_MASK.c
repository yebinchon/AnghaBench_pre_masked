
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_ftdi {int bulk_in_last; char* bulk_in_buffer; TYPE_1__* udev; int bulk_in_size; int bulk_in_endpointAddr; scalar_t__ bulk_in_left; } ;
typedef int diag ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct usb_ftdi*) ;
 int FUNC_2 (struct usb_ftdi*) ;
 int FUNC_3 (struct usb_ftdi*) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (TYPE_1__*,int ,char*,int ,int*,int) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_7(struct usb_ftdi *VAR_2)
{
        int VAR_3;
        int VAR_4 = 10;
        int VAR_5 = 5;
        int VAR_6 = 10;
        int VAR_7 = 0;
        VAR_3 = FUNC_1(VAR_2);
        if (VAR_3)
                return VAR_3;
        VAR_2->bulk_in_left = 0;
        VAR_2->bulk_in_last = -1;
        while (VAR_4-- > 0) {
                int VAR_8;
                int VAR_9;
                VAR_3 = FUNC_2(VAR_2);
                if (VAR_3)
                        return VAR_3;
                VAR_3 = FUNC_1(VAR_2);
                if (VAR_3)
                        return VAR_3;
              reset:VAR_3 = FUNC_3(VAR_2);
                if (VAR_3)
                        return VAR_3;
                VAR_8 = 100;
                VAR_9 = 10;
              read:{
                        int VAR_10 = 0;
                        VAR_3 = FUNC_5(VAR_2->udev,
                                FUNC_6(VAR_2->udev,
                                VAR_2->bulk_in_endpointAddr),
                                VAR_2->bulk_in_buffer, VAR_2->bulk_in_size,
                                &VAR_10, 500);
                        if (VAR_10 > 2) {
                                char VAR_11[30 *3 + 4];
                                char *VAR_12 = VAR_11;
                                int VAR_13 = (sizeof(VAR_11) - 1) / 3;
                                char *VAR_14 = VAR_2->bulk_in_buffer;
                                int VAR_15 = 0;
                                unsigned char VAR_16 = 0;
                                VAR_11[0] = 0;
                                while (VAR_10-- > 0) {
                                        VAR_16 = *VAR_14++;
                                        if (VAR_15 < VAR_13) {
                                                VAR_12 += FUNC_4(VAR_12, " %02X", VAR_16);
                                        } else if (VAR_15 > VAR_13) {
                                        } else
                                                VAR_12 += FUNC_4(VAR_12, " ..");
                                        VAR_15 += 1;
                                        continue;
                                }
                                if (VAR_16 == 0x7E) {
                                        return 0;
                                } else {
                                        if (VAR_16 == 0x55) {
                                                goto read;
                                        } else if (VAR_8-- > 0) {
                                                goto read;
                                        } else {
                                                FUNC_0(&VAR_2->udev->dev, "retr"
                                                        "y limit reached\n");
                                                continue;
                                        }
                                }
                        } else if (VAR_10 > 1) {
                                unsigned char VAR_17 = VAR_2->bulk_in_buffer[0];
                                unsigned char VAR_18 = VAR_2->bulk_in_buffer[1];
                                if (VAR_17 == 0x31 && VAR_18 == 0x00) {
                                        if (VAR_9-- > 0) {
                                                goto read;
                                        } else
                                                goto reset;
                                } else if (VAR_17 == 0x31 && VAR_18 == 0x60) {
                                        if (VAR_8-- > 0) {
                                                goto read;
                                        } else {
                                                FUNC_0(&VAR_2->udev->dev, "retr"
                                                        "y limit reached\n");
                                                continue;
                                        }
                                } else {
                                        if (VAR_8-- > 0) {
                                                goto read;
                                        } else {
                                                FUNC_0(&VAR_2->udev->dev, "retr"
                                                        "y limit reached\n");
                                                continue;
                                        }
                                }
                        } else if (VAR_10 > 0) {
                                if (VAR_8-- > 0) {
                                        goto read;
                                } else {
                                        FUNC_0(&VAR_2->udev->dev, "retry limit "
                                                "reached\n");
                                        continue;
                                }
                        } else if (VAR_3 == -VAR_1) {
                                if (VAR_5-- > 0) {
                                        goto read;
                                } else {
                                        FUNC_0(&VAR_2->udev->dev, "TIMED OUT re"
                                                "try limit reached\n");
                                        continue;
                                }
                        } else if (VAR_3 == 0) {
                                if (VAR_6-- > 0) {
                                        goto read;
                                } else {
                                        FUNC_0(&VAR_2->udev->dev, "empty packet"
                                                " retry limit reached\n");
                                        continue;
                                }
                        } else {
                                VAR_7 += 1;
                                FUNC_0(&VAR_2->udev->dev, "error = %d\n",
                                        VAR_3);
                                if (VAR_8-- > 0) {
                                        goto read;
                                } else {
                                        FUNC_0(&VAR_2->udev->dev, "retry limit "
                                                "reached\n");
                                        continue;
                                }
                        }
                }
        }
        FUNC_0(&VAR_2->udev->dev, "failed to synchronize\n");
        return -VAR_0;
}
