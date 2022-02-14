
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sa ;


 int VAR_0 ;
 int FUNC_0 (char*,int,struct sockaddr*,int*) ;

int FUNC_1(char *VAR_1, int VAR_2) {
    int VAR_3;
    struct sockaddr_un VAR_4;
    socklen_t VAR_5 = sizeof(VAR_4);
    if ((VAR_3 = FUNC_0(VAR_1,VAR_2,(struct sockaddr*)&VAR_4,&VAR_5)) == -1)
        return VAR_0;

    return VAR_3;
}
