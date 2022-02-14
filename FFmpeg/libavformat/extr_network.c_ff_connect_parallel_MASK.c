
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pollfd {int fd; int deadline_us; TYPE_1__* addr; scalar_t__ revents; int events; } ;
struct addrinfo {int ai_addrlen; int ai_addr; } ;
struct ConnectionAttempt {int fd; int deadline_us; TYPE_1__* addr; scalar_t__ revents; int events; } ;
typedef int socklen_t ;
typedef int portbuf ;
typedef int last_err ;
typedef int int64_t ;
typedef int hostbuf ;
typedef int errbuf ;
struct TYPE_8__ {char* filename; int interrupt_callback; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_7__ {int ai_addrlen; int ai_addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct pollfd*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,int ,char*,char*,...) ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (struct pollfd*,int,int,int *) ;
 int FUNC_10 (int ,int ,char*,int,char*,int,int) ;
 scalar_t__ FUNC_11 (int,int ,int ,int*,int*) ;
 int FUNC_12 (struct addrinfo*) ;
 int FUNC_13 (struct pollfd*,struct pollfd*,int) ;
 int FUNC_14 (TYPE_2__*,struct addrinfo*,char*) ;
 int FUNC_15 (struct pollfd*,struct addrinfo**,int,TYPE_2__*,void (*) (void*,int),void*) ;

int FUNC_16(struct addrinfo *VAR_12, int VAR_13,
                        int VAR_14, URLContext *VAR_15, int *VAR_16,
                        void (*VAR_17)(void *, int), void *VAR_18)
{
    struct ConnectionAttempt VAR_19[3];
    struct pollfd VAR_20[3];
    int VAR_21 = 0, VAR_22, VAR_23;
    int64_t VAR_24 = FUNC_4(), VAR_25;
    int VAR_26 = FUNC_0(VAR_4);
    socklen_t VAR_27;
    char VAR_28[100], VAR_29[100], VAR_30[20];

    if (VAR_14 > FUNC_2(VAR_19))
        VAR_14 = FUNC_2(VAR_19);

    FUNC_14(VAR_15, VAR_12, "Original list of addresses");



    FUNC_12(VAR_12);
    FUNC_14(VAR_15, VAR_12, "Interleaved list of addresses");

    while (VAR_21 > 0 || VAR_12) {

        if (VAR_21 < VAR_14 && VAR_12) {
            FUNC_10(VAR_12->ai_addr, VAR_12->ai_addrlen,
                        VAR_29, sizeof(VAR_29), VAR_30, sizeof(VAR_30),
                        VAR_7 | VAR_8);
            FUNC_5(VAR_15, VAR_2, "Starting connection attempt to %s port %s\n",
                                      VAR_29, VAR_30);
            VAR_26 = FUNC_15(&VAR_19[VAR_21], &VAR_12,
                                             VAR_13, VAR_15,
                                             VAR_17, VAR_18);
            if (VAR_26 < 0) {
                FUNC_6(VAR_26, VAR_28, sizeof(VAR_28));
                FUNC_5(VAR_15, VAR_2, "Connected attempt failed: %s\n",
                                          VAR_28);
                continue;
            }
            if (VAR_26 > 0) {
                for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++)
                    FUNC_7(VAR_19[VAR_22].fd);
                *VAR_16 = VAR_19[VAR_21].fd;
                return 0;
            }
            VAR_20[VAR_21].fd = VAR_19[VAR_21].fd;
            VAR_20[VAR_21].events = VAR_9;
            VAR_24 = FUNC_4() + VAR_6 * 1000;
            VAR_21++;
        }

        FUNC_3(VAR_21 > 0);


        VAR_25 = VAR_19[0].deadline_us;

        if (VAR_21 < VAR_14 && VAR_12)
            VAR_25 = FUNC_1(VAR_25, VAR_24);
        VAR_26 = FUNC_9(VAR_20, VAR_21,
                                     (VAR_25 - FUNC_4())/1000,
                                     &VAR_15->interrupt_callback);
        if (VAR_26 < 0 && VAR_26 != FUNC_0(VAR_5))
            break;


        for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++) {
            VAR_26 = 0;
            if (VAR_20[VAR_22].revents) {


                VAR_27 = sizeof(VAR_26);
                if (FUNC_11(VAR_19[VAR_22].fd, VAR_10, VAR_11, &VAR_26, &VAR_27))
                    VAR_26 = FUNC_8();
                else if (VAR_26 != 0)
                    VAR_26 = FUNC_0(VAR_26);
                if (VAR_26 == 0) {


                    for (VAR_23 = 0; VAR_23 < VAR_21; VAR_23++)
                        if (VAR_23 != VAR_22)
                            FUNC_7(VAR_19[VAR_23].fd);
                    *VAR_16 = VAR_19[VAR_22].fd;
                    FUNC_10(VAR_19[VAR_22].addr->ai_addr, VAR_19[VAR_22].addr->ai_addrlen,
                                VAR_29, sizeof(VAR_29), VAR_30, sizeof(VAR_30),
                                VAR_7 | VAR_8);
                    FUNC_5(VAR_15, VAR_2, "Successfully connected to %s port %s\n",
                                              VAR_29, VAR_30);
                    return 0;
                }
            }
            if (VAR_19[VAR_22].deadline_us < FUNC_4() && !VAR_26)
                VAR_26 = FUNC_0(VAR_5);
            if (!VAR_26)
                continue;



            FUNC_10(VAR_19[VAR_22].addr->ai_addr, VAR_19[VAR_22].addr->ai_addrlen,
                        VAR_29, sizeof(VAR_29), VAR_30, sizeof(VAR_30),
                        VAR_7 | VAR_8);
            FUNC_6(VAR_26, VAR_28, sizeof(VAR_28));
            FUNC_5(VAR_15, VAR_2, "Connection attempt to %s port %s "
                                      "failed: %s\n", VAR_29, VAR_30, VAR_28);
            FUNC_7(VAR_19[VAR_22].fd);
            FUNC_13(&VAR_19[VAR_22], &VAR_19[VAR_22 + 1],
                    (VAR_21 - VAR_22 - 1) * sizeof(*VAR_19));
            FUNC_13(&VAR_20[VAR_22], &VAR_20[VAR_22 + 1],
                    (VAR_21 - VAR_22 - 1) * sizeof(*VAR_20));
            VAR_22--;
            VAR_21--;
        }
    }
    for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++)
        FUNC_7(VAR_19[VAR_22].fd);
    if (VAR_26 >= 0)
        VAR_26 = FUNC_0(VAR_3);
    if (VAR_26 != VAR_0) {
        FUNC_6(VAR_26, VAR_28, sizeof(VAR_28));
        FUNC_5(VAR_15, VAR_1, "Connection to %s failed: %s\n",
               VAR_15->filename, VAR_28);
    }
    return VAR_26;
}
