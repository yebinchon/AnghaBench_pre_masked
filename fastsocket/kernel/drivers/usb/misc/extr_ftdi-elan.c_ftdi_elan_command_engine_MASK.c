
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char u8 ;
struct usb_ftdi {int command_next; int command_head; TYPE_1__* udev; int bulk_out_endpointAddr; } ;
struct urb {int transfer_dma; int transfer_flags; } ;
typedef int diag ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct usb_ftdi*,char*,int,int) ;
 int FUNC_2 (struct usb_ftdi*) ;
 int FUNC_3 (struct usb_ftdi*,int) ;
 int VAR_3 ;
 int FUNC_4 (char*,char*,...) ;
 struct urb* FUNC_5 (int ,int ) ;
 char* FUNC_6 (TYPE_1__*,int,int ,int *) ;
 int FUNC_7 (TYPE_1__*,int,char*,int ) ;
 int FUNC_8 (struct urb*,TYPE_1__*,int ,char*,int,int ,struct usb_ftdi*) ;
 int FUNC_9 (struct urb*) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_12(struct usb_ftdi *VAR_4)
{
        int VAR_5;
        char *VAR_6;
        int VAR_7;
        int VAR_8;
        struct urb *VAR_9;
        int VAR_10 = VAR_4->command_next - VAR_4->command_head;
        if (VAR_10 == 0)
                return 0;
        VAR_8 = FUNC_3(VAR_4, VAR_10);
        VAR_9 = FUNC_5(0, VAR_1);
        if (!VAR_9) {
                FUNC_0(&VAR_4->udev->dev, "could not get a urb to write %d comm"
                        "ands totaling %d bytes to the Uxxx\n", VAR_10,
                        VAR_8);
                return -VAR_0;
        }
        VAR_6 = FUNC_6(VAR_4->udev, VAR_8, VAR_1,
                &VAR_9->transfer_dma);
        if (!VAR_6) {
                FUNC_0(&VAR_4->udev->dev, "could not get a buffer to write %d c"
                        "ommands totaling %d bytes to the Uxxx\n", VAR_10,
                         VAR_8);
                FUNC_9(VAR_9);
                return -VAR_0;
        }
        VAR_7 = FUNC_1(VAR_4, VAR_6,
                VAR_10, VAR_8);
        FUNC_8(VAR_9, VAR_4->udev, FUNC_10(VAR_4->udev,
                VAR_4->bulk_out_endpointAddr), VAR_6, VAR_8,
                VAR_3, VAR_4);
        VAR_9->transfer_flags |= VAR_2;
        if (VAR_7) {
                char VAR_11[40 *3 + 4];
                char *VAR_12 = VAR_11;
                int VAR_13 = VAR_8;
                u8 *VAR_14 = VAR_6;
                int VAR_15 = (sizeof(VAR_11) - 1) / 3;
                VAR_11[0] = 0;
                while (VAR_15-- > 0 && VAR_13-- > 0) {
                        if (VAR_15 > 0 || VAR_13 == 0) {
                                VAR_12 += FUNC_4(VAR_12, " %02X", *VAR_14++);
                        } else
                                VAR_12 += FUNC_4(VAR_12, " ..");
                }
        }
        VAR_5 = FUNC_11(VAR_9, VAR_1);
        if (VAR_5) {
                FUNC_0(&VAR_4->udev->dev, "failed %d to submit urb %p to write "
                        "%d commands totaling %d bytes to the Uxxx\n", VAR_5,
                        VAR_9, VAR_10, VAR_8);
                FUNC_7(VAR_4->udev, VAR_8, VAR_6, VAR_9->transfer_dma);
                FUNC_9(VAR_9);
                return VAR_5;
        }
        FUNC_9(VAR_9);

        VAR_4->command_head += VAR_10;
        FUNC_2(VAR_4);
        return 0;
}
