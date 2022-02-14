
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_socktype; int ai_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int const) ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (char*,char*,struct addrinfo const*,struct addrinfo**) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(void)
{
    const struct addrinfo VAR_2 = {
        .ai_family = VAR_0,
        .ai_socktype = VAR_1,
    };
    struct addrinfo *VAR_3 = ((void*)0);

    const int VAR_4 = FUNC_3("localhost", "80", &VAR_2, &VAR_3);
    FUNC_1(0, VAR_4);
    FUNC_2(VAR_3);

    const int VAR_5 = FUNC_4(VAR_3->ai_family, VAR_3->ai_socktype, 0);
    FUNC_0(VAR_5 >= 0);

    return VAR_5;
}
