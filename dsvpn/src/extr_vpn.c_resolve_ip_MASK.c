
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {scalar_t__ ai_family; int ai_addrlen; int * ai_addr; int ai_socktype; scalar_t__ ai_flags; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,char const*,char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char const*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_3 (int *,int ,char*,int ,int *,int ,int) ;
 int FUNC_4 (struct addrinfo*,int ,int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(char *VAR_7, size_t VAR_8, const char *VAR_9)
{
    struct addrinfo VAR_10, *VAR_11;
    int VAR_12;

    FUNC_4(&VAR_10, 0, sizeof VAR_10);
    VAR_10.ai_flags = 0;
    VAR_10.ai_family = VAR_2;
    VAR_10.ai_socktype = VAR_5;
    VAR_10.ai_addr = ((void*)0);
    if ((VAR_12 = FUNC_2(VAR_9, ((void*)0), &VAR_10, &VAR_11)) != 0 ||
        (VAR_11->ai_family != VAR_0 && VAR_11->ai_family != VAR_1) ||
        (VAR_12 = FUNC_3(VAR_11->ai_addr, VAR_11->ai_addrlen, VAR_7, (socklen_t) VAR_8, ((void*)0), 0,
                           VAR_3 | VAR_4)) != 0) {
        FUNC_0(VAR_6, "Unable to resolve [%s]: [%s]\n", VAR_9, FUNC_1(VAR_12));
        return -1;
    }
    return 0;
}
