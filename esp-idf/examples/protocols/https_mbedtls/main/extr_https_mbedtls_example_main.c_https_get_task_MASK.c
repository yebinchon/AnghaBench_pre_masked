
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_x509_crt ;
typedef int mbedtls_ssl_context ;
typedef int mbedtls_ssl_config ;
typedef int mbedtls_net_context ;
typedef int mbedtls_entropy_context ;
typedef int mbedtls_ctr_drbg_context ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *) ;
 int VAR_13 ;
 int FUNC_7 (int *,int ,int *,int *,int ) ;
 int VAR_14 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int *,int *) ;
 int FUNC_16 (int *,int ,int *) ;
 int FUNC_17 (int *,int ,int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,unsigned char*,int) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *,int *,int ,int ,int *) ;
 int FUNC_26 (int *,int ) ;
 int FUNC_27 (int *,int *) ;
 int FUNC_28 (int *,unsigned char const*,size_t) ;
 int FUNC_29 (int,char*,int) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *,scalar_t__,scalar_t__) ;
 int FUNC_32 (char*,int,char*,int) ;
 int VAR_17 ;
 int FUNC_33 (char) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 size_t FUNC_34 (scalar_t__) ;
 int FUNC_35 (int) ;

__attribute__((used)) static void FUNC_36(void *VAR_20)
{
    char VAR_21[512];
    int VAR_22, VAR_23, VAR_24;

    mbedtls_entropy_context VAR_25;
    mbedtls_ctr_drbg_context VAR_26;
    mbedtls_ssl_context VAR_27;
    mbedtls_x509_crt VAR_28;
    mbedtls_ssl_config VAR_29;
    mbedtls_net_context VAR_30;

    FUNC_22(&VAR_27);
    FUNC_30(&VAR_28);
    FUNC_6(&VAR_26);
    FUNC_2(VAR_10, "Seeding the random number generator");

    FUNC_18(&VAR_29);

    FUNC_8(&VAR_25);
    if((VAR_22 = FUNC_7(&VAR_26, VAR_14, &VAR_25,
                                    ((void*)0), 0)) != 0)
    {
        FUNC_1(VAR_10, "mbedtls_ctr_drbg_seed returned %d", VAR_22);
        FUNC_4();
    }

    FUNC_2(VAR_10, "Loading the CA root certificate...");

    VAR_22 = FUNC_31(&VAR_28, VAR_19,
                                 VAR_18-VAR_19);

    if(VAR_22 < 0)
    {
        FUNC_1(VAR_10, "mbedtls_x509_crt_parse returned -0x%x\n\n", -VAR_22);
        FUNC_4();
    }

    FUNC_2(VAR_10, "Setting hostname for TLS session...");


    if((VAR_22 = FUNC_26(&VAR_27, VAR_12)) != 0)
    {
        FUNC_1(VAR_10, "mbedtls_ssl_set_hostname returned -0x%x", -VAR_22);
        FUNC_4();
    }

    FUNC_2(VAR_10, "Setting up the SSL/TLS structure...");

    if((VAR_22 = FUNC_17(&VAR_29,
                                          VAR_5,
                                          VAR_7,
                                          VAR_6)) != 0)
    {
        FUNC_1(VAR_10, "mbedtls_ssl_config_defaults returned %d", VAR_22);
        goto exit;
    }






    FUNC_14(&VAR_29, VAR_8);
    FUNC_15(&VAR_29, &VAR_28, ((void*)0));
    FUNC_16(&VAR_29, VAR_13, &VAR_26);




    if ((VAR_22 = FUNC_27(&VAR_27, &VAR_29)) != 0)
    {
        FUNC_1(VAR_10, "mbedtls_ssl_setup returned -0x%x\n\n", -VAR_22);
        goto exit;
    }

    while(1) {
        FUNC_12(&VAR_30);

        FUNC_2(VAR_10, "Connecting to %s:%s...", VAR_12, VAR_11);

        if ((VAR_22 = FUNC_10(&VAR_30, VAR_12,
                                      VAR_11, VAR_4)) != 0)
        {
            FUNC_1(VAR_10, "mbedtls_net_connect returned -%x", -VAR_22);
            goto exit;
        }

        FUNC_2(VAR_10, "Connected.");

        FUNC_25(&VAR_27, &VAR_30, VAR_16, VAR_15, ((void*)0));

        FUNC_2(VAR_10, "Performing the SSL/TLS handshake...");

        while ((VAR_22 = FUNC_21(&VAR_27)) != 0)
        {
            if (VAR_22 != VAR_2 && VAR_22 != VAR_3)
            {
                FUNC_1(VAR_10, "mbedtls_ssl_handshake returned -0x%x", -VAR_22);
                goto exit;
            }
        }

        FUNC_2(VAR_10, "Verifying peer X.509 certificate...");

        if ((VAR_23 = FUNC_20(&VAR_27)) != 0)
        {

            FUNC_3(VAR_10, "Failed to verify peer certificate!");
            FUNC_5(VAR_21, sizeof(VAR_21));
            FUNC_32(VAR_21, sizeof(VAR_21), "  ! ", VAR_23);
            FUNC_3(VAR_10, "verification info: %s", VAR_21);
        }
        else {
            FUNC_2(VAR_10, "Certificate verified.");
        }

        FUNC_2(VAR_10, "Cipher suite is %s", FUNC_19(&VAR_27));

        FUNC_2(VAR_10, "Writing HTTP request...");

        size_t VAR_31 = 0;
        do {
            VAR_22 = FUNC_28(&VAR_27,
                                    (const unsigned char *)VAR_9 + VAR_31,
                                    FUNC_34(VAR_9) - VAR_31);
            if (VAR_22 >= 0) {
                FUNC_2(VAR_10, "%d bytes written", VAR_22);
                VAR_31 += VAR_22;
            } else if (VAR_22 != VAR_3 && VAR_22 != VAR_2) {
                FUNC_1(VAR_10, "mbedtls_ssl_write returned -0x%x", -VAR_22);
                goto exit;
            }
        } while(VAR_31 < FUNC_34(VAR_9));

        FUNC_2(VAR_10, "Reading HTTP response...");

        do
        {
            VAR_24 = sizeof(VAR_21) - 1;
            FUNC_5(VAR_21, sizeof(VAR_21));
            VAR_22 = FUNC_23(&VAR_27, (unsigned char *)VAR_21, VAR_24);

            if(VAR_22 == VAR_2 || VAR_22 == VAR_3)
                continue;

            if(VAR_22 == VAR_1) {
                VAR_22 = 0;
                break;
            }

            if(VAR_22 < 0)
            {
                FUNC_1(VAR_10, "mbedtls_ssl_read returned -0x%x", -VAR_22);
                break;
            }

            if(VAR_22 == 0)
            {
                FUNC_2(VAR_10, "connection closed");
                break;
            }

            VAR_24 = VAR_22;
            FUNC_0(VAR_10, "%d bytes read", VAR_24);

            for(int VAR_32 = 0; VAR_32 < VAR_24; VAR_32++) {
                FUNC_33(VAR_21[VAR_32]);
            }
        } while(1);

        FUNC_13(&VAR_27);

    exit:
        FUNC_24(&VAR_27);
        FUNC_11(&VAR_30);

        if(VAR_22 != 0)
        {
            FUNC_29(VAR_22, VAR_21, 100);
            FUNC_1(VAR_10, "Last error was: -0x%x - %s", -VAR_22, VAR_21);
        }

        FUNC_33('\n');

        static int VAR_33;
        FUNC_2(VAR_10, "Completed %d requests", ++VAR_33);

        for(int VAR_34 = 10; VAR_34 >= 0; VAR_34--) {
            FUNC_2(VAR_10, "%d...", VAR_34);
            FUNC_35(1000 / VAR_17);
        }
        FUNC_2(VAR_10, "Starting again!");
    }
}
