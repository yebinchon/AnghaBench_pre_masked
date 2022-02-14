
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct TYPE_4__ {int port; int ip; } ;
typedef TYPE_1__ clusterNode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (char*,int) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int VAR_8 ;
 int FUNC_3 (scalar_t__,void*,char*,int) ;
 scalar_t__ FUNC_4 (scalar_t__,char*,int *) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*,int ,int) ;

int FUNC_7(char *VAR_9, int VAR_10) {
    clusterNode *VAR_11;
    char VAR_12[VAR_7];
    struct sockaddr_storage VAR_13;


    if (FUNC_4(VAR_0,VAR_9,
            &(((struct sockaddr_in *)&VAR_13)->sin_addr)))
    {
        VAR_13.ss_family = VAR_0;
    } else if (FUNC_4(VAR_1,VAR_9,
            &(((struct sockaddr_in6 *)&VAR_13)->sin6_addr)))
    {
        VAR_13.ss_family = VAR_1;
    } else {
        VAR_8 = VAR_6;
        return 0;
    }


    if (VAR_10 <= 0 || VAR_10 > (65535-VAR_4)) {
        VAR_8 = VAR_6;
        return 0;
    }



    FUNC_6(VAR_12,0,VAR_7);
    if (VAR_13.ss_family == VAR_0)
        FUNC_3(VAR_0,
            (void*)&(((struct sockaddr_in *)&VAR_13)->sin_addr),
            VAR_12,VAR_7);
    else
        FUNC_3(VAR_1,
            (void*)&(((struct sockaddr_in6 *)&VAR_13)->sin6_addr),
            VAR_12,VAR_7);

    if (FUNC_1(VAR_12,VAR_10)) {
        VAR_8 = VAR_5;
        return 0;
    }




    VAR_11 = FUNC_2(((void*)0),VAR_2|VAR_3);
    FUNC_5(VAR_11->ip,VAR_12,sizeof(VAR_11->ip));
    VAR_11->port = VAR_10;
    FUNC_0(VAR_11);
    return 1;
}
