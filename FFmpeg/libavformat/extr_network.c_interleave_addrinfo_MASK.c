
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {scalar_t__ ai_family; struct addrinfo* ai_next; } ;



__attribute__((used)) static void FUNC_0(struct addrinfo *VAR_0)
{
    struct addrinfo **VAR_1 = &VAR_0->ai_next;
    while (*VAR_1) {
        struct addrinfo *VAR_2 = *VAR_1;

        if (VAR_2->ai_family == VAR_0->ai_family) {
            VAR_1 = &VAR_2->ai_next;
            continue;
        }
        if (VAR_2 == VAR_0->ai_next) {


            VAR_0 = VAR_2;
            VAR_1 = &VAR_0->ai_next;
            continue;
        }

        *VAR_1 = VAR_2->ai_next;

        VAR_2->ai_next = VAR_0->ai_next;
        VAR_0->ai_next = VAR_2;





        VAR_0 = VAR_2->ai_next;
    }
}
