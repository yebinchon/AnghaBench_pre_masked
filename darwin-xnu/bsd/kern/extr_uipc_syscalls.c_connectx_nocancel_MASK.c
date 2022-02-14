
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_ssize_t ;
typedef int * uio_t ;
struct user_sa_endpoints {scalar_t__ sae_srcaddr; int sae_srcaddrlen; scalar_t__ sae_dstaddr; int sae_dstaddrlen; int sae_srcif; } ;
struct user_iovec {int dummy; } ;
struct user64_sa_endpoints {scalar_t__ sae_srcaddr; int sae_srcaddrlen; scalar_t__ sae_dstaddr; int sae_dstaddrlen; int sae_srcif; } ;
struct user32_sa_endpoints {scalar_t__ sae_srcaddr; int sae_srcaddrlen; scalar_t__ sae_dstaddr; int sae_dstaddrlen; int sae_srcif; } ;
struct socket {scalar_t__ so_type; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct connectx_args {int socket; scalar_t__ endpoints; scalar_t__ iov; scalar_t__ iovcnt; scalar_t__ len; scalar_t__ connid; int flags; int associd; } ;
typedef int ss ;
typedef int sd ;
typedef int sae_connid_t ;
typedef int ep64 ;
typedef int ep32 ;
typedef int cid ;
typedef int caddr_t ;
typedef int boolean_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sockaddr*,int ) ;
 scalar_t__ FUNC_2 (struct proc*) ;
 int VAR_5 ;
 struct sockaddr* FUNC_3 (struct sockaddr_storage*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct socket*,struct sockaddr*,struct sockaddr*,struct proc*,int ,int ,int *,int *,int ,int *) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (scalar_t__,int ,scalar_t__,struct user_iovec*) ;
 int FUNC_8 (int *,scalar_t__,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,struct socket**) ;
 int FUNC_11 (struct socket*,struct sockaddr**,scalar_t__,int,int) ;
 int FUNC_12 (struct socket*,struct sockaddr_storage*,scalar_t__,int,int) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (scalar_t__,int ,int ,int ) ;
 int FUNC_15 (int *) ;
 struct user_iovec* FUNC_16 (int *) ;

