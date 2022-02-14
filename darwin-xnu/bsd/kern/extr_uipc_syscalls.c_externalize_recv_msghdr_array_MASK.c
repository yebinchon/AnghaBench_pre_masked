
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_ssize_t ;
typedef scalar_t__ u_int ;
struct user_msghdr_x {scalar_t__ msg_datalen; int msg_flags; } ;
struct user64_msghdr_x {scalar_t__ msg_datalen; int msg_flags; } ;
struct user32_msghdr_x {scalar_t__ msg_datalen; int msg_flags; } ;
struct recv_msg_elem {int which; int uio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

u_int
FUNC_1(void *VAR_3, int VAR_4, int VAR_5,
    u_int VAR_6, const struct user_msghdr_x *VAR_7,
    struct recv_msg_elem *VAR_8)
{
 u_int VAR_9;
 int VAR_10 = 0;
 u_int VAR_11 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  const struct user_msghdr_x *VAR_12 = VAR_7 + VAR_9;
  struct recv_msg_elem *VAR_13 = VAR_8 + VAR_9;
  user_ssize_t VAR_14;

  VAR_14 = VAR_12->msg_datalen - FUNC_0(VAR_13->uio);

  if (VAR_5 == VAR_1) {
   if ((VAR_13->which & VAR_0) == 0)
    VAR_10 = 1;
  } else {
   if (VAR_12->msg_datalen != 0 && VAR_14 == 0)
    VAR_10 = 1;
  }

  if (VAR_10 == 0)
   VAR_11 ++;

  if (VAR_4 == VAR_2) {
   struct user64_msghdr_x *VAR_15;

   VAR_15 = ((struct user64_msghdr_x *)VAR_3) + VAR_9;

   VAR_15->msg_flags = VAR_12->msg_flags;
   VAR_15->msg_datalen = VAR_14;

  } else {
   struct user32_msghdr_x *VAR_16;

   VAR_16 = ((struct user32_msghdr_x *)VAR_3) + VAR_9;

   VAR_16->msg_flags = VAR_12->msg_flags;
   VAR_16->msg_datalen = VAR_14;
  }
 }
 return (VAR_11);
}
