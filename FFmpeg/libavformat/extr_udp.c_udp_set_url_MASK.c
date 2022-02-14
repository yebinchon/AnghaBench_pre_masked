
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct addrinfo {int ai_addrlen; int ai_addr; } ;
typedef int URLContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct addrinfo* FUNC_1 (int *,char const*,int,int ,int ,int ) ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (struct sockaddr_storage*,int ,int) ;

__attribute__((used)) static int FUNC_4(URLContext *VAR_3,
                       struct sockaddr_storage *VAR_4,
                       const char *VAR_5, int VAR_6)
{
    struct addrinfo *VAR_7;
    int VAR_8;

    VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_6, VAR_2, VAR_0, 0);
    if (!VAR_7) return FUNC_0(VAR_1);
    FUNC_3(VAR_4, VAR_7->ai_addr, VAR_7->ai_addrlen);
    VAR_8 = VAR_7->ai_addrlen;
    FUNC_2(VAR_7);

    return VAR_8;
}
