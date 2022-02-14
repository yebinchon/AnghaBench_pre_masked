
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ipfd_count; int* ipfd; int sofd; int cfd_count; int* cfd; scalar_t__ unixsocket; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(int VAR_2) {
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1.ipfd_count; VAR_3++) FUNC_0(VAR_1.ipfd[VAR_3]);
    if (VAR_1.sofd != -1) FUNC_0(VAR_1.sofd);
    for (VAR_3 = 0; VAR_3 < VAR_1.cfd_count; VAR_3++) FUNC_0(VAR_1.cfd[VAR_3]);
    if (VAR_2 && VAR_1.unixsocket) {
        FUNC_1(VAR_0,"Removing the unix socket file.");
        FUNC_2(VAR_1.unixsocket);
    }
}
