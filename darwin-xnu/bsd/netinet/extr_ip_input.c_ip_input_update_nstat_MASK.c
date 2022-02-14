
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct rtentry {int dummy; } ;
struct in_addr {int dummy; } ;
struct ifnet {int dummy; } ;


 struct rtentry* FUNC_0 (struct ifnet*,struct in_addr) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct rtentry*,int ,int ,int ) ;
 int FUNC_2 (struct rtentry*) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_1, struct in_addr VAR_2,
    u_int32_t VAR_3, u_int32_t VAR_4)
{
 if (VAR_0) {
  struct rtentry *VAR_5 = FUNC_0(VAR_1,
      VAR_2);
  if (VAR_5 != ((void*)0)) {
   FUNC_1(VAR_5, VAR_3, VAR_4, 0);
   FUNC_2(VAR_5);
  }
 }
}
