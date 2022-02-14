
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_socktype; int ai_family; } ;
typedef int hints ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*,unsigned long) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_4 (struct addrinfo*,int ,int) ;
 char* FUNC_5 (char const*,size_t) ;

__attribute__((used)) static esp_err_t FUNC_6(const char *VAR_6, size_t VAR_7, struct addrinfo **VAR_8)
{
    struct addrinfo VAR_9;
    FUNC_4(&VAR_9, 0, sizeof(VAR_9));
    VAR_9.ai_family = VAR_0;
    VAR_9.ai_socktype = VAR_4;

    char *VAR_10 = FUNC_5(VAR_6, VAR_7);
    if (!VAR_10) {
        return VAR_2;
    }

    FUNC_0(VAR_5, "host:%s: strlen %lu", VAR_10, (unsigned long)VAR_7);
    if (FUNC_3(VAR_10, ((void*)0), &VAR_9, VAR_8)) {
        FUNC_1(VAR_5, "couldn't get hostname for :%s:", VAR_10);
        FUNC_2(VAR_10);
        return VAR_1;
    }
    FUNC_2(VAR_10);
    return VAR_3;
}
