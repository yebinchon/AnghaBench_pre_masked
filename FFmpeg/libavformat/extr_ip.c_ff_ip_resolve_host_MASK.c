
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_socktype; int ai_family; int ai_flags; int member_0; } ;
typedef int sport ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*,char const*,char const*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_3 (char*,int,char*,int) ;

struct addrinfo *FUNC_4(void *VAR_1,
                                    const char *VAR_2, int VAR_3,
                                    int VAR_4, int VAR_5, int VAR_6)
{
    struct addrinfo VAR_7 = { 0 }, *VAR_8 = 0;
    int VAR_9;
    char VAR_10[16];
    const char *VAR_11 = 0, *VAR_12 = "0";

    if (VAR_3 > 0) {
        FUNC_3(VAR_10, sizeof(VAR_10), "%d", VAR_3);
        VAR_12 = VAR_10;
    }
    if ((VAR_2) && (VAR_2[0] != '\0') && (VAR_2[0] != '?')) {
        VAR_11 = VAR_2;
    }
    VAR_7.ai_socktype = VAR_4;
    VAR_7.ai_family = VAR_5;
    VAR_7.ai_flags = VAR_6;
    if ((VAR_9 = FUNC_2(VAR_11, VAR_12, &VAR_7, &VAR_8))) {
        VAR_8 = ((void*)0);
        FUNC_0(VAR_1, VAR_0, "getaddrinfo(%s, %s): %s\n",
               VAR_11 ? VAR_11 : "unknown",
               VAR_12,
               FUNC_1(VAR_9));
    }

    return VAR_8;
}
