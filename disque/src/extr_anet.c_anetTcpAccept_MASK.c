
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
 int VAR_2 ;
 int FUNC_0 (char*,int,struct sockaddr*,int*) ;
 int FUNC_1 (scalar_t__,void*,char*,size_t) ;
 int FUNC_2 (int ) ;

int FUNC_3(char *VAR_3, int VAR_4, char *VAR_5, size_t VAR_6, int *VAR_7) {
    int VAR_8;
    struct sockaddr_storage VAR_9;
    socklen_t VAR_10 = sizeof(VAR_9);
    if ((VAR_8 = FUNC_0(VAR_3,VAR_4,(struct sockaddr*)&VAR_9,&VAR_10)) == -1)
        return VAR_2;

    if (VAR_9.ss_family == VAR_0) {
        struct sockaddr_in *VAR_11 = (struct sockaddr_in *)&VAR_9;
        if (VAR_5) FUNC_1(VAR_0,(void*)&(VAR_11->sin_addr),VAR_5,VAR_6);
        if (VAR_7) *VAR_7 = FUNC_2(VAR_11->sin_port);
    } else {
        struct sockaddr_in6 *VAR_12 = (struct sockaddr_in6 *)&VAR_9;
        if (VAR_5) FUNC_1(VAR_1,(void*)&(VAR_12->sin6_addr),VAR_5,VAR_6);
        if (VAR_7) *VAR_7 = FUNC_2(VAR_12->sin6_port);
    }
    return VAR_8;
}
