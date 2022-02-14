
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {scalar_t__ sin_port; TYPE_1__ sin_addr; int sin_family; int member_0; } ;
struct sockaddr {int dummy; } ;
struct resolv_entries {int* addrs; int addrs_len; } ;
struct dnshdr {scalar_t__ id; scalar_t__ ancount; scalar_t__ qdcount; scalar_t__ opts; } ;
struct dnsans {int dummy; } ;
struct dns_resource {scalar_t__ type; scalar_t__ _class; scalar_t__ data_len; } ;
struct dns_question {scalar_t__ qclass; scalar_t__ qtype; } ;
typedef int response ;
typedef int ipv4_t ;
typedef int fd_set ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct resolv_entries* FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,struct sockaddr*,int) ;
 int VAR_8 ;
 int FUNC_7 (int ,int,int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 () ;
 int* FUNC_12 (int*,int) ;
 int FUNC_13 (int,char*,int,int ,int *,int *) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (struct resolv_entries*) ;
 int FUNC_16 (char*,char*,int*) ;
 int FUNC_17 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_18 (int,char*,int,int ) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (struct sockaddr_in*,int) ;

struct resolv_entries *FUNC_23(char *VAR_9)
{
    struct resolv_entries *VAR_10 = FUNC_4(1, sizeof (struct resolv_entries));
    char VAR_11[2048], VAR_12[2048];
    struct dnshdr *VAR_13 = (struct dnshdr *)VAR_11;
    char *VAR_14 = (char *)(VAR_13 + 1);

    FUNC_14(VAR_14, VAR_9);

    struct dns_question *VAR_15 = (struct dns_question *)(VAR_14 + FUNC_21(VAR_14) + 1);
    struct sockaddr_in VAR_16 = {0};
    int VAR_17 = sizeof (struct dnshdr) + FUNC_21(VAR_14) + 1 + sizeof (struct dns_question);
    int VAR_18 = 0, VAR_19 = -1, VAR_20 = 0;
    uint16_t VAR_21 = FUNC_11() % 0xffff;

    FUNC_22(&VAR_16, sizeof (struct sockaddr_in));
    VAR_16.sin_family = VAR_0;
    VAR_16.sin_addr.s_addr = FUNC_3(8,8,8,8);
    VAR_16.sin_port = FUNC_8(53);


    VAR_13->id = VAR_21;
    VAR_13->opts = FUNC_8(1 << 8);
    VAR_13->qdcount = FUNC_8(1);
    VAR_15->qtype = FUNC_8(VAR_6);
    VAR_15->qclass = FUNC_8(VAR_5);

    while (VAR_18++ < 5)
    {
        fd_set VAR_22;
        struct timeval VAR_23;
        int VAR_24;

        if (VAR_19 != -1)
            FUNC_5(VAR_19);
        if ((VAR_19 = FUNC_20(VAR_0, VAR_7, 0)) == -1)
        {



            FUNC_19(1);
            continue;
        }

        if (FUNC_6(VAR_19, (struct sockaddr *)&VAR_16, sizeof (struct sockaddr_in)) == -1)
        {



            FUNC_19(1);
            continue;
        }

        if (FUNC_18(VAR_19, VAR_11, VAR_17, VAR_3) == -1)
        {



            FUNC_19(1);
            continue;
        }

        FUNC_7(VAR_2, VAR_19, VAR_4 | FUNC_7(VAR_1, VAR_19, 0));
        FUNC_2(&VAR_22);
        FUNC_1(VAR_19, &VAR_22);

        VAR_23.tv_sec = 5;
        VAR_23.tv_usec = 0;
        VAR_24 = FUNC_17(VAR_19 + 1, &VAR_22, ((void*)0), ((void*)0), &VAR_23);

        if (VAR_24 == -1)
        {



            break;
        }
        else if (VAR_24 == 0)
        {



            continue;
        }
        else if (FUNC_0(VAR_19, &VAR_22))
        {



            int VAR_25 = FUNC_13(VAR_19, VAR_12, sizeof (VAR_12), VAR_3, ((void*)0), ((void*)0));
            char *VAR_26;
            struct dnsans *VAR_27;
            uint16_t VAR_28;
            int VAR_29;

            if (VAR_25 < (sizeof (struct dnshdr) + FUNC_21(VAR_14) + 1 + sizeof (struct dns_question)))
                continue;

            VAR_13 = (struct dnshdr *)VAR_12;
            VAR_14 = (char *)(VAR_13 + 1);
            VAR_15 = (struct dns_question *)(VAR_14 + FUNC_21(VAR_14) + 1);
            VAR_26 = (char *)(VAR_15 + 1);

            if (VAR_13->id != VAR_21)
                continue;
            if (VAR_13->ancount == 0)
                continue;

            VAR_28 = FUNC_9(VAR_13->ancount);
            while (VAR_28-- > 0)
            {
                struct dns_resource *VAR_30 = ((void*)0);

                FUNC_16(VAR_26, VAR_12, &VAR_29);
                VAR_26 = VAR_26 + VAR_29;

                VAR_30 = (struct dns_resource *)VAR_26;
                VAR_26 = VAR_26 + sizeof(struct dns_resource);

                if (VAR_30->type == FUNC_8(VAR_6) && VAR_30->_class == FUNC_8(VAR_5))
                {
                    if (FUNC_9(VAR_30->data_len) == 4)
                    {
                        uint32_t *VAR_31;
                        uint8_t VAR_32[4];
                        for(VAR_20 = 0; VAR_20 < 4; VAR_20++)
                            VAR_32[VAR_20] = VAR_26[VAR_20];

                        VAR_31 = (uint32_t *)VAR_32;

                        VAR_10->addrs = FUNC_12(VAR_10->addrs, (VAR_10->addrs_len + 1) * sizeof (ipv4_t));
                        VAR_10->addrs[VAR_10->addrs_len++] = (*VAR_31);



                    }

                    VAR_26 = VAR_26 + FUNC_9(VAR_30->data_len);
                } else {
                    FUNC_16(VAR_26, VAR_12, &VAR_29);
                    VAR_26 = VAR_26 + VAR_29;
                }
            }
        }

        break;
    }

    FUNC_5(VAR_19);





    if (VAR_10->addrs_len > 0)
        return VAR_10;
    else
    {
        FUNC_15(VAR_10);
        return ((void*)0);
    }
}
