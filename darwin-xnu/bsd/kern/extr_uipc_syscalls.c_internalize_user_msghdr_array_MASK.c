
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct uio* uio_t ;
typedef scalar_t__ u_int ;
struct user_msghdr_x {scalar_t__ msg_iovlen; scalar_t__ msg_controllen; scalar_t__ msg_control; scalar_t__ msg_namelen; scalar_t__ msg_name; int msg_datalen; int msg_iov; int msg_flags; } ;
struct user_iovec {int dummy; } ;
struct user64_msghdr_x {scalar_t__ msg_iovlen; int msg_datalen; int msg_flags; scalar_t__ msg_controllen; scalar_t__ msg_control; int msg_iov; scalar_t__ msg_namelen; scalar_t__ msg_name; } ;
struct user32_msghdr_x {scalar_t__ msg_iovlen; int msg_datalen; int msg_flags; scalar_t__ msg_controllen; scalar_t__ msg_control; int msg_iov; scalar_t__ msg_namelen; scalar_t__ msg_name; } ;
struct uio {int dummy; } ;


 int FUNC_0 (struct user_iovec*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,scalar_t__,struct user_iovec*) ;
 int FUNC_2 (struct uio*) ;
 struct uio* FUNC_3 (scalar_t__,int ,int,int) ;
 struct user_iovec* FUNC_4 (struct uio*) ;
 int FUNC_5 (struct uio*) ;

int
FUNC_6(const void *VAR_4, int VAR_5, int VAR_6,
    u_int VAR_7, struct user_msghdr_x *VAR_8, struct uio **VAR_9)
{
 int VAR_10 = 0;
 u_int VAR_11;
 u_int VAR_12 = 0;
 u_int VAR_13 = 0;

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  uio_t VAR_14;
  struct user_iovec *VAR_15;
  struct user_msghdr_x *VAR_16 = VAR_8 + VAR_11;

  if (VAR_5 == VAR_3) {
   const struct user64_msghdr_x *VAR_17;

   VAR_17 = ((const struct user64_msghdr_x *)VAR_4) + VAR_11;

   VAR_16->msg_name = VAR_17->msg_name;
   VAR_16->msg_namelen = VAR_17->msg_namelen;
   VAR_16->msg_iov = VAR_17->msg_iov;
   VAR_16->msg_iovlen = VAR_17->msg_iovlen;
   VAR_16->msg_control = VAR_17->msg_control;
   VAR_16->msg_controllen = VAR_17->msg_controllen;
   VAR_16->msg_flags = VAR_17->msg_flags;
   VAR_16->msg_datalen = VAR_17->msg_datalen;
  } else {
   const struct user32_msghdr_x *VAR_18;

   VAR_18 = ((const struct user32_msghdr_x *)VAR_4) + VAR_11;

   VAR_16->msg_name = VAR_18->msg_name;
   VAR_16->msg_namelen = VAR_18->msg_namelen;
   VAR_16->msg_iov = VAR_18->msg_iov;
   VAR_16->msg_iovlen = VAR_18->msg_iovlen;
   VAR_16->msg_control = VAR_18->msg_control;
   VAR_16->msg_controllen = VAR_18->msg_controllen;
   VAR_16->msg_flags = VAR_18->msg_flags;
   VAR_16->msg_datalen = VAR_18->msg_datalen;
  }

  if (VAR_16->msg_iovlen <= 0 ||
      VAR_16->msg_iovlen > VAR_2) {
   VAR_10 = VAR_0;
   goto done;
  }
  VAR_14 = FUNC_3(VAR_16->msg_iovlen, 0, VAR_5,
      VAR_6);
  if (VAR_14 == ((void*)0)) {
   VAR_10 = VAR_1;
   goto done;
  }
  VAR_9[VAR_11] = VAR_14;

  VAR_15 = FUNC_4(VAR_14);
  if (VAR_15 == ((void*)0)) {
   VAR_10 = VAR_1;
   goto done;
  }
  VAR_10 = FUNC_1(VAR_16->msg_iov,
   VAR_5, VAR_16->msg_iovlen, VAR_15);
  if (VAR_10)
   goto done;
  VAR_16->msg_iov = FUNC_0(VAR_15);

  VAR_10 = FUNC_2(VAR_14);
  if (VAR_10)
   goto done;
  VAR_16->msg_datalen = FUNC_5(VAR_14);

  if (VAR_16->msg_name && VAR_16->msg_namelen)
   VAR_12++;
  if (VAR_16->msg_control && VAR_16->msg_controllen)
   VAR_13++;
 }
done:

 return (VAR_10);
}
