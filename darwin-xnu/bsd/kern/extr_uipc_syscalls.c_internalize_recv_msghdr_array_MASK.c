
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct user_msghdr_x {scalar_t__ msg_iovlen; scalar_t__ msg_controllen; scalar_t__ msg_control; scalar_t__ msg_namelen; scalar_t__ msg_name; int msg_datalen; int msg_iov; int msg_flags; } ;
struct user_iovec {int dummy; } ;
struct user64_msghdr_x {scalar_t__ msg_iovlen; int msg_datalen; int msg_flags; scalar_t__ msg_controllen; scalar_t__ msg_control; int msg_iov; scalar_t__ msg_namelen; scalar_t__ msg_name; } ;
struct user32_msghdr_x {scalar_t__ msg_iovlen; int msg_datalen; int msg_flags; scalar_t__ msg_controllen; scalar_t__ msg_control; int msg_iov; scalar_t__ msg_namelen; scalar_t__ msg_name; } ;
struct recv_msg_elem {int which; int * uio; } ;


 int FUNC_0 (struct user_iovec*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int,scalar_t__,struct user_iovec*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (scalar_t__,int ,int,int) ;
 struct user_iovec* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(const void *VAR_6, int VAR_7, int VAR_8,
    u_int VAR_9, struct user_msghdr_x *VAR_10,
    struct recv_msg_elem *VAR_11)
{
 int VAR_12 = 0;
 u_int VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  struct user_iovec *VAR_14;
  struct user_msghdr_x *VAR_15 = VAR_10 + VAR_13;
  struct recv_msg_elem *VAR_16 = VAR_11 + VAR_13;

  if (VAR_7 == VAR_5) {
   const struct user64_msghdr_x *VAR_17;

   VAR_17 = ((const struct user64_msghdr_x *)VAR_6) + VAR_13;

   VAR_15->msg_name = VAR_17->msg_name;
   VAR_15->msg_namelen = VAR_17->msg_namelen;
   VAR_15->msg_iov = VAR_17->msg_iov;
   VAR_15->msg_iovlen = VAR_17->msg_iovlen;
   VAR_15->msg_control = VAR_17->msg_control;
   VAR_15->msg_controllen = VAR_17->msg_controllen;
   VAR_15->msg_flags = VAR_17->msg_flags;
   VAR_15->msg_datalen = VAR_17->msg_datalen;
  } else {
   const struct user32_msghdr_x *VAR_18;

   VAR_18 = ((const struct user32_msghdr_x *)VAR_6) + VAR_13;

   VAR_15->msg_name = VAR_18->msg_name;
   VAR_15->msg_namelen = VAR_18->msg_namelen;
   VAR_15->msg_iov = VAR_18->msg_iov;
   VAR_15->msg_iovlen = VAR_18->msg_iovlen;
   VAR_15->msg_control = VAR_18->msg_control;
   VAR_15->msg_controllen = VAR_18->msg_controllen;
   VAR_15->msg_flags = VAR_18->msg_flags;
   VAR_15->msg_datalen = VAR_18->msg_datalen;
  }

  if (VAR_15->msg_iovlen <= 0 ||
      VAR_15->msg_iovlen > VAR_4) {
   VAR_12 = VAR_0;
   goto done;
  }
  VAR_16->uio = FUNC_3(VAR_15->msg_iovlen, 0,
      VAR_7, VAR_8);
  if (VAR_16->uio == ((void*)0)) {
   VAR_12 = VAR_1;
   goto done;
  }

  VAR_14 = FUNC_4(VAR_16->uio);
  if (VAR_14 == ((void*)0)) {
   VAR_12 = VAR_1;
   goto done;
  }
  VAR_12 = FUNC_1(VAR_15->msg_iov,
   VAR_7, VAR_15->msg_iovlen, VAR_14);
  if (VAR_12)
   goto done;
  VAR_15->msg_iov = FUNC_0(VAR_14);

  VAR_12 = FUNC_2(VAR_16->uio);
  if (VAR_12)
   goto done;
  VAR_15->msg_datalen = FUNC_5(VAR_16->uio);

  if (VAR_15->msg_name && VAR_15->msg_namelen)
   VAR_16->which |= VAR_3;
  if (VAR_15->msg_control && VAR_15->msg_controllen)
   VAR_16->which |= VAR_2;
 }
done:

 return (VAR_12);
}
