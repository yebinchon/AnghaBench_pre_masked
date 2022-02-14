
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resolv_entries {struct resolv_entries* addrs; } ;


 int FUNC_0 (struct resolv_entries*) ;

void FUNC_1(struct resolv_entries *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;
    if (VAR_0->addrs != ((void*)0))
        FUNC_0(VAR_0->addrs);
    FUNC_0(VAR_0);
}