__attribute__((used)) static int
FUNC_17(struct proc *VAR_13, struct connectx_args *VAR_14, int *VAR_15)
{
#pragma unused(p, retval)
 struct sockaddr_storage VAR_16, VAR_17;
 struct sockaddr *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
 struct socket *VAR_20;
 int VAR_21, VAR_22, VAR_23 = VAR_14->socket;
 boolean_t VAR_24;
 sae_connid_t VAR_25 = VAR_6;
 struct user32_sa_endpoints VAR_26;
 struct user64_sa_endpoints VAR_27;
 struct user_sa_endpoints VAR_28;
 user_ssize_t VAR_29 = 0;
 struct user_iovec *VAR_30;
 uio_t VAR_31 = ((void*)0);

 FUNC_0(VAR_23, VAR_14->socket);
 VAR_21 = FUNC_10(VAR_23, &VAR_20);
 if (VAR_21 != 0)
  return (VAR_21);
 if (VAR_20 == ((void*)0)) {
  VAR_21 = VAR_0;
  goto out;
 }

 if (VAR_14->endpoints == VAR_12) {
  VAR_21 = VAR_2;
  goto out;
 }

 if (FUNC_2(VAR_13)) {
  VAR_21 = FUNC_6(VAR_14->endpoints, (caddr_t)&VAR_27, sizeof(VAR_27));
  if (VAR_21 != 0)
   goto out;

  VAR_28.sae_srcif = VAR_27;
  VAR_28.sae_srcaddr = VAR_27;
  VAR_28.sae_srcaddrlen = VAR_27;
  VAR_28.sae_dstaddr = VAR_27;
  VAR_28.sae_dstaddrlen = VAR_27;
 } else {
  VAR_21 = FUNC_6(VAR_14->endpoints, (caddr_t)&VAR_26, sizeof(VAR_26));
  if (VAR_21 != 0)
   goto out;

  VAR_28.sae_srcif = VAR_26;
  VAR_28.sae_srcaddr = VAR_26;
  VAR_28.sae_srcaddrlen = VAR_26;
  VAR_28.sae_dstaddr = VAR_26;
  VAR_28.sae_dstaddrlen = VAR_26;
 }





 VAR_24 = (VAR_20->so_type == VAR_7);


 if (VAR_28.sae_srcaddr != VAR_12) {
  if (VAR_28.sae_srcaddrlen > sizeof (VAR_16)) {
   VAR_21 = FUNC_11(VAR_20, &VAR_18, VAR_28.sae_srcaddr, VAR_28.sae_srcaddrlen, VAR_24);
  } else {
   VAR_21 = FUNC_12(VAR_20, &VAR_16, VAR_28.sae_srcaddr, VAR_28.sae_srcaddrlen, VAR_24);
   if (VAR_21 == 0)
    VAR_18 = (struct sockaddr *)&VAR_16;
  }

  if (VAR_21)
   goto out;
 }

 if (VAR_28.sae_dstaddr == VAR_12) {
  VAR_21 = VAR_2;
  goto out;
 }


 if (VAR_28.sae_dstaddrlen > sizeof (VAR_17)) {
  VAR_21 = FUNC_11(VAR_20, &VAR_19, VAR_28.sae_dstaddr, VAR_28.sae_dstaddrlen, VAR_24);
 } else {
  VAR_21 = FUNC_12(VAR_20, &VAR_17, VAR_28.sae_dstaddr, VAR_28.sae_dstaddrlen, VAR_24);
  if (VAR_21 == 0)
   VAR_19 = (struct sockaddr *)&VAR_17;
 }

 if (VAR_21)
  goto out;

 FUNC_4(VAR_19 != ((void*)0));

 if (VAR_14->iov != VAR_12) {

  if (VAR_14->iovcnt <= 0 || VAR_14->iovcnt > VAR_8){
   VAR_21 = VAR_2;
   goto out;
  }

  if (VAR_14->len == VAR_12){
   VAR_21 = VAR_2;
   goto out;
  }


  VAR_31 = FUNC_14(VAR_14->iovcnt, 0,
      (FUNC_2(VAR_13) ? VAR_10 : VAR_9),
      VAR_11);

  if (VAR_31 == ((void*)0)) {
   VAR_21 = VAR_3;
   goto out;
  }





  VAR_30 = FUNC_16(VAR_31);
  if (VAR_30 == ((void*)0)) {
   VAR_21 = VAR_3;
   goto out;
  }
  VAR_21 = FUNC_7(VAR_14->iov,
   FUNC_2(VAR_13) ? VAR_10 : VAR_9,
   VAR_14->iovcnt, VAR_30);
  if (VAR_21 != 0)
   goto out;


  VAR_21 = FUNC_13(VAR_31);
  if (VAR_21 != 0) {
   goto out;
  }
 }

 VAR_21 = FUNC_5(VAR_20, VAR_18, VAR_19, VAR_13, VAR_28.sae_srcif, VAR_14->associd,
     &VAR_25, VAR_31, VAR_14->flags, &VAR_29);
 if (VAR_21 == VAR_4)
  VAR_21 = VAR_1;

 if (VAR_14->len != VAR_12) {
  VAR_22 = FUNC_8(&VAR_29, VAR_14->len, sizeof (VAR_14->len));

  if ((VAR_22 != 0) && (VAR_21 == 0))
   VAR_21 = VAR_22;
 }

 if (VAR_14->connid != VAR_12) {
  VAR_22 = FUNC_8(&VAR_25, VAR_14->connid, sizeof (VAR_25));

  if ((VAR_22 != 0) && (VAR_21 == 0))
   VAR_21 = VAR_22;
 }
out:
 FUNC_9(VAR_23);
 if (VAR_31 != ((void*)0)) {
  FUNC_15(VAR_31);
 }
 if (VAR_18 != ((void*)0) && VAR_18 != FUNC_3(&VAR_16))
  FUNC_1(VAR_18, VAR_5);
 if (VAR_19 != ((void*)0) && VAR_19 != FUNC_3(&VAR_17))
  FUNC_1(VAR_19, VAR_5);
 return (VAR_21);
}
