
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sin6_addr; } ;
struct TYPE_3__ {int sin_addr; } ;
union necp_sockaddr_union {TYPE_2__ sin6; TYPE_1__ sin; int sa; } ;
typedef size_t u_int32_t ;
struct inpcb {int inp_vflag; int in6p_laddr; int inp_laddr; } ;
typedef int * ifnet_t ;
typedef int * ifaddr_t ;
typedef scalar_t__ errno_t ;
typedef int address_storage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int ** VAR_7 ;
 int FUNC_2 (int **) ;
 scalar_t__ FUNC_3 (int *,int ***,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int) ;

__attribute__((used)) static bool
FUNC_7(struct inpcb *VAR_8, u_int32_t VAR_9)
{
 bool VAR_10 = VAR_2;
 errno_t VAR_11 = 0;
 ifaddr_t *VAR_12 = ((void*)0);
 union necp_sockaddr_union VAR_13;
 int VAR_14;
 int VAR_15 = VAR_0;
 ifnet_t VAR_16 = VAR_7[VAR_9];

 if (VAR_8 == ((void*)0) || VAR_16 == ((void*)0)) {
  return (VAR_2);
 }

 if (VAR_8->inp_vflag & VAR_3) {
  VAR_15 = VAR_0;
 } else if (VAR_8->inp_vflag & VAR_4) {
  VAR_15 = VAR_1;
 }

 VAR_11 = FUNC_3(VAR_16, &VAR_12, VAR_15);
 if (VAR_11 != 0) {
  FUNC_0(VAR_5, "Failed to get address list for %s%d", FUNC_4(VAR_16), FUNC_5(VAR_16));
  return (VAR_2);
 }

 for (VAR_14 = 0; VAR_12[VAR_14] != ((void*)0); VAR_14++) {
  if (FUNC_1(VAR_12[VAR_14], &VAR_13.sa, sizeof(VAR_13)) == 0) {
   if (VAR_15 == VAR_0) {
    if (FUNC_6(&VAR_13.sin.sin_addr, &VAR_8->inp_laddr, sizeof(VAR_8->inp_laddr)) == 0) {
     VAR_10 = VAR_6;
     goto done;
    }
   } else if (VAR_15 == VAR_1) {
    if (FUNC_6(&VAR_13.sin6.sin6_addr, &VAR_8->in6p_laddr, sizeof(VAR_8->in6p_laddr)) == 0) {
     VAR_10 = VAR_6;
     goto done;
    }
   }
  }
 }

done:
 FUNC_2(VAR_12);
 VAR_12 = ((void*)0);
 return (VAR_10);
}
