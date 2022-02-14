
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct in_addr {int dummy; } ;
struct sockaddr_in {int sin_len; struct in_addr sin_addr; scalar_t__ sin_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_5__ {int ifq_maxlen; } ;
struct in_multi {int inm_reqcnt; int inm_debug; int inm_srcs; TYPE_3__* inm_st; TYPE_2__ inm_scq; int inm_state; struct ifmultiaddr* inm_ifma; int * inm_igi; struct ifnet* inm_ifp; struct in_addr inm_addr; } ;
struct ifnet {int dummy; } ;
struct ifmultiaddr {struct in_multi* ifma_protospec; TYPE_1__* ifma_addr; } ;
typedef int gsin ;
struct TYPE_6__ {void* iss_fmode; } ;
struct TYPE_4__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ifmultiaddr*) ;
 int FUNC_1 (struct ifmultiaddr*) ;
 int FUNC_2 (struct ifmultiaddr*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (struct ifnet*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct in_multi*) ;
 int FUNC_6 (struct in_multi*) ;
 int FUNC_7 (struct in_multi*) ;
 int FUNC_8 (struct in_multi*) ;
 int FUNC_9 (struct in_addr const*,struct ifnet*,struct in_multi*) ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct sockaddr_in*,int) ;
 int FUNC_13 (struct ifnet*,struct sockaddr*,struct ifmultiaddr**) ;
 int FUNC_14 (struct in_addr,struct in_addr const) ;
 struct in_multi* FUNC_15 (int ) ;
 int FUNC_16 (struct in_multi*) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;

__attribute__((used)) static int
FUNC_20(struct ifnet *VAR_8, const struct in_addr *VAR_9,
    struct in_multi **VAR_10)
{
 struct sockaddr_in VAR_11;
 struct ifmultiaddr *VAR_12;
 struct in_multi *VAR_13;
 int VAR_14;

 FUNC_19();
 FUNC_9(VAR_9, VAR_8, VAR_13);
 if (VAR_13 != ((void*)0)) {
  FUNC_7(VAR_13);
  FUNC_11(VAR_13->inm_reqcnt >= 1);
  VAR_13->inm_reqcnt++;
  FUNC_11(VAR_13->inm_reqcnt != 0);
  *VAR_10 = VAR_13;
  FUNC_8(VAR_13);
  FUNC_17();




  return (0);
 }
 FUNC_17();

 FUNC_12(&VAR_11, sizeof(VAR_11));
 VAR_11.sin_family = VAR_0;
 VAR_11.sin_len = sizeof(struct sockaddr_in);
 VAR_11.sin_addr = *VAR_9;





 VAR_14 = FUNC_13(VAR_8, (struct sockaddr *)&VAR_11, &VAR_12);
 if (VAR_14 != 0)
  return (VAR_14);




 FUNC_18();
 FUNC_0(VAR_12);
 if ((VAR_13 = VAR_12->ifma_protospec) != ((void*)0)) {
  FUNC_11(VAR_12->ifma_addr != ((void*)0));
  FUNC_11(VAR_12->ifma_addr->sa_family == VAR_0);
  FUNC_5(VAR_13);
  FUNC_2(VAR_12);
  FUNC_7(VAR_13);
  FUNC_11(VAR_13->inm_ifma == VAR_12);
  FUNC_11(VAR_13->inm_ifp == VAR_8);
  FUNC_11(FUNC_14(VAR_13->inm_addr, *VAR_9));
  if (VAR_13->inm_debug & VAR_2) {
   FUNC_11(VAR_13->inm_reqcnt >= 1);
   VAR_13->inm_reqcnt++;
   FUNC_11(VAR_13->inm_reqcnt != 0);
   *VAR_10 = VAR_13;
   FUNC_8(VAR_13);
   FUNC_17();
   FUNC_1(VAR_12);






   return (0);
  }






  FUNC_16(VAR_13);
  FUNC_11((VAR_13->inm_debug &
      (VAR_2 | VAR_3)) == VAR_2);
  *VAR_10 = VAR_13;
  FUNC_8(VAR_13);
  FUNC_17();
  FUNC_1(VAR_12);
  return (0);
 }
 FUNC_2(VAR_12);
 VAR_13 = FUNC_15(VAR_7);
 if (VAR_13 == ((void*)0)) {
  FUNC_17();
  FUNC_1(VAR_12);
  return (VAR_1);
 }
 FUNC_7(VAR_13);
 VAR_13->inm_addr = *VAR_9;
 VAR_13->inm_ifp = VAR_8;
 VAR_13->inm_igi = FUNC_4(VAR_8);
 FUNC_11(VAR_13->inm_igi != ((void*)0));
 FUNC_3(VAR_13->inm_igi);
 VAR_13->inm_ifma = VAR_12;
 VAR_13->inm_state = VAR_5;



 VAR_13->inm_scq.ifq_maxlen = VAR_4;
 VAR_13->inm_st[0].iss_fmode = VAR_6;
 VAR_13->inm_st[1].iss_fmode = VAR_6;
 FUNC_10(&VAR_13->inm_srcs);
 *VAR_10 = VAR_13;
 FUNC_16(VAR_13);
 FUNC_11((VAR_13->inm_debug & (VAR_2 | VAR_3)) == VAR_2);
 FUNC_6(VAR_13);
 FUNC_8(VAR_13);

 FUNC_0(VAR_12);
 FUNC_11(VAR_12->ifma_protospec == ((void*)0));
 VAR_12->ifma_protospec = VAR_13;
 FUNC_2(VAR_12);
 FUNC_17();

 return (0);
}
