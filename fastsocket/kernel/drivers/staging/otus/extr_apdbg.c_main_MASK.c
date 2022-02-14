
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zdap_ioctl {int addr; int value; unsigned char* data; int cmd; } ;
struct ifreq {char* ifr_data; int ifr_name; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 char* VAR_29 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,struct ifreq*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char*,char*,...) ;
 int VAR_30 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (char*) ;

int FUNC_10(int VAR_31, char **VAR_32)
{
    int VAR_33;
    int VAR_34, VAR_35;
    struct ifreq VAR_36;
    char *VAR_37 = ((void*)0);
    struct zdap_ioctl VAR_38;

    VAR_29 = VAR_32[0];

    if (VAR_31 < 3) {
        FUNC_1(VAR_30,"%s: usage is \"%s <ifname> <operation> [<address>] [<value>]\"\n",
                VAR_29, VAR_29);
        FUNC_1(VAR_30,"valid operation: read, write, mem, reg,\n");
        FUNC_1(VAR_30,"               : txd, rxd, rmem, wmem\n");
        FUNC_1(VAR_30,"               : dmat, regt, test\n");

        FUNC_1(VAR_30,"    scan, Channel Scan\n");
        FUNC_1(VAR_30,"    rts <decimal>, Set RTS Threshold\n");
        FUNC_1(VAR_30,"    frag <decimal>, Set Fragment Threshold\n");
        FUNC_1(VAR_30,"    rate <0-28>, 0:AUTO, 1-4:CCK, 5-12:OFDM, 13-28:HT\n");
        FUNC_1(VAR_30,"    TBD mix <0 or 1>, Set 1 to enable mixed mode\n");
        FUNC_1(VAR_30,"    enc, <0-3>, 0=>OPEN, 1=>WEP64, 2=>WEP128, 3=>WEP256\n");
        FUNC_1(VAR_30,"    skey <key>, Set WEP key\n");
        FUNC_1(VAR_30,"    txcnt, Get TxQ Cnt\n");
        FUNC_1(VAR_30,"    dagcnt, Get Deaggregate Cnt\n");
        FUNC_1(VAR_30,"    durmode <mode>, Set Duration Mode 0=>HW, 1=>SW\n");
        FUNC_1(VAR_30,"    aeskey <user> <key>\n");
        FUNC_1(VAR_30,"    aesmode <mode>\n");
        FUNC_1(VAR_30,"    wlanmode <0,1> 0:Station mode, 1:PIBSS mode\n");
        FUNC_1(VAR_30,"    tal <0,1>, Get Current Tally Info, 0=>read, 1=>read and reset\n");

        FUNC_0(1);
    }

    FUNC_7(VAR_36.ifr_name, VAR_32[1]);
    VAR_38.addr = 0;
    VAR_38.value = 0;


    VAR_33 = FUNC_4(VAR_0, VAR_2, VAR_1);
    if (VAR_33 < 0) {
        FUNC_1(VAR_30, "%s: socket(): %s\n", VAR_32[0], FUNC_8(VAR_28));
        FUNC_0(1);
    }

    if (VAR_31 >= 4)
    {
        FUNC_5(VAR_32[3], "%x", &VAR_34);
    }

    if (VAR_31 >= 5)
    {
        FUNC_5(VAR_32[4], "%x", &VAR_35);
    }

    VAR_38.addr = VAR_34;
    VAR_38.value = VAR_35;

    if (!FUNC_6(VAR_32[2], "read"))
    {
        VAR_38.cmd = VAR_16;
    }
    else if (!FUNC_6(VAR_32[2], "mem"))
    {
        VAR_38.cmd = VAR_10;
    }
    else if (!FUNC_6(VAR_32[2], "write"))
    {
        VAR_38.cmd = VAR_18;
    }
    else if (!FUNC_6(VAR_32[2], "reg"))
    {
        VAR_38.cmd = VAR_15;
    }
    else if (!FUNC_6(VAR_32[2], "txd"))
    {
        VAR_38.cmd = VAR_27;
    }
    else if (!FUNC_6(VAR_32[2], "rxd"))
    {
        VAR_38.cmd = VAR_20;
    }
    else if (!FUNC_6(VAR_32[2], "rmem"))
    {
        VAR_38.cmd = VAR_11;
    }
    else if (!FUNC_6(VAR_32[2], "wmem"))
    {
        VAR_38.cmd = VAR_12;
    }
    else if (!FUNC_6(VAR_32[2], "dmat"))
    {
        VAR_38.cmd = VAR_3;
    }
    else if (!FUNC_6(VAR_32[2], "regt"))
    {
        VAR_38.cmd = VAR_17;
    }
    else if (!FUNC_6(VAR_32[2], "test"))
    {
        VAR_38.cmd = VAR_26;
    }
    else if (!FUNC_6(VAR_32[2], "tal"))
    {
        FUNC_5(VAR_32[3], "%d", &VAR_34);
        VAR_38.addr = VAR_34;
        VAR_38.cmd = VAR_25;
    }
    else if (!FUNC_6(VAR_32[2], "rts"))
    {
        FUNC_5(VAR_32[3], "%d", &VAR_34);
        VAR_38.addr = VAR_34;
        VAR_38.cmd = VAR_19;
    }
    else if (!FUNC_6(VAR_32[2], "mix"))
    {
        VAR_38.cmd = VAR_13;
    }
    else if (!FUNC_6(VAR_32[2], "frag"))
    {
        FUNC_5(VAR_32[3], "%d", &VAR_34);
        VAR_38.addr = VAR_34;
        VAR_38.cmd = VAR_6;
    }
    else if (!FUNC_6(VAR_32[2], "scan"))
    {
        VAR_38.cmd = VAR_21;
    }
    else if (!FUNC_6(VAR_32[2], "skey"))
    {
        VAR_38.cmd = VAR_9;

        if (VAR_31 >= 4)
        {
            unsigned char VAR_39[29];
            int VAR_40;
            int VAR_41;
            int VAR_42;

            VAR_41 = FUNC_9(VAR_32[3]);

            if (VAR_41 == 10)
            {
                FUNC_5(VAR_32[3], "%02x%02x%02x%02x%02x", &VAR_39[0], &VAR_39[1],
                        &VAR_39[2], &VAR_39[3], &VAR_39[4]);
            }
            else if (VAR_41 == 26)
            {
                FUNC_5(VAR_32[3], "%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
                        &VAR_39[0], &VAR_39[1], &VAR_39[2], &VAR_39[3], &VAR_39[4],
                        &VAR_39[5], &VAR_39[6], &VAR_39[7], &VAR_39[8], &VAR_39[9],
                         &VAR_39[10], &VAR_39[11], &VAR_39[12]);
            }
            else if (VAR_41 == 58)
            {
                FUNC_5(VAR_32[3], "%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
                        &VAR_39[0], &VAR_39[1], &VAR_39[2], &VAR_39[3], &VAR_39[4],
                        &VAR_39[5], &VAR_39[6], &VAR_39[7], &VAR_39[8], &VAR_39[9],
                        &VAR_39[10], &VAR_39[11], &VAR_39[12], &VAR_39[13], &VAR_39[14],
                        &VAR_39[15], &VAR_39[16], &VAR_39[17], &VAR_39[18], &VAR_39[19],
                        &VAR_39[20], &VAR_39[21], &VAR_39[22], &VAR_39[23], &VAR_39[24],
                        &VAR_39[25], &VAR_39[26], &VAR_39[27], &VAR_39[28]);
            }
            else
            {
                FUNC_1(VAR_30, "Invalid key length\n");
                FUNC_0(1);
            }
            VAR_38.addr = VAR_41/2;

            for(VAR_40=0; VAR_40<VAR_38.addr; VAR_40++)
            {
                VAR_38.data[VAR_40] = VAR_39[VAR_40];
            }
        }
        else
        {
            FUNC_2("Error : Key required!\n");
        }
    }
    else if (!FUNC_6(VAR_32[2], "rate"))
    {
        FUNC_5(VAR_32[3], "%d", &VAR_34);

        if (VAR_34 > 28)
        {
            FUNC_1(VAR_30, "Invalid rate, range:0~28\n");
            FUNC_0(1);
        }
        VAR_38.addr = VAR_34;
        VAR_38.cmd = VAR_14;
    }
    else if (!FUNC_6(VAR_32[2], "enc"))
    {
        FUNC_5(VAR_32[3], "%d", &VAR_34);

        if (VAR_34 > 3)
        {
            FUNC_1(VAR_30, "Invalid encryption mode, range:0~3\n");
            FUNC_0(1);
        }

        if (VAR_34 == 2)
        {
            VAR_34 = 5;
        }
        else if (VAR_34 == 3)
        {
            VAR_34 = 6;
        }

        VAR_38.addr = VAR_34;
        VAR_38.cmd = VAR_5;
    }
    else if (!FUNC_6(VAR_32[2], "txcnt"))
    {
        VAR_38.cmd = VAR_8;
    }
    else if (!FUNC_6(VAR_32[2], "dagcnt"))
    {
        FUNC_5(VAR_32[3], "%d", &VAR_34);

        if (VAR_34 != 0 && VAR_34 != 1)
        {
            FUNC_1(VAR_30, "The value should be 0 or 1\n");
            FUNC_0(0);
        }

        VAR_38.addr = VAR_34;
        VAR_38.cmd = VAR_7;
    }
    else if (!FUNC_6(VAR_32[2], "durmode"))
    {
        FUNC_5(VAR_32[3], "%d", &VAR_34);

        if (VAR_34 != 0 && VAR_34 != 1)
        {
            FUNC_1(VAR_30, "The Duration mode should be 0 or 1\n");
            FUNC_0(0);
        }

        VAR_38.addr = VAR_34;
        VAR_38.cmd = VAR_4;
    }
    else if (!FUNC_6(VAR_32[2], "aeskey"))
    {
        unsigned char VAR_43[16];
        int VAR_44;

        FUNC_5(VAR_32[3], "%d", &VAR_34);

        FUNC_5(VAR_32[4], "%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x", &VAR_43[0], &VAR_43[1], &VAR_43[2], &VAR_43[3], &VAR_43[4], &VAR_43[5], &VAR_43[6], &VAR_43[7], &VAR_43[8], &VAR_43[9], &VAR_43[10], &VAR_43[11], &VAR_43[12], &VAR_43[13], &VAR_43[14], &VAR_43[15]);

        for(VAR_44 = 0; VAR_44 < 16; VAR_44++)
        {
            VAR_38.data[VAR_44] = VAR_43[VAR_44];
        }

        VAR_38.addr = VAR_34;
        VAR_38.cmd = VAR_22;
    }
    else if (!FUNC_6(VAR_32[2], "aesmode"))
    {
        FUNC_5(VAR_32[3], "%d", &VAR_34);

        VAR_38.addr = VAR_34;
        VAR_38.cmd = VAR_23;
    }
    else if (!FUNC_6(VAR_32[2], "wlanmode"))
    {
        FUNC_5(VAR_32[3], "%d", &VAR_34);

        VAR_38.addr = VAR_34;
        VAR_38.cmd = VAR_24;
    }
    else
    {
     FUNC_1(VAR_30, "error action\n");
        FUNC_0(1);
    }

    VAR_36.ifr_data = (char *)&VAR_38;
    FUNC_3(VAR_33, &VAR_36);

fail:
    FUNC_0(0);
}
