
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifbrhostfilter {int ifbrhf_ipsrc; int ifbrhf_hwsrca; int ifbrhf_flags; int ifbrhf_ifsname; } ;
struct bridge_softc {int dummy; } ;
struct TYPE_2__ {int s_addr; } ;
struct bridge_iflist {int bif_flags; TYPE_1__ bif_hf_ipsrc; int bif_hf_hwsrc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 struct bridge_iflist* FUNC_1 (struct bridge_softc*,int ) ;
 int FUNC_2 (struct ifbrhostfilter*,int) ;

__attribute__((used)) static int
FUNC_3(struct bridge_softc *VAR_4, void *VAR_5)
{
 struct ifbrhostfilter *VAR_6 = VAR_5;
 struct bridge_iflist *VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_6->ifbrhf_ifsname);
 if (VAR_7 == ((void*)0))
  return (VAR_1);

 FUNC_2(VAR_6, sizeof(struct ifbrhostfilter));
 if (VAR_7->bif_flags & VAR_0) {
  VAR_6->ifbrhf_flags |= VAR_3;
  FUNC_0(VAR_7->bif_hf_hwsrc, VAR_6->ifbrhf_hwsrca,
      VAR_2);
  VAR_6->ifbrhf_ipsrc = VAR_7->bif_hf_ipsrc.s_addr;
 }
 return (0);
}
