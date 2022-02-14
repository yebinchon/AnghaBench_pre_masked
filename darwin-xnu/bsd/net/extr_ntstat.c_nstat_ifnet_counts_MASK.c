
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nstat_ifnet_cookie {struct ifnet* ifp; } ;
struct nstat_counts {scalar_t__ nstat_cell_txbytes; scalar_t__ nstat_cell_rxbytes; int nstat_txbytes; int nstat_txpackets; int nstat_rxbytes; int nstat_rxpackets; } ;
struct ifnet {int if_obytes; int if_opackets; int if_ibytes; int if_ipackets; } ;
typedef scalar_t__ nstat_provider_cookie_t ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (struct nstat_counts*,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static errno_t
FUNC_2(
 nstat_provider_cookie_t VAR_1,
 struct nstat_counts *VAR_2,
 int *VAR_3)
{
 struct nstat_ifnet_cookie *VAR_4 =
     (struct nstat_ifnet_cookie *)VAR_1;
 struct ifnet *VAR_5 = VAR_4->ifp;

 if (VAR_3) *VAR_3 = 0;


 if (FUNC_1(VAR_1))
 {
  if (VAR_3) *VAR_3 = 1;
  return VAR_0;
 }

 FUNC_0(VAR_2, sizeof(*VAR_2));
 VAR_2->nstat_rxpackets = VAR_5->if_ipackets;
 VAR_2->nstat_rxbytes = VAR_5->if_ibytes;
 VAR_2->nstat_txpackets = VAR_5->if_opackets;
 VAR_2->nstat_txbytes = VAR_5->if_obytes;
 VAR_2->nstat_cell_rxbytes = VAR_2->nstat_cell_txbytes = 0;
 return 0;
}
