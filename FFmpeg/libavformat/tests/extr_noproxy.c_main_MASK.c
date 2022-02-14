
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

int FUNC_1(void)
{
    FUNC_0(((void*)0), "domain.com");
    FUNC_0("example.com domain.com", "domain.com");
    FUNC_0("example.com other.com", "domain.com");
    FUNC_0("example.com,domain.com", "domain.com");
    FUNC_0("example.com,domain.com", "otherdomain.com");
    FUNC_0("example.com, *.domain.com", "sub.domain.com");
    FUNC_0("example.com, *.domain.com", "domain.com");
    FUNC_0("example.com, .domain.com", "domain.com");
    FUNC_0("*", "domain.com");
    return 0;
}
