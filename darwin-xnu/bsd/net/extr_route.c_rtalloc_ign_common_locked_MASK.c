
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtentry {int * rt_ifp; } ;
struct route {struct rtentry* ro_rt; int ro_dst; } ;


 int FUNC_0 (struct route*) ;
 int FUNC_1 (struct route*) ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (struct rtentry*) ;
 int FUNC_5 (struct rtentry*) ;
 struct rtentry* FUNC_6 (int *,int,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_7(struct route *VAR_0, uint32_t VAR_1,
    unsigned int VAR_2)
{
 struct rtentry *VAR_3;

 if ((VAR_3 = VAR_0->ro_rt) != ((void*)0)) {
  FUNC_4(VAR_3);
  if (VAR_3->rt_ifp != ((void*)0) && !FUNC_1(VAR_0)) {
   FUNC_5(VAR_3);
   return;
  }
  FUNC_5(VAR_3);
  FUNC_0(VAR_0);
 }
 VAR_0->ro_rt = FUNC_6(&VAR_0->ro_dst, 1, VAR_1, VAR_2);
 if (VAR_0->ro_rt != ((void*)0)) {
  FUNC_2(VAR_0->ro_rt);
  FUNC_3(VAR_0->ro_rt);
 }
}
