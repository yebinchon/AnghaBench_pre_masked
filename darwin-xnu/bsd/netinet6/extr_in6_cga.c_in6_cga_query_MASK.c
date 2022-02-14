
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in6_cga_nodecfg {int cga_prepare; int cga_pubkey; } ;
struct TYPE_2__ {int cga_prepare; int cga_pubkey; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct in6_cga_nodecfg *VAR_2)
{
 FUNC_0(VAR_2 != ((void*)0));
 FUNC_1(VAR_0);

 VAR_2->cga_pubkey = VAR_1.cga_pubkey;
 VAR_2->cga_prepare = VAR_1.cga_prepare;
}
