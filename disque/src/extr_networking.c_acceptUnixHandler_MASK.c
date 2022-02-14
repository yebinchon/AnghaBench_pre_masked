
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void aeEventLoop ;
struct TYPE_2__ {int unixsocket; int neterr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_3 (int ,char*,int ) ;

void FUNC_4(aeEventLoop *VAR_8, int VAR_9, void *VAR_10, int VAR_11) {
    int VAR_12, VAR_13 = VAR_5;
    FUNC_0(VAR_8);
    FUNC_0(VAR_11);
    FUNC_0(VAR_10);

    while(VAR_13--) {
        VAR_12 = FUNC_2(VAR_7.neterr, VAR_9);
        if (VAR_12 == VAR_0) {
            if (VAR_6 != VAR_2)
                FUNC_3(VAR_4,
                    "Accepting client connection: %s", VAR_7.neterr);
            return;
        }
        FUNC_3(VAR_3,"Accepted connection to %s", VAR_7.unixsocket);
        FUNC_1(VAR_12,VAR_1);
    }
}
