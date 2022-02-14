
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct usb_ftdi {int* response; int recieved; int* bulk_in_buffer; int bulk_in_left; int bulk_in_last; int expected; struct u132_target* target; TYPE_1__* udev; scalar_t__ ed_found; struct u132_respond* respond; int respond_head; int bulk_in_size; int bulk_in_endpointAddr; } ;
struct u132_target {int halted; int skipped; int toggle_bits; int error_count; int condition_code; } ;
struct u132_respond {int* value; int wait_completion; scalar_t__* result; } ;
typedef int diag ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (struct usb_ftdi*,struct u132_target*,int*,int) ;
 int* FUNC_3 (struct usb_ftdi*,struct u132_target*,int,int,int,int*) ;
 int* FUNC_4 (struct usb_ftdi*,struct u132_target*,int,int,int,int*) ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (TYPE_1__*,int ,int*,int ,int*,int) ;
 int FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_ftdi *VAR_4)
{
        u8 *VAR_5 = VAR_4->response + VAR_4->recieved;
        int VAR_6 = 0;
        int VAR_7 = 1;
        int VAR_8 = 3;
        int VAR_9 = 0;
      read:{
                int VAR_10 = 0;
                int VAR_11 = FUNC_6(VAR_4->udev,
                        FUNC_7(VAR_4->udev, VAR_4->bulk_in_endpointAddr),
                         VAR_4->bulk_in_buffer, VAR_4->bulk_in_size,
                        &VAR_10, 500);
                char VAR_12[30 *3 + 4];
                char *VAR_13 = VAR_12;
                int VAR_14 = VAR_10;
                u8 *VAR_15 = VAR_4->bulk_in_buffer;
                int VAR_16 = (sizeof(VAR_12) - 1) / 3;
                VAR_12[0] = 0;
                while (VAR_16-- > 0 && VAR_14-- > 0) {
                        if (VAR_16 > 0 || VAR_14 == 0) {
                                VAR_13 += FUNC_5(VAR_13, " %02X", *VAR_15++);
                        } else
                                VAR_13 += FUNC_5(VAR_13, " ..");
                }
                if (VAR_10 > 2) {
                        VAR_4->bulk_in_left = VAR_10 - 2;
                        VAR_4->bulk_in_last = 1;
                        goto have;
                } else if (VAR_11 == -VAR_2) {
                        if (VAR_8-- > 0) {
                                FUNC_1(&VAR_4->udev->dev, "TIMED OUT with packe"
                                        "t_bytes = %d with total %d bytes%s\n",
                                        VAR_10, VAR_6, VAR_12);
                                goto more;
                        } else if (VAR_6 > 0) {
                                FUNC_1(&VAR_4->udev->dev, "ONLY %d bytes%s\n",
                                        VAR_6, VAR_12);
                                return -VAR_1;
                        } else {
                                FUNC_1(&VAR_4->udev->dev, "TIMED OUT with packe"
                                        "t_bytes = %d with total %d bytes%s\n",
                                        VAR_10, VAR_6, VAR_12);
                                return -VAR_1;
                        }
                } else if (VAR_11 == -VAR_0) {
                        FUNC_1(&VAR_4->udev->dev, "error = %d with packet_bytes"
                                " = %d with total %d bytes%s\n", VAR_11,
                                VAR_10, VAR_6, VAR_12);
                        return VAR_11;
                } else if (VAR_11) {
                        FUNC_1(&VAR_4->udev->dev, "error = %d with packet_bytes"
                                " = %d with total %d bytes%s\n", VAR_11,
                                VAR_10, VAR_6, VAR_12);
                        return VAR_11;
                } else if (VAR_10 == 2) {
                        unsigned char VAR_17 = VAR_4->bulk_in_buffer[0];
                        unsigned char VAR_18 = VAR_4->bulk_in_buffer[1];
                        VAR_9 += 1;
                        if (VAR_17 == 0x31 && VAR_18 == 0x60) {
                                if (VAR_7-- > 0) {
                                        goto more;
                                } else
                                        return 0;
                        } else if (VAR_17 == 0x31 && VAR_18 == 0x00) {
                                if (VAR_7-- > 0) {
                                        goto more;
                                } else
                                        return 0;
                        } else {
                                if (VAR_7-- > 0) {
                                        goto more;
                                } else
                                        return 0;
                        }
                } else if (VAR_10 == 1) {
                        if (VAR_7-- > 0) {
                                goto more;
                        } else
                                return 0;
                } else {
                        if (VAR_7-- > 0) {
                                goto more;
                        } else
                                return 0;
                }
        }
      more:{
                goto read;
        }
      have:if (VAR_4->bulk_in_left > 0) {
                u8 VAR_19 = VAR_4->bulk_in_buffer[++VAR_4->bulk_in_last];
                VAR_6 += 1;
                VAR_4->bulk_in_left -= 1;
                if (VAR_4->recieved == 0 && VAR_19 == 0xFF) {
                        goto have;
                } else
                        *VAR_5++ = VAR_19;
                if (++VAR_4->recieved < VAR_4->expected) {
                        goto have;
                } else if (VAR_4->ed_found) {
                        int VAR_20 = (VAR_4->response[0] >> 5) & 0x03;
                        u16 VAR_21 = (VAR_4->response[2] << 8) |
                                VAR_4->response[1];
                        struct u132_target *VAR_22 = &VAR_4->target[VAR_20];
                        int VAR_23 = (VAR_21 >> 0) & 0x07FF;
                        char VAR_24[30 *3 + 4];
                        char *VAR_25 = VAR_24;
                        int VAR_26 = VAR_23;
                        u8 *VAR_27 = 4 + VAR_4->response;
                        int VAR_28 = (sizeof(VAR_24) - 1) / 3;
                        VAR_24[0] = 0;
                        while (VAR_28-- > 0 && VAR_26-- > 0) {
                                if (VAR_28 > 0 || VAR_26 == 0) {
                                        VAR_25 += FUNC_5(VAR_25, " %02X", *VAR_27++);
                                } else
                                        VAR_25 += FUNC_5(VAR_25, " ..");
                        }
                        FUNC_2(VAR_4, VAR_22, 4 + VAR_4->response,
                                VAR_23);
                        VAR_4->recieved = 0;
                        VAR_4->expected = 4;
                        VAR_4->ed_found = 0;
                        VAR_5 = VAR_4->response;
                        goto have;
                } else if (VAR_4->expected == 8) {
                        u8 VAR_29;
                        int VAR_30 = VAR_4->respond_head++;
                        struct u132_respond *VAR_31 = &VAR_4->respond[
                                VAR_3 & VAR_30];
                        u32 VAR_32 = VAR_4->response[7];
                        VAR_32 <<= 8;
                        VAR_32 |= VAR_4->response[6];
                        VAR_32 <<= 8;
                        VAR_32 |= VAR_4->response[5];
                        VAR_32 <<= 8;
                        VAR_32 |= VAR_4->response[4];
                        *VAR_31->value = VAR_32;
                        *VAR_31->result = 0;
                        FUNC_0(&VAR_31->wait_completion);
                        VAR_4->recieved = 0;
                        VAR_4->expected = 4;
                        VAR_4->ed_found = 0;
                        VAR_5 = VAR_4->response;
                        VAR_29 = (VAR_4->response[0] >> 0) & 0x0F;
                        if (VAR_29 == 0x00) {
                        } else if (VAR_29 == 0x02) {
                        } else if (VAR_29 == 0x06) {
                        } else if (VAR_29 == 0x0A) {
                        } else
                                FUNC_1(&VAR_4->udev->dev, "Uxxx unknown(%0X) va"
                                        "lue = %08X\n", VAR_29, VAR_32);
                        goto have;
                } else {
                        if ((VAR_4->response[0] & 0x80) == 0x00) {
                                VAR_4->expected = 8;
                                goto have;
                        } else {
                                int VAR_33 = (VAR_4->response[0] >> 5) & 0x03;
                                int VAR_34 = (VAR_4->response[0] >> 0) & 0x03;
                                u16 VAR_35 = (VAR_4->response[2] << 8) |
                                        VAR_4->response[1];
                                struct u132_target *VAR_36 = &VAR_4->target[
                                        VAR_33];
                                VAR_36->halted = (VAR_4->response[0] >> 3) &
                                        0x01;
                                VAR_36->skipped = (VAR_4->response[0] >> 2) &
                                        0x01;
                                VAR_36->toggle_bits = (VAR_4->response[3] >> 6)
                                        & 0x03;
                                VAR_36->error_count = (VAR_4->response[3] >> 4)
                                        & 0x03;
                                VAR_36->condition_code = (VAR_4->response[
                                        3] >> 0) & 0x0F;
                                if ((VAR_4->response[0] & 0x10) == 0x00) {
                                        VAR_5 = FUNC_4(VAR_4, VAR_36,
                                                VAR_35, VAR_33, VAR_34,
                                                VAR_5);
                                        goto have;
                                } else {
                                        VAR_5 = FUNC_3(VAR_4, VAR_36,
                                                VAR_35, VAR_33, VAR_34,
                                                VAR_5);
                                        goto have;
                                }
                        }
                }
        } else
                goto more;
}
