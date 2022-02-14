
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * tqe_next; int * tqe_prev; } ;
struct pf_pooladdr {char* ifname; int * kif; TYPE_1__ entries; } ;


 int FUNC_0 (struct pf_pooladdr*,struct pf_pooladdr*,int) ;

__attribute__((used)) static void
FUNC_1(struct pf_pooladdr *VAR_0, struct pf_pooladdr *VAR_1)
{
 FUNC_0(VAR_0, VAR_1, sizeof (struct pf_pooladdr));

 VAR_1->entries.tqe_prev = ((void*)0);
 VAR_1->entries.tqe_next = ((void*)0);
 VAR_1->ifname[sizeof (VAR_1->ifname) - 1] = '\0';
 VAR_1->kif = ((void*)0);
}
