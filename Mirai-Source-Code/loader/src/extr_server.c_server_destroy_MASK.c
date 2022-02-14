
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server {struct server* workers; struct server* bind_addrs; } ;


 int FUNC_0 (struct server*) ;

void FUNC_1(struct server *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;
    if (VAR_0->bind_addrs != ((void*)0))
        FUNC_0(VAR_0->bind_addrs);
    if (VAR_0->workers != ((void*)0))
        FUNC_0(VAR_0->workers);
    FUNC_0(VAR_0);
}
