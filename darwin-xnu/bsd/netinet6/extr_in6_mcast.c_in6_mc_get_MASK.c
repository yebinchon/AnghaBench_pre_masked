
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct sockaddr_in6 {int sin6_len; struct in6_addr sin6_addr; scalar_t__ sin6_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_5__ {int ifq_maxlen; } ;
struct in6_multi {int in6m_reqcnt; int in6m_debug; int in6m_srcs; TYPE_3__* in6m_st; TYPE_2__ in6m_scq; int in6m_state; struct ifmultiaddr* in6m_ifma; int * in6m_mli; struct ifnet* in6m_ifp; struct in6_addr in6m_addr; } ;
struct ifnet {int dummy; } ;
struct ifmultiaddr {struct in6_multi* ifma_protospec; TYPE_1__* ifma_addr; } ;
typedef int gsin6 ;
struct TYPE_6__ {void* iss_fmode; } ;
struct TYPE_4__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ifmultiaddr*) ;
 int FUNC_1 (struct ifmultiaddr*) ;
 int FUNC_2 (struct ifmultiaddr*) ;
 int FUNC_3 (struct in6_multi*) ;
 int FUNC_4 (struct in6_multi*) ;
 int FUNC_5 (struct in6_multi*) ;
 int FUNC_6 (struct in6_multi*) ;
 int FUNC_7 (struct in6_addr*,struct in6_addr const*) ;
 int FUNC_8 (struct in6_addr const*,struct ifnet*,struct in6_multi*) ;
 void* VAR_4 ;
 int * FUNC_9 (struct ifnet*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int *) ;
 int VAR_7 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct ifnet*,struct sockaddr*,struct ifmultiaddr**) ;
 struct in6_multi* FUNC_14 (int ) ;
 int FUNC_15 (struct in6_multi*) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (struct sockaddr_in6*,int ,int) ;

__attribute__((used)) static int
FUNC_20(struct ifnet *VAR_8, const struct in6_addr *VAR_9,
    struct in6_multi **VAR_10)
{
 struct sockaddr_in6 VAR_11;
 struct ifmultiaddr *VAR_12;
 struct in6_multi *VAR_13;
 int VAR_14;

 *VAR_10 = ((void*)0);

 FUNC_18();
 FUNC_8(VAR_9, VAR_8, VAR_13);
 if (VAR_13 != ((void*)0)) {
  FUNC_5(VAR_13);
  FUNC_12(VAR_13->in6m_reqcnt >= 1);
  VAR_13->in6m_reqcnt++;
  FUNC_12(VAR_13->in6m_reqcnt != 0);
  *VAR_10 = VAR_13;
  FUNC_6(VAR_13);
  FUNC_16();




  return (0);
 }
 FUNC_16();

 FUNC_19(&VAR_11, 0, sizeof(VAR_11));
 VAR_11 = VAR_0;
 VAR_11 = sizeof(struct sockaddr_in6);
 VAR_11 = *VAR_9;





 VAR_14 = FUNC_13(VAR_8, (struct sockaddr *)&VAR_11, &VAR_12);
 if (VAR_14 != 0)
  return (VAR_14);




 FUNC_17();
 FUNC_0(VAR_12);
 if ((VAR_13 = VAR_12->ifma_protospec) != ((void*)0)) {
  FUNC_12(VAR_12->ifma_addr != ((void*)0));
  FUNC_12(VAR_12->ifma_addr->sa_family == VAR_0);
  FUNC_3(VAR_13);
  FUNC_2(VAR_12);
  FUNC_5(VAR_13);
  FUNC_12(VAR_13->in6m_ifma == VAR_12);
  FUNC_12(VAR_13->in6m_ifp == VAR_8);
  FUNC_12(FUNC_7(&VAR_13->in6m_addr, VAR_9));
  if (VAR_13->in6m_debug & VAR_2) {
   FUNC_12(VAR_13->in6m_reqcnt >= 1);
   VAR_13->in6m_reqcnt++;
   FUNC_12(VAR_13->in6m_reqcnt != 0);
   *VAR_10 = VAR_13;
   FUNC_6(VAR_13);
   FUNC_16();
   FUNC_1(VAR_12);






   return (0);
  }






  FUNC_15(VAR_13);
  FUNC_12((VAR_13->in6m_debug &
      (VAR_2 | VAR_3)) == VAR_2);
  *VAR_10 = VAR_13;
  FUNC_6(VAR_13);
  FUNC_16();
  FUNC_1(VAR_12);
  return (0);
 }
 FUNC_2(VAR_12);
 VAR_13 = FUNC_14(VAR_7);
 if (VAR_13 == ((void*)0)) {
  FUNC_16();
  FUNC_1(VAR_12);
  return (VAR_1);
 }
 FUNC_5(VAR_13);
 VAR_13->in6m_addr = *VAR_9;
 VAR_13->in6m_ifp = VAR_8;
 VAR_13->in6m_mli = FUNC_9(VAR_8);
 FUNC_12(VAR_13->in6m_mli != ((void*)0));
 FUNC_10(VAR_13->in6m_mli);
 VAR_13->in6m_ifma = VAR_12;
 VAR_13->in6m_state = VAR_6;



 VAR_13->in6m_scq.ifq_maxlen = VAR_5;
 VAR_13->in6m_st[0].iss_fmode = VAR_4;
 VAR_13->in6m_st[1].iss_fmode = VAR_4;
 FUNC_11(&VAR_13->in6m_srcs);
 *VAR_10 = VAR_13;
 FUNC_15(VAR_13);
 FUNC_12((VAR_13->in6m_debug &
     (VAR_2 | VAR_3)) == VAR_2);
 FUNC_4(VAR_13);
 FUNC_6(VAR_13);

 FUNC_0(VAR_12);
 FUNC_12(VAR_12->ifma_protospec == ((void*)0));
 VAR_12->ifma_protospec = VAR_13;
 FUNC_2(VAR_12);
 FUNC_16();

 return (0);
}
