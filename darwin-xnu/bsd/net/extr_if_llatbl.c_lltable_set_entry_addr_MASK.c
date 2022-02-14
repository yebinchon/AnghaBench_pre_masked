
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llentry {int r_flags; int la_flags; int ll_addr; } ;
struct ifnet {int if_addrlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int *,int ) ;

void
FUNC_1(struct ifnet *VAR_2, struct llentry *VAR_3,
    const char *VAR_4)
{
 FUNC_0(VAR_4, &VAR_3->ll_addr, VAR_2->if_addrlen);
 VAR_3->la_flags |= VAR_0;
 VAR_3->r_flags |= VAR_1;
}
