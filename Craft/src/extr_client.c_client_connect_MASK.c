
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct in_addr {int s_addr; } ;
struct hostent {scalar_t__* h_addr_list; } ;
typedef int address ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 struct hostent* FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sockaddr_in*,int ,int) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 int FUNC_6 (int ,int ,int ) ;

void FUNC_7(char *VAR_4, int VAR_5) {
    if (!VAR_2) {
        return;
    }
    struct hostent *VAR_6;
    struct sockaddr_in VAR_7;
    if ((VAR_6 = FUNC_2(VAR_4)) == 0) {
        FUNC_5("gethostbyname");
        FUNC_1(1);
    }
    FUNC_4(&VAR_7, 0, sizeof(VAR_7));
    VAR_7.sin_family = VAR_0;
    VAR_7.sin_addr.s_addr = ((struct in_addr *)(VAR_6->h_addr_list[0]))->s_addr;
    VAR_7.sin_port = FUNC_3(VAR_5);
    if ((VAR_3 = FUNC_6(VAR_0, VAR_1, 0)) == -1) {
        FUNC_5("socket");
        FUNC_1(1);
    }
    if (FUNC_0(VAR_3, (struct sockaddr *)&VAR_7, sizeof(VAR_7)) == -1) {
        FUNC_5("connect");
        FUNC_1(1);
    }
}
