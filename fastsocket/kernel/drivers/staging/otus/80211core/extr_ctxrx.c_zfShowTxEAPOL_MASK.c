
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int *,int) ;

void FUNC_7(zdev_t* VAR_5, zbuf_t* VAR_6, u16_t VAR_7)
{
    u8_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    u16_t VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    u32_t VAR_20, VAR_21, VAR_22, VAR_23;

    FUNC_4(VAR_5);

    FUNC_2("EAPOL Packet size = ", FUNC_0(VAR_5, VAR_6));
    VAR_8 = FUNC_6(VAR_5, VAR_6, VAR_7+1);

    VAR_14 = (((u16_t) FUNC_6(VAR_5, VAR_6, VAR_7+2)) << 8) +
                FUNC_6(VAR_5, VAR_6, VAR_7+3);

    if( VAR_8 == 0 )
    {

        VAR_10 = FUNC_6(VAR_5, VAR_6, VAR_7+4);
        FUNC_1("EAP-Packet");
        FUNC_2("Packet Length = ", VAR_14);
        FUNC_2("EAP-Packet Code = ", VAR_10);

        if( VAR_10 == 1 )
        {
            FUNC_1("EAP-Packet Request");


            VAR_11 = FUNC_6(VAR_5, VAR_6, VAR_7+5);

            VAR_18 = (((u16_t) FUNC_6(VAR_5, VAR_6, VAR_7+6)) << 8) +
                      FUNC_6(VAR_5, VAR_6, VAR_7+7);

            VAR_12 = FUNC_6(VAR_5, VAR_6, VAR_7+8);
            FUNC_2("EAP-Packet Identifier = ", VAR_11);
            FUNC_2("EAP-Packet Length = ", VAR_18);
            FUNC_2("EAP-Packet Type = ", VAR_12);

            if( VAR_12 == 1 )
            {
                FUNC_1("EAP-Packet Request Identity");
            }
            else if( VAR_12 == 2 )
            {
                FUNC_1("EAP-Packet Request Notification");
            }
            else if( VAR_12 == 4 )
            {
                FUNC_1("EAP-Packet Request MD5-Challenge");
            }
            else if( VAR_12 == 5 )
            {
                FUNC_1("EAP-Packet Request One Time Password");
            }
            else if( VAR_12 == 6 )
            {
                FUNC_1("EAP-Packet Request Generic Token Card");
            }
            else if( VAR_12 == 254 )
            {
                FUNC_1("EAP-Packet Request Wi-Fi Protected Setup");
                VAR_22 = (((u32_t) FUNC_6(VAR_5, VAR_6, VAR_7+9)) << 16) +
                           (((u32_t) FUNC_6(VAR_5, VAR_6, VAR_7+10)) << 8) +
                           FUNC_6(VAR_5, VAR_6, VAR_7+11);

                VAR_23 = (((u32_t) FUNC_6(VAR_5, VAR_6, VAR_7+12)) << 24) +
                             (((u32_t) FUNC_6(VAR_5, VAR_6, VAR_7+13)) << 16) +
                             (((u32_t) FUNC_6(VAR_5, VAR_6, VAR_7+14)) << 8) +
                             FUNC_6(VAR_5, VAR_6, VAR_7+15);

                VAR_19 = (((u16_t) FUNC_6(VAR_5, VAR_6, VAR_7+16)) << 8) +
                          FUNC_6(VAR_5, VAR_6, VAR_7+17);

                VAR_13 = FUNC_6(VAR_5, VAR_6, VAR_7+18);

                FUNC_2("EAP-Packet Vendor ID = ", VAR_22);
                FUNC_2("EAP-Packet Venodr Type = ", VAR_23);
                FUNC_2("EAP-Packet Op Code = ", VAR_19);
                FUNC_2("EAP-Packet Flags = ", VAR_13);
            }
        }
        else if( VAR_10 == 2 )
        {
            FUNC_1("EAP-Packet Response");


            VAR_11 = FUNC_6(VAR_5, VAR_6, VAR_7+5);

            VAR_18 = (((u16_t) FUNC_6(VAR_5, VAR_6, VAR_7+6)) << 8) +
                      FUNC_6(VAR_5, VAR_6, VAR_7+7);

            VAR_12 = FUNC_6(VAR_5, VAR_6, VAR_7+8);

            FUNC_2("EAP-Packet Identifier = ", VAR_11);
            FUNC_2("EAP-Packet Length = ", VAR_18);
            FUNC_2("EAP-Packet Type = ", VAR_12);

            if( VAR_12 == 1 )
            {
                FUNC_1("EAP-Packet Response Identity");
            }
            else if( VAR_12 == 2 )
            {
                FUNC_1("EAP-Packet Request Notification");
            }
            else if( VAR_12 == 3 )
            {
                FUNC_1("EAP-Packet Request Nak");
            }
            else if( VAR_12 == 4 )
            {
                FUNC_1("EAP-Packet Request MD5-Challenge");
            }
            else if( VAR_12 == 5 )
            {
                FUNC_1("EAP-Packet Request One Time Password");
            }
            else if( VAR_12 == 6 )
            {
                FUNC_1("EAP-Packet Request Generic Token Card");
            }
            else if( VAR_12 == 254 )
            {
                FUNC_1("EAP-Packet Response Wi-Fi Protected Setup");


                VAR_22 = (((u32_t) FUNC_6(VAR_5, VAR_6, VAR_7+9)) << 16) +
                           (((u32_t) FUNC_6(VAR_5, VAR_6, VAR_7+10)) << 8) +
                           FUNC_6(VAR_5, VAR_6, VAR_7+11);

                VAR_23 = (((u32_t) FUNC_6(VAR_5, VAR_6, VAR_7+12)) << 24) +
                             (((u32_t) FUNC_6(VAR_5, VAR_6, VAR_7+13)) << 16) +
                             (((u32_t) FUNC_6(VAR_5, VAR_6, VAR_7+14)) << 8) +
                             FUNC_6(VAR_5, VAR_6, VAR_7+15);

                VAR_19 = (((u16_t) FUNC_6(VAR_5, VAR_6, VAR_7+16)) << 8) +
                          FUNC_6(VAR_5, VAR_6, VAR_7+17);

                VAR_13 = FUNC_6(VAR_5, VAR_6, VAR_7+18);

                FUNC_2("EAP-Packet Vendor ID = ", VAR_22);
                FUNC_2("EAP-Packet Venodr Type = ", VAR_23);
                FUNC_2("EAP-Packet Op Code = ", VAR_19);
                FUNC_2("EAP-Packet Flags = ", VAR_13);
            }
        }
        else if( VAR_10 == 3 )
        {
            FUNC_1("EAP-Packet Success");


            VAR_11 = FUNC_5(VAR_5, VAR_6, VAR_7+5);

            VAR_18 = (((u16_t) FUNC_5(VAR_5, VAR_6, VAR_7+6)) << 8) +
                      FUNC_5(VAR_5, VAR_6, VAR_7+7);

            FUNC_2("EAP-Packet Identifier = ", VAR_11);
            FUNC_2("EAP-Packet Length = ", VAR_18);
        }
        else if( VAR_10 == 4 )
        {
            FUNC_1("EAP-Packet Failure");


            VAR_11 = FUNC_6(VAR_5, VAR_6, VAR_7+5);

            VAR_18 = (((u16_t) FUNC_6(VAR_5, VAR_6, VAR_7+6)) << 8) +
                      FUNC_6(VAR_5, VAR_6, VAR_7+7);

            FUNC_2("EAP-Packet Identifier = ", VAR_11);
            FUNC_2("EAP-Packet Length = ", VAR_18);
        }
    }
    else if( VAR_8 == 1 )
    {
        FUNC_1("EAPOL-Start");
    }
    else if( VAR_8 == 2 )
    {
        FUNC_1("EAPOL-Logoff");
    }
    else if( VAR_8 == 3 )
    {

        VAR_9 = FUNC_6(VAR_5, VAR_6, VAR_7+4);

        VAR_15 = (((u16_t) FUNC_6(VAR_5, VAR_6, VAR_7+5)) << 8) +
                  FUNC_6(VAR_5, VAR_6, VAR_7+6);

        VAR_16 = (((u16_t) FUNC_6(VAR_5, VAR_6, VAR_7+7)) << 8) +
                 FUNC_6(VAR_5, VAR_6, VAR_7+8);

        VAR_20 = (((u32_t) FUNC_6(VAR_5, VAR_6, VAR_7+9)) << 24) +
                         (((u32_t) FUNC_6(VAR_5, VAR_6, VAR_7+10)) << 16) +
                         (((u32_t) FUNC_6(VAR_5, VAR_6, VAR_7+11)) << 8) +
                         FUNC_6(VAR_5, VAR_6, VAR_7+12);

        VAR_21 = (((u32_t) FUNC_6(VAR_5, VAR_6, VAR_7+13)) << 24) +
                         (((u32_t) FUNC_6(VAR_5, VAR_6, VAR_7+14)) << 16) +
                         (((u32_t) FUNC_6(VAR_5, VAR_6, VAR_7+15)) << 8) +
                         FUNC_6(VAR_5, VAR_6, VAR_7+16);

        VAR_17 = (((u16_t) FUNC_6(VAR_5, VAR_6, VAR_7+97)) << 8) +
                     FUNC_6(VAR_5, VAR_6, VAR_7+98);

        FUNC_1("EAPOL-Key");
        FUNC_2("packet length = ", VAR_14);

        if ( VAR_9 == 254 )
        {
            FUNC_1("key type = 254 (SSN key descriptor)");
        }
        else
        {
            FUNC_3("key type = 0x", VAR_9);
        }

        FUNC_3("replay counter(L) = ", VAR_21);

        FUNC_3("key information = ", VAR_15);

        if ( VAR_15 & VAR_0 )
        {
            FUNC_1("    - pairwise key");
        }
        else
        {
            FUNC_1("    - group key");
        }

        if ( VAR_15 & VAR_1 )
        {
            FUNC_1("    - Tx key installed");
        }
        else
        {
            FUNC_1("    - Tx key not set");
        }

        if ( VAR_15 & VAR_2 )
        {
            FUNC_1("    - Ack needed");
        }
        else
        {
            FUNC_1("    - Ack not needed");
        }

        if ( VAR_15 & VAR_3 )
        {
            FUNC_1("    - MIC set");
        }
        else
        {
            FUNC_1("    - MIC not set");
        }

        if ( VAR_15 & VAR_4 )
        {
            FUNC_1("    - packet encrypted");
        }
        else
        {
            FUNC_1("    - packet not encrypted");
        }

        FUNC_2("keyLen = ", VAR_16);
        FUNC_2("keyDataLen = ", VAR_17);
    }
    else if( VAR_8 == 4 )
    {
        FUNC_1("EAPOL-Encapsulated-ASF-Alert");
    }
}
