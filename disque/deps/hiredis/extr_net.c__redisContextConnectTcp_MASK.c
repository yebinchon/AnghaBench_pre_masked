
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct addrinfo {int ai_addrlen; int ai_addr; struct addrinfo* ai_next; int ai_protocol; int ai_socktype; int ai_family; } ;
struct TYPE_8__ {int flags; int fd; } ;
typedef TYPE_1__ redisContext ;
typedef int hints ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int,int ,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (struct addrinfo*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_6 (struct addrinfo*,int ,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,struct timeval const*) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (char*,int,char*,...) ;
 int FUNC_12 (int ,int ,int ) ;
 char* FUNC_13 (scalar_t__) ;

__attribute__((used)) static int FUNC_14(redisContext *VAR_11, const char *VAR_12, int VAR_13,
                                   const struct timeval *VAR_14,
                                   const char *VAR_15) {
    int VAR_16, VAR_17;
    char VAR_18[6];
    struct addrinfo VAR_19, *VAR_20, *VAR_21, *VAR_22, *VAR_23;
    int VAR_24 = (VAR_11->flags & VAR_4);

    FUNC_11(VAR_18, 6, "%d", VAR_13);
    FUNC_6(&VAR_19,0,sizeof(VAR_19));
    VAR_19.ai_family = VAR_0;
    VAR_19.ai_socktype = VAR_9;






    if ((VAR_17 = FUNC_5(VAR_12,VAR_18,&VAR_19,&VAR_20)) != 0) {
         VAR_19.ai_family = VAR_1;
         if ((VAR_17 = FUNC_5(VAR_12,VAR_18,&VAR_19,&VAR_20)) != 0) {
            FUNC_0(VAR_11,VAR_7,FUNC_4(VAR_17));
            return VAR_6;
        }
    }
    for (VAR_22 = VAR_20; VAR_22 != ((void*)0); VAR_22 = VAR_22->ai_next) {
        if ((VAR_16 = FUNC_12(VAR_22->ai_family,VAR_22->ai_socktype,VAR_22->ai_protocol)) == -1)
            continue;

        VAR_11->fd = VAR_16;
        if (FUNC_9(VAR_11,0) != VAR_8)
            goto error;
        if (VAR_15) {
            int VAR_25 = 0;

            if ((VAR_17 = FUNC_5(VAR_15, ((void*)0), &VAR_19, &VAR_21)) != 0) {
                char VAR_26[128];
                FUNC_11(VAR_26,sizeof(VAR_26),"Can't get addr: %s",FUNC_4(VAR_17));
                FUNC_0(VAR_11,VAR_7,VAR_26);
                goto error;
            }
            for (VAR_23 = VAR_21; VAR_23 != ((void*)0); VAR_23 = VAR_23->ai_next) {
                if (FUNC_1(VAR_16,VAR_23->ai_addr,VAR_23->ai_addrlen) != -1) {
                    VAR_25 = 1;
                    break;
                }
            }
            FUNC_3(VAR_21);
            if (!VAR_25) {
                char VAR_27[128];
                FUNC_11(VAR_27,sizeof(VAR_27),"Can't bind socket: %s",FUNC_13(VAR_10));
                FUNC_0(VAR_11,VAR_7,VAR_27);
                goto error;
            }
        }
        if (FUNC_2(VAR_16,VAR_22->ai_addr,VAR_22->ai_addrlen) == -1) {
            if (VAR_10 == VAR_2) {
                FUNC_7(VAR_11);
                continue;
            } else if (VAR_10 == VAR_3 && !VAR_24) {

            } else {
                if (FUNC_8(VAR_11,VAR_14) != VAR_8)
                    goto error;
            }
        }
        if (VAR_24 && FUNC_9(VAR_11,1) != VAR_8)
            goto error;
        if (FUNC_10(VAR_11) != VAR_8)
            goto error;

        VAR_11->flags |= VAR_5;
        VAR_17 = VAR_8;
        goto end;
    }
    if (VAR_22 == ((void*)0)) {
        char VAR_28[128];
        FUNC_11(VAR_28,sizeof(VAR_28),"Can't create socket: %s",FUNC_13(VAR_10));
        FUNC_0(VAR_11,VAR_7,VAR_28);
        goto error;
    }

error:
    VAR_17 = VAR_6;
end:
    FUNC_3(VAR_20);
    return VAR_17;
}
