
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; } ;
typedef TYPE_1__ clusterLink ;
typedef int cip ;
typedef void aeEventLoop ;
struct TYPE_6__ {int el; int neterr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,int,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int,char*,int,int*) ;
 int VAR_6 ;
 TYPE_1__* FUNC_5 (int *) ;
 scalar_t__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_6 (int ,char*,char*,...) ;

void FUNC_7(aeEventLoop *VAR_9, int VAR_10, void *VAR_11, int VAR_12) {
    int VAR_13, VAR_14;
    int VAR_15 = VAR_4;
    char VAR_16[VAR_5];
    clusterLink *VAR_17;
    FUNC_0(VAR_9);
    FUNC_0(VAR_12);
    FUNC_0(VAR_11);

    while(VAR_15--) {
        VAR_14 = FUNC_4(VAR_8.neterr, VAR_10, VAR_16, sizeof(VAR_16), &VAR_13);
        if (VAR_14 == VAR_1) {
            if (VAR_7 != VAR_2)
                FUNC_6(VAR_3,
                    "Accepting cluster node: %s", VAR_8.neterr);
            return;
        }
        FUNC_3(((void*)0),VAR_14);
        FUNC_2(((void*)0),VAR_14);


        FUNC_6(VAR_3,"Accepted cluster node %s:%d", VAR_16, VAR_13);





        VAR_17 = FUNC_5(((void*)0));
        VAR_17->fd = VAR_14;
        FUNC_1(VAR_8.el,VAR_14,VAR_0,VAR_6,VAR_17);
    }
}
