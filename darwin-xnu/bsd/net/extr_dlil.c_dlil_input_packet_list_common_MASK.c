
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int32_t ;
struct TYPE_3__ {char* pkt_hdr; int pkt_flags; int csum_flags; int csum_rx_start; scalar_t__ csum_data; struct ifnet* rcvif; } ;
struct mbuf {char* m_data; int m_flags; struct mbuf* m_nextpkt; TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_eflags; int (* if_demux ) (struct ifnet*,struct mbuf*,char*,scalar_t__*) ;int if_type; int if_flags; scalar_t__ if_updatemcasts; int if_imcasts; int * if_bridge; } ;
struct if_proto {scalar_t__ protocol_family; struct ifnet* ifp; } ;
struct ether_header {int ether_type; } ;
typedef scalar_t__ protocol_family_t ;
typedef struct mbuf* mbuf_t ;
typedef struct ifnet* ifnet_t ;
typedef scalar_t__ ifnet_model_t ;
typedef char* caddr_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {int ip6s_clat464_in_drop; int ip6s_clat464_in_v4_drop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;


 scalar_t__ FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct mbuf*,struct ifnet*) ;
 int VAR_13 ;
 int FUNC_3 (struct mbuf*) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (char*,char*,int ) ;
 scalar_t__ VAR_21 ;
 int FUNC_7 (struct ifnet*,scalar_t__*,struct mbuf**) ;
 int FUNC_8 (struct if_proto*,struct mbuf*) ;
 int FUNC_9 (struct ifnet*,struct mbuf*,char*,scalar_t__) ;
 int FUNC_10 (struct ifnet*,struct mbuf**,char**,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,struct mbuf*) ;
 struct if_proto* FUNC_12 (struct ifnet*,scalar_t__) ;
 int FUNC_13 (int ) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_14 (struct ifnet*) ;
 int FUNC_15 (struct if_proto*) ;
 int FUNC_16 (struct if_proto*) ;
 int VAR_24 ;
 int FUNC_17 (struct ifnet*) ;
 int FUNC_18 (struct ifnet*,int) ;
 int FUNC_19 (struct ifnet*) ;
 int FUNC_20 (struct ifnet*) ;
 int FUNC_21 (struct ifnet*) ;
 int FUNC_22 (struct ifnet*,struct mbuf*) ;
 TYPE_2__ VAR_25 ;
 struct ifnet* VAR_26 ;
 int FUNC_23 (struct mbuf*,int) ;
 int FUNC_24 (struct mbuf*) ;
 int FUNC_25 (struct mbuf*) ;
 scalar_t__ FUNC_26 (struct mbuf*) ;
 scalar_t__ FUNC_27 (struct mbuf*) ;
 scalar_t__ FUNC_28 (int ) ;
 int FUNC_29 (struct ifnet*,scalar_t__,struct mbuf*,char*) ;
 int FUNC_30 (struct ifnet*,struct mbuf*,char*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_31(struct ifnet *VAR_27, struct mbuf *VAR_28,
    u_int32_t VAR_29, ifnet_model_t VAR_30, boolean_t VAR_31)
{
 int VAR_32 = 0;
 protocol_family_t VAR_33;
 mbuf_t VAR_34;
 ifnet_t VAR_35 = VAR_27;
 char *VAR_36 = ((void*)0);
 struct if_proto *VAR_37 = ((void*)0);
 mbuf_t VAR_38 = ((void*)0);
 mbuf_t *VAR_39 = ((void*)0);
 u_int32_t VAR_40 = 0, VAR_41 = 0;

 FUNC_1(VAR_3 | VAR_5, 0, 0, 0, 0, 0);

 if (VAR_31 && VAR_30 == VAR_12 && VAR_29 > 1 &&
     (VAR_41 = VAR_24) > 0)
  VAR_40 = VAR_29;

 while (VAR_28 != ((void*)0)) {
  struct if_proto *VAR_42 = ((void*)0);
  int VAR_43 = 0;
  uint32_t VAR_44;

  if (VAR_27 == ((void*)0))
   VAR_35 = VAR_28->m_pkthdr.rcvif;

  if ((VAR_35->if_eflags & VAR_10) && VAR_40 != 0 &&
      VAR_41 > 0 && (--VAR_40 % VAR_41) == 0)
   FUNC_21(VAR_35);


  FUNC_2(VAR_28, VAR_35);

  VAR_34 = VAR_28->m_nextpkt;
  VAR_28->m_nextpkt = ((void*)0);
  VAR_36 = VAR_28->m_pkthdr.pkt_hdr;
  VAR_28->m_pkthdr.pkt_hdr = ((void*)0);






  if (VAR_35 != VAR_26) {
   if (!FUNC_18(VAR_35, 1)) {
    FUNC_25(VAR_28);
    goto next;
   }
   VAR_43 = 1;



   VAR_44 = VAR_20;
  } else {





   VAR_44 = (VAR_19|VAR_18);
  }


  FUNC_23(VAR_28, VAR_44);

  FUNC_22(VAR_35, VAR_28);


  FUNC_20(VAR_35);
  VAR_32 = (*VAR_35->if_demux)(VAR_35, VAR_28, VAR_36,
      &VAR_33);
  FUNC_19(VAR_35);
  if (VAR_32 != 0) {
   if (VAR_32 == VAR_6)
    goto next;
   VAR_33 = 0;
  }

  FUNC_29(VAR_35, VAR_33, VAR_28, VAR_36);


  if (VAR_33 == VAR_16 && FUNC_0(VAR_35)) {
   FUNC_25(VAR_28);
   VAR_25.ip6s_clat464_in_v4_drop++;
   goto next;
  }


  if (VAR_33 == VAR_17 && FUNC_0(VAR_35)
      && FUNC_11(VAR_33, VAR_28)) {
   char *VAR_45 = ((void*)0);
   struct ether_header VAR_46;
   struct ether_header *VAR_47 = ((void*)0);

   if (VAR_35->if_type == 128) {
    VAR_47 = (struct ether_header *)(void *)VAR_36;

    if (FUNC_28(VAR_47->ether_type) != VAR_8)
     goto skip_clat;


    FUNC_6(VAR_36, (caddr_t)&VAR_46, VAR_9);
   }
   VAR_32 = FUNC_7(VAR_35, &VAR_33, &VAR_28);
   VAR_45 = (char *) FUNC_26(VAR_28);
   if (VAR_32 != 0) {
    FUNC_25(VAR_28);
    VAR_25.ip6s_clat464_in_drop++;
    goto next;
   }

   if (VAR_33 != VAR_16)
    goto skip_clat;


   switch (VAR_35->if_type) {
   case 129:
    VAR_36 = VAR_45;
    break;
   case 128:




    if (FUNC_3(VAR_28) < VAR_9) {
     FUNC_24(VAR_28);
     VAR_25.ip6s_clat464_in_drop++;
     goto next;
    }





    VAR_36 = VAR_45 - VAR_9;
    VAR_46.ether_type = FUNC_13(VAR_7);
    FUNC_6((caddr_t)&VAR_46, VAR_36, VAR_9);
    break;
   }
  }
skip_clat:
  if (VAR_22 != 0 && !(VAR_35->if_flags & VAR_11) &&
      !(VAR_28->m_pkthdr.pkt_flags & VAR_19))
   FUNC_9(VAR_35, VAR_28, VAR_36,
       VAR_33);
  if (VAR_35->if_bridge == ((void*)0) && (VAR_28->m_pkthdr.csum_flags &
      (VAR_0 | VAR_1)) ==
      (VAR_0 | VAR_1)) {
   int VAR_48;
   if (VAR_36 == ((void*)0) ||
       VAR_36 < (char *)FUNC_27(VAR_28) ||
       VAR_36 > (char *)VAR_28->m_data ||
       (VAR_48 = (VAR_28->m_data - VAR_36)) >
       VAR_28->m_pkthdr.csum_rx_start) {
    VAR_28->m_pkthdr.csum_data = 0;
    VAR_28->m_pkthdr.csum_flags &= ~VAR_0;
    VAR_23++;
   } else {
    VAR_28->m_pkthdr.csum_rx_start -= VAR_48;
   }
  }

  if (VAR_21)
   FUNC_29(VAR_35, VAR_33, VAR_28, VAR_36);

  if (VAR_28->m_flags & (VAR_13|VAR_14))
   FUNC_5(&VAR_35->if_imcasts, 1);


  if ((VAR_28->m_pkthdr.csum_flags & VAR_2) == 0) {
   VAR_32 = FUNC_10(VAR_35, &VAR_28,
       &VAR_36, VAR_33);
   if (VAR_32 != 0) {
    if (VAR_32 != VAR_6)
     FUNC_25(VAR_28);
    goto next;
   }
  }
  if (VAR_32 != 0 || ((VAR_28->m_flags & VAR_15) != 0)) {
   FUNC_25(VAR_28);
   goto next;
  }


  if (VAR_33 == 0) {
   VAR_42 = ((void*)0);
  } else if (VAR_37 != ((void*)0) && VAR_37->ifp == VAR_35 &&
      (VAR_37->protocol_family == VAR_33)) {
   FUNC_4(VAR_42 == ((void*)0));
   VAR_42 = VAR_37;
   FUNC_16(VAR_37);
  } else {
   FUNC_4(VAR_42 == ((void*)0));
   FUNC_20(VAR_35);

   VAR_42 = FUNC_12(VAR_35, VAR_33);
   FUNC_19(VAR_35);
  }
  if (VAR_42 == ((void*)0)) {

   FUNC_25(VAR_28);
   goto next;
  }
  if (VAR_42 != VAR_37) {
   if (VAR_37 != ((void*)0)) {

    FUNC_8(VAR_37, VAR_38);
    VAR_38 = ((void*)0);
    FUNC_15(VAR_37);
   }
   VAR_37 = VAR_42;
   FUNC_16(VAR_42);
  }

  VAR_28->m_pkthdr.pkt_hdr = VAR_36;
  if (VAR_38 == ((void*)0)) {
   VAR_38 = VAR_28;
  } else {
   *VAR_39 = VAR_28;
  }
  VAR_39 = &VAR_28->m_nextpkt;

next:
  if (VAR_34 == ((void*)0) && VAR_37 != ((void*)0)) {

   FUNC_8(VAR_37, VAR_38);
   FUNC_15(VAR_37);
   VAR_37 = ((void*)0);
  }
  if (VAR_42 != ((void*)0)) {
   FUNC_15(VAR_42);
   VAR_42 = ((void*)0);
  }

  VAR_28 = VAR_34;


  if (VAR_35->if_updatemcasts > 0 && FUNC_14(VAR_35) == 0)
   VAR_35->if_updatemcasts = 0;
  if (VAR_43 == 1)
   FUNC_17(VAR_35);
 }

 FUNC_1(VAR_3 | VAR_4, 0, 0, 0, 0, 0);
}
