
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_ssize_t ;
typedef struct uio* uio_t ;
typedef int u_int ;
struct user_msghdr_x {scalar_t__ msg_datalen; int msg_flags; } ;
struct user64_msghdr_x {scalar_t__ msg_datalen; int msg_flags; } ;
struct user32_msghdr_x {scalar_t__ msg_datalen; int msg_flags; } ;
struct uio {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct uio*) ;

u_int
FUNC_1(void *VAR_1, int VAR_2, int VAR_3,
    u_int VAR_4, const struct user_msghdr_x *VAR_5, struct uio **VAR_6)
{
#pragma unused(direction)
 u_int VAR_7;
 int VAR_8 = 0;
 u_int VAR_9 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  const struct user_msghdr_x *VAR_10 = VAR_5 + VAR_7;
  uio_t VAR_11 = VAR_6[VAR_7];
  user_ssize_t VAR_12 = VAR_10->msg_datalen - FUNC_0(VAR_11);

  if (VAR_10->msg_datalen != 0 && VAR_12 == 0)
   VAR_8 = 1;

  if (VAR_8 == 0)
   VAR_9 ++;

  if (VAR_2 == VAR_0) {
   struct user64_msghdr_x *VAR_13;

   VAR_13 = ((struct user64_msghdr_x *)VAR_1) + VAR_7;

   VAR_13->msg_flags = VAR_10->msg_flags;
   VAR_13->msg_datalen = VAR_12;

  } else {
   struct user32_msghdr_x *VAR_14;

   VAR_14 = ((struct user32_msghdr_x *)VAR_1) + VAR_7;

   VAR_14->msg_flags = VAR_10->msg_flags;
   VAR_14->msg_datalen = VAR_12;
  }
 }
 return (VAR_9);
}
