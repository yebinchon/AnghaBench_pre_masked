
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
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (scalar_t__,void*,char*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,size_t) ;

int FUNC_4(int VAR_3, char *VAR_4, size_t VAR_5, int *VAR_6) {
    struct sockaddr_storage VAR_7;
    socklen_t VAR_8 = sizeof(VAR_7);

    if (FUNC_0(VAR_3,(struct sockaddr*)&VAR_7,&VAR_8) == -1) goto error;
    if (VAR_5 == 0) goto error;

    if (VAR_7.ss_family == VAR_0) {
        struct sockaddr_in *VAR_9 = (struct sockaddr_in *)&VAR_7;
        if (VAR_4) FUNC_1(VAR_0,(void*)&(VAR_9->sin_addr),VAR_4,VAR_5);
        if (VAR_6) *VAR_6 = FUNC_2(VAR_9->sin_port);
    } else if (VAR_7.ss_family == VAR_1) {
        struct sockaddr_in6 *VAR_10 = (struct sockaddr_in6 *)&VAR_7;
        if (VAR_4) FUNC_1(VAR_1,(void*)&(VAR_10->sin6_addr),VAR_4,VAR_5);
        if (VAR_6) *VAR_6 = FUNC_2(VAR_10->sin6_port);
    } else if (VAR_7.ss_family == VAR_2) {
        if (VAR_4) FUNC_3(VAR_4,"/unixsocket",VAR_5);
        if (VAR_6) *VAR_6 = 0;
    } else {
        goto error;
    }
    return 0;

error:
    if (VAR_4) {
        if (VAR_5 >= 2) {
            VAR_4[0] = '?';
            VAR_4[1] = '\0';
        } else if (VAR_5 == 1) {
            VAR_4[0] = '\0';
        }
    }
    if (VAR_6) *VAR_6 = 0;
    return -1;
}
