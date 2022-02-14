
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct TYPE_4__ {int sb_idealsize; } ;
struct socket {scalar_t__ so_type; TYPE_3__* so_msg_state; TYPE_1__ so_snd; } ;
struct mbuf {int dummy; } ;
struct TYPE_6__ {TYPE_2__* msg_priq; } ;
struct TYPE_5__ {int msgq_bytes; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct socket*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mbuf*,size_t*) ;

int
FUNC_3(struct socket *VAR_4, struct mbuf *VAR_5)
{
 int VAR_6 = 0, VAR_7;
 u_int32_t VAR_8 = 0;
 FUNC_1(VAR_4->so_type == VAR_3 &&
  FUNC_0(VAR_4) == VAR_0);
 if (VAR_5 != ((void*)0)) {
  VAR_7 = FUNC_2(VAR_5, &VAR_8);
  if (VAR_7)
   return (0);
 } else {
  VAR_8 = VAR_1;
 }
 VAR_6 = (VAR_4->so_snd.sb_idealsize / VAR_2) -
     VAR_4->so_msg_state->msg_priq[VAR_8].msgq_bytes;
 if (VAR_6 < 0)
  VAR_6 = 0;
 return (VAR_6);
}
