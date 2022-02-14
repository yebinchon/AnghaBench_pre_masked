
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ifbrhostfilter {int ifbrhf_flags; scalar_t__ ifbrhf_ipsrc; int ifbrhf_hwsrca; int ifbrhf_ifsname; } ;
struct bridge_softc {int dummy; } ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct bridge_iflist {int bif_flags; TYPE_1__ bif_hf_ipsrc; int bif_hf_hwsrc; } ;
struct TYPE_4__ {int nas_vmnet_total; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct bridge_iflist* FUNC_3 (struct bridge_softc*,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;

__attribute__((used)) static int
FUNC_5(struct bridge_softc *VAR_11, void *VAR_12)
{
 struct ifbrhostfilter *VAR_13 = VAR_12;
 struct bridge_iflist *VAR_14;

 VAR_14 = FUNC_3(VAR_11, VAR_13->ifbrhf_ifsname);
 if (VAR_14 == ((void*)0))
  return (VAR_3);

 FUNC_0(VAR_10.nas_vmnet_total);

 if (VAR_13->ifbrhf_flags & VAR_5) {
  VAR_14->bif_flags |= VAR_2;

  if (VAR_13->ifbrhf_flags & VAR_6) {
   FUNC_2(VAR_13->ifbrhf_hwsrca, VAR_14->bif_hf_hwsrc,
       VAR_4);
   if (FUNC_1(VAR_13->ifbrhf_hwsrca, VAR_9,
       VAR_4) != 0)
    VAR_14->bif_flags |= VAR_0;
   else
    VAR_14->bif_flags &= ~VAR_0;
  }
  if (VAR_13->ifbrhf_flags & VAR_7) {
   VAR_14->bif_hf_ipsrc.s_addr = VAR_13->ifbrhf_ipsrc;
   if (VAR_14->bif_hf_ipsrc.s_addr != VAR_8)
    VAR_14->bif_flags |= VAR_1;
   else
    VAR_14->bif_flags &= ~VAR_1;
  }
 } else {
  VAR_14->bif_flags &= ~(VAR_2 | VAR_0 |
      VAR_1);
  FUNC_4(VAR_14->bif_hf_hwsrc, VAR_4);
  VAR_14->bif_hf_ipsrc.s_addr = VAR_8;
 }

 return (0);
}
