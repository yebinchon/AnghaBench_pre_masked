
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sockaddr_storage {int member_0; } ;
struct addrinfo {int ai_addrlen; int ai_addr; } ;
typedef int source_addr ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void**,int*,int,int *) ;
 int FUNC_2 (char**) ;
 char* FUNC_3 (char const**,char*) ;
 struct addrinfo* FUNC_4 (void*,char*,int ,int ,int ,int ) ;
 int FUNC_5 (struct addrinfo*) ;
 int FUNC_6 (struct sockaddr_storage*,int ,int ) ;

__attribute__((used)) static int FUNC_7(void *VAR_4, const char *VAR_5,
                              struct sockaddr_storage **VAR_6,
                              int *VAR_7)
{
    struct addrinfo *VAR_8 = ((void*)0);



    while (VAR_5 && VAR_5[0]) {
        char* VAR_9 = FUNC_3(&VAR_5, ",");
        if (!VAR_9)
            return FUNC_0(VAR_2);

        VAR_8 = FUNC_4(VAR_4, VAR_9, 0, VAR_3, VAR_0, 0);
        FUNC_2(&VAR_9);

        if (VAR_8) {
            struct sockaddr_storage VAR_10 = {0};
            FUNC_6(&VAR_10, VAR_8->ai_addr, VAR_8->ai_addrlen);
            FUNC_5(VAR_8);
            FUNC_1((void **)VAR_6, VAR_7, sizeof(VAR_10), (uint8_t *)&VAR_10);
            if (!*VAR_6)
                return FUNC_0(VAR_2);
        } else {
            return FUNC_0(VAR_1);
        }

        if (*VAR_5)
            VAR_5++;
    }

    return 0;
}
