
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_2__ {struct mbuf* sb_mb; } ;
struct socket {TYPE_1__ so_rcv; } ;
struct mbuf {scalar_t__ m_type; struct mbuf* m_nextpkt; } ;
typedef int kern_ctl_ref ;
typedef int errno_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct socket* FUNC_0 (int ,scalar_t__,int *) ;
 int FUNC_1 (struct socket*,int) ;

errno_t
FUNC_2(kern_ctl_ref VAR_4, u_int32_t VAR_5, u_int32_t *VAR_6)
{
 struct socket *VAR_7;
 u_int32_t VAR_8;
 struct mbuf *VAR_9;

 if (VAR_6 == ((void*)0))
  return (VAR_0);

 VAR_7 = FUNC_0(VAR_4, VAR_5, ((void*)0));
 if (VAR_7 == ((void*)0)) {
  return (VAR_0);
 }

 VAR_8 = 0;
 VAR_9 = VAR_7->so_rcv.sb_mb;
 while (VAR_9 != ((void*)0)) {
  if (VAR_9->m_type == VAR_1 ||
      VAR_9->m_type == VAR_2 ||
      VAR_9->m_type == VAR_3)
   VAR_8 += 1;
  VAR_9 = VAR_9->m_nextpkt;
 }
 *VAR_6 = VAR_8;

 FUNC_1(VAR_7, 1);

 return (0);
}
