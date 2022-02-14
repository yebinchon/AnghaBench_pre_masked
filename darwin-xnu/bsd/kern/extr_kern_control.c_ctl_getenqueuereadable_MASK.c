
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_2__ {scalar_t__ sb_cc; scalar_t__ sb_lowat; } ;
struct socket {TYPE_1__ so_rcv; } ;
typedef int kern_ctl_ref ;
typedef int errno_t ;


 int VAR_0 ;
 struct socket* FUNC_0 (int ,scalar_t__,int *) ;
 int FUNC_1 (struct socket*,int) ;

errno_t
FUNC_2(kern_ctl_ref VAR_1, u_int32_t VAR_2,
    u_int32_t *VAR_3)
{
 struct socket *VAR_4;

 if (VAR_3 == ((void*)0))
  return (VAR_0);

 VAR_4 = FUNC_0(VAR_1, VAR_2, ((void*)0));
 if (VAR_4 == ((void*)0)) {
  return (VAR_0);
 }

 if (VAR_4->so_rcv.sb_cc >= VAR_4->so_rcv.sb_lowat) {
  *VAR_3 = 0;
 } else {
  *VAR_3 = (VAR_4->so_rcv.sb_lowat - VAR_4->so_rcv.sb_cc);
 }
 FUNC_1(VAR_4, 1);

 return (0);
}
