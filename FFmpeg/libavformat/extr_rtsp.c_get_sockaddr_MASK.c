
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_flags; int member_0; } ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ,char*,char const*,int ) ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (struct sockaddr_storage*,int ,int ) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_2,
                        const char *VAR_3, struct sockaddr_storage *VAR_4)
{
    struct addrinfo VAR_5 = { 0 }, *VAR_6 = ((void*)0);
    int VAR_7;

    VAR_5.ai_flags = VAR_0;
    if ((VAR_7 = FUNC_4(VAR_3, ((void*)0), &VAR_5, &VAR_6))) {
        FUNC_1(VAR_2, VAR_1, "getaddrinfo(%s): %s\n",
               VAR_3,
               FUNC_3(VAR_7));
        return -1;
    }
    FUNC_5(VAR_4, VAR_6->ai_addr, FUNC_0(sizeof(*VAR_4), VAR_6->ai_addrlen));
    FUNC_2(VAR_6);
    return 0;
}
