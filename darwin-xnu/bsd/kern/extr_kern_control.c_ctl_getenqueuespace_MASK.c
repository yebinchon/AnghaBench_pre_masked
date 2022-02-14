
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct socket {int so_rcv; } ;
typedef int kern_ctl_ref ;
typedef int errno_t ;


 int VAR_0 ;
 struct socket* FUNC_0 (int ,int ,int *) ;
 long FUNC_1 (int *) ;
 int FUNC_2 (struct socket*,int) ;

errno_t
FUNC_3(kern_ctl_ref VAR_1, u_int32_t VAR_2, size_t *VAR_3)
{
 struct socket *VAR_4;
 long VAR_5;

 if (VAR_3 == ((void*)0))
  return (VAR_0);

 VAR_4 = FUNC_0(VAR_1, VAR_2, ((void*)0));
 if (VAR_4 == ((void*)0)) {
  return (VAR_0);
 }

 VAR_5 = FUNC_1(&VAR_4->so_rcv);
 *VAR_3 = (VAR_5 < 0) ? 0 : VAR_5;
 FUNC_2(VAR_4, 1);

 return (0);
}
