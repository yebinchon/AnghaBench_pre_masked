
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbreq {int ifbr_ifsflags; int ifbr_ifsname; } ;
struct bstp_port {int dummy; } ;
struct bridge_softc {int dummy; } ;
struct bridge_iflist {int bif_ifflags; struct bstp_port bif_stp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bridge_softc*) ;
 struct bridge_iflist* FUNC_1 (struct bridge_softc*,int ) ;
 int FUNC_2 (struct bstp_port*) ;
 int FUNC_3 (struct bstp_port*) ;
 int FUNC_4 (struct bstp_port*,int) ;
 int FUNC_5 (struct bstp_port*,int) ;
 int FUNC_6 (struct bstp_port*,int) ;
 int FUNC_7 (struct bstp_port*,int) ;

__attribute__((used)) static int
FUNC_8(struct bridge_softc *VAR_10, void *VAR_11)
{
 struct ifbreq *VAR_12 = VAR_11;
 struct bridge_iflist *VAR_13;





 if (!FUNC_0(VAR_10)) {
  return (VAR_0);
 }

 VAR_13 = FUNC_1(VAR_10, VAR_12->ifbr_ifsname);
 if (VAR_13 == ((void*)0))
  return (VAR_1);

 if (VAR_12->ifbr_ifsflags & VAR_8)

  return (VAR_0);
 if (VAR_12->ifbr_ifsflags & VAR_9)
  return (VAR_2);



 VAR_13->bif_ifflags = VAR_12->ifbr_ifsflags & VAR_3;


 return (0);
}
