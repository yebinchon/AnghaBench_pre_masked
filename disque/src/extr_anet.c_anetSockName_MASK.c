
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sa ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (scalar_t__,void*,char*,size_t) ;
 int FUNC_2 (int ) ;

int FUNC_3(int VAR_2, char *VAR_3, size_t VAR_4, int *VAR_5) {
    struct sockaddr_storage VAR_6;
    socklen_t VAR_7 = sizeof(VAR_6);

    if (FUNC_0(VAR_2,(struct sockaddr*)&VAR_6,&VAR_7) == -1) {
        if (VAR_5) *VAR_5 = 0;
        VAR_3[0] = '?';
        VAR_3[1] = '\0';
        return -1;
    }
    if (VAR_6.ss_family == VAR_0) {
        struct sockaddr_in *VAR_8 = (struct sockaddr_in *)&VAR_6;
        if (VAR_3) FUNC_1(VAR_0,(void*)&(VAR_8->sin_addr),VAR_3,VAR_4);
        if (VAR_5) *VAR_5 = FUNC_2(VAR_8->sin_port);
    } else {
        struct sockaddr_in6 *VAR_9 = (struct sockaddr_in6 *)&VAR_6;
        if (VAR_3) FUNC_1(VAR_1,(void*)&(VAR_9->sin6_addr),VAR_3,VAR_4);
        if (VAR_5) *VAR_5 = FUNC_2(VAR_9->sin6_port);
    }
    return 0;
}
