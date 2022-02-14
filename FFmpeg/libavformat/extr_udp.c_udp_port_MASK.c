
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int sbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sockaddr*,int,int *,int ,char*,int,int ) ;
 int FUNC_3 (char*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct sockaddr_storage *VAR_2, int VAR_3)
{
    char VAR_4[sizeof(int)*3+1];
    int VAR_5;

    if ((VAR_5 = FUNC_2((struct sockaddr *)VAR_2, VAR_3, ((void*)0), 0, VAR_4, sizeof(VAR_4), VAR_1)) != 0) {
        FUNC_0(((void*)0), VAR_0, "getnameinfo: %s\n", FUNC_1(VAR_5));
        return -1;
    }

    return FUNC_3(VAR_4, ((void*)0), 10);
}
