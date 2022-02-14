
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct route {int ipoa_boundif; int ipoa_flags; int ipoa_netsvctype; int ipoa_sotc; } ;
struct mbuf {scalar_t__ m_len; } ;
struct m_tag {int dummy; } ;
struct ip_out_args {int ipoa_boundif; int ipoa_flags; int ipoa_netsvctype; int ipoa_sotc; } ;
struct ip_moptions {int imo_multicast_loop; int imo_multicast_ttl; int imo_multicast_ifp; } ;
struct ip {int ip_off; int ip_len; } ;
typedef scalar_t__ mbuf_t ;
typedef int ipoa ;
typedef scalar_t__ ipfilter_t ;
typedef TYPE_1__* ipf_pktopts_t ;
typedef int errno_t ;
struct TYPE_3__ {int ippo_flags; int ippo_mcast_loop; int ippo_mcast_ttl; int ippo_mcast_ifnet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ip_moptions*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct route*) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (struct route*,int) ;
 struct ip_moptions* FUNC_4 (int ) ;
 int FUNC_5 (struct mbuf*,int *,struct route*,int,struct ip_moptions*,struct route*) ;
 int FUNC_6 (struct mbuf*) ;
 scalar_t__ FUNC_7 (struct mbuf*) ;
 struct mbuf* FUNC_8 (struct mbuf*,int) ;
 struct m_tag* FUNC_9 (int ,int ,int,int ,struct mbuf*) ;
 int FUNC_10 (struct mbuf*,struct m_tag*) ;

__attribute__((used)) static errno_t
FUNC_11(mbuf_t VAR_23, ipfilter_t VAR_24, ipf_pktopts_t VAR_25)
{
 struct route VAR_26;
 struct ip *VAR_27;
 struct mbuf *VAR_28 = (struct mbuf *)VAR_23;
 errno_t VAR_29 = 0;
 struct m_tag *VAR_30 = ((void*)0);
 struct ip_moptions *VAR_31 = ((void*)0);
 struct ip_out_args VAR_32;

 FUNC_3(&VAR_32, sizeof(VAR_32));
 VAR_32.ipoa_boundif = VAR_1;
 VAR_32.ipoa_sotc = VAR_21;
 VAR_32.ipoa_netsvctype = VAR_22;


 if ((size_t)VAR_28->m_len < sizeof (struct ip)) {
  VAR_28 = FUNC_8(VAR_28, sizeof (struct ip));
  if (VAR_28 == ((void*)0))
   return (VAR_0);
 }
 VAR_27 = (struct ip *)FUNC_7(VAR_28);

 if (VAR_24 != 0) {
  VAR_30 = FUNC_9(VAR_17,
      VAR_18, sizeof (ipfilter_t), VAR_20, VAR_28);
  if (VAR_30 == ((void*)0)) {
   FUNC_6(VAR_28);
   return (VAR_0);
  }
  *(ipfilter_t *)(VAR_30 + 1) = VAR_24;
  FUNC_10(VAR_28, VAR_30);
 }

 if (VAR_25 != ((void*)0) && (VAR_25->ippo_flags & VAR_9) &&
     (VAR_31 = FUNC_4(VAR_19)) != ((void*)0)) {
  VAR_31->imo_multicast_ifp = VAR_25->ippo_mcast_ifnet;
  VAR_31->imo_multicast_ttl = VAR_25->ippo_mcast_ttl;
  VAR_31->imo_multicast_loop = VAR_25->ippo_mcast_loop;
 }

 if (VAR_25 != ((void*)0)) {
  if (VAR_25->ippo_flags & VAR_12)
   VAR_32.ipoa_flags |= VAR_6;
  if (VAR_25->ippo_flags & VAR_7) {
   VAR_32.ipoa_flags |= VAR_2;
   VAR_32.ipoa_boundif = VAR_25->ippo_flags >>
       VAR_13;
  }
  if (VAR_25->ippo_flags & VAR_11)
   VAR_32.ipoa_flags |= VAR_4;
  if (VAR_25->ippo_flags & VAR_8)
   VAR_32.ipoa_flags |= VAR_3;
  if (VAR_25->ippo_flags & VAR_10)
   VAR_32.ipoa_flags |= VAR_5;
 }

 FUNC_3(&VAR_26, sizeof(struct route));
 VAR_29 = FUNC_5(VAR_28, ((void*)0), &VAR_26,
     VAR_14 | VAR_16 | VAR_15, VAR_31, &VAR_32);


 FUNC_2(&VAR_26);

 if (VAR_31 != ((void*)0))
  FUNC_0(VAR_31);

 return (VAR_29);
}
