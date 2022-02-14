
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {struct addrinfo* ai_next; int ai_addrlen; int ai_addr; } ;
typedef int portbuf ;
typedef int hostbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,char*,char const*,...) ;
 int FUNC_1 (int ,int ,char*,int,char*,int,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_3, const struct addrinfo *VAR_4,
                               const char *VAR_5)
{
    char VAR_6[100], VAR_7[20];
    FUNC_0(VAR_3, VAR_0, "%s:\n", VAR_5);
    while (VAR_4) {
        FUNC_1(VAR_4->ai_addr, VAR_4->ai_addrlen,
                    VAR_6, sizeof(VAR_6), VAR_7, sizeof(VAR_7),
                    VAR_1 | VAR_2);
        FUNC_0(VAR_3, VAR_0, "Address %s port %s\n", VAR_6, VAR_7);
        VAR_4 = VAR_4->ai_next;
    }
}
