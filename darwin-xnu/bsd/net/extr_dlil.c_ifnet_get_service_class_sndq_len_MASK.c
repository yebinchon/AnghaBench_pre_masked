
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ifnet {int if_eflags; int if_snd; } ;
typedef int mbuf_svc_class_t ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *,int *) ;

errno_t
FUNC_2(struct ifnet *VAR_3, mbuf_svc_class_t VAR_4,
    u_int32_t *VAR_5, u_int32_t *VAR_6)
{
 errno_t VAR_7;

 if (VAR_3 == ((void*)0) || !FUNC_0(VAR_4) ||
     (VAR_5 == ((void*)0) && VAR_6 == ((void*)0)))
  VAR_7 = VAR_0;
 else if (!(VAR_3->if_eflags & VAR_2))
  VAR_7 = VAR_1;
 else
  VAR_7 = FUNC_1(&VAR_3->if_snd, VAR_4, VAR_5, VAR_6);

 return (VAR_7);
}
