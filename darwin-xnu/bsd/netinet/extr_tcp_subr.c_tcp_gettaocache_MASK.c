
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {int rt_flags; int rt_rmx; } ;
struct rmxp_tao {int dummy; } ;
struct inpcb {int inp_vflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtentry*) ;
 struct rmxp_tao* FUNC_1 (int ) ;
 struct rtentry* FUNC_2 (struct inpcb*,int ) ;
 struct rtentry* FUNC_3 (struct inpcb*,int ) ;

struct rmxp_tao *
FUNC_4(struct inpcb *VAR_4)
{
 struct rtentry *VAR_5;
 struct rmxp_tao *VAR_6;






 VAR_5 = FUNC_2(VAR_4, VAR_0);


 if (VAR_5 == ((void*)0) ||
     (VAR_5->rt_flags & (VAR_3|VAR_2)) != (VAR_3|VAR_2)) {

  if (VAR_5 != ((void*)0))
   FUNC_0(VAR_5);
  return (((void*)0));
 }

 VAR_6 = FUNC_1(VAR_5->rt_rmx);

 FUNC_0(VAR_5);
 return (VAR_6);
}
