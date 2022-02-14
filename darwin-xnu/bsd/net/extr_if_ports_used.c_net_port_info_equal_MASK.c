
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union in_addr_4_6 {int dummy; } in_addr_4_6 ;
struct net_port_info {scalar_t__ npi_if_index; scalar_t__ npi_local_port; scalar_t__ npi_foreign_port; scalar_t__ npi_owner_pid; scalar_t__ npi_effective_pid; scalar_t__ npi_flags; int npi_foreign_addr_; int npi_local_addr_; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;

__attribute__((used)) static bool
FUNC_2(const struct net_port_info *VAR_0,
    const struct net_port_info *VAR_1)
{
 FUNC_0(VAR_0 != ((void*)0) && VAR_1 != ((void*)0));

 if (VAR_0->npi_if_index == VAR_1->npi_if_index &&
     VAR_0->npi_local_port == VAR_1->npi_local_port &&
     VAR_0->npi_foreign_port == VAR_1->npi_foreign_port &&
     VAR_0->npi_owner_pid == VAR_1->npi_owner_pid &&
     VAR_0->npi_effective_pid == VAR_1->npi_effective_pid &&
     VAR_0->npi_flags == VAR_1->npi_flags &&
     FUNC_1(&VAR_0->npi_local_addr_, &VAR_1->npi_local_addr_,
         sizeof(union in_addr_4_6)) == 0 &&
     FUNC_1(&VAR_0->npi_foreign_addr_, &VAR_1->npi_foreign_addr_,
         sizeof(union in_addr_4_6)) == 0) {
  return (1);
 }
 return (0);
}
