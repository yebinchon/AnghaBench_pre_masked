
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int32_t ;
struct ifnet {int if_snd; } ;
struct if_qstatsreq {int ifqr_len; int ifqr_buf; int ifqr_slot; } ;
typedef int ifqr_slot ;
typedef int ifqr_len ;
typedef scalar_t__ caddr_t ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int ,int *) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_3(struct ifnet *VAR_0, u_long VAR_1, caddr_t VAR_2)
{
 struct if_qstatsreq *VAR_3 = (struct if_qstatsreq *)(void *)VAR_2;
 u_int32_t VAR_4, VAR_5;
 int VAR_6 = 0;

 FUNC_0(VAR_0 != ((void*)0));

 switch (VAR_1) {
 case 128: {
  FUNC_1(&VAR_3->ifqr_slot, &VAR_5, sizeof (VAR_5));
  FUNC_1(&VAR_3->ifqr_len, &VAR_4, sizeof (VAR_4));
  VAR_6 = FUNC_2(&VAR_0->if_snd, VAR_5,
      VAR_3->ifqr_buf, &VAR_4);
  if (VAR_6 != 0)
   VAR_4 = 0;
  FUNC_1(&VAR_4, &VAR_3->ifqr_len, sizeof (VAR_4));
  break;
 }

 default:
  FUNC_0(0);

 }

 return (VAR_6);
}
