
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct pfr_ktable {int pfrkt_cnt; } ;
struct pfr_kentry {int pfrke_tzero; } ;
struct pfr_addr {int dummy; } ;


 int VAR_0 ;
 struct pfr_kentry* FUNC_0 (struct pfr_addr*,int) ;
 struct pfr_kentry* FUNC_1 (struct pfr_ktable*,struct pfr_addr*,int) ;
 int FUNC_2 (struct pfr_ktable*,struct pfr_kentry*) ;

int
FUNC_3(struct pfr_ktable *VAR_1, struct pfr_addr *VAR_2, u_int64_t VAR_3)
{
 struct pfr_kentry *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_1, VAR_2, 1);
 if (VAR_4 != ((void*)0))
  return (0);
 VAR_4 = FUNC_0(VAR_2, 1);
 if (VAR_4 == ((void*)0))
  return (VAR_0);

 VAR_5 = FUNC_2(VAR_1, VAR_4);
 if (VAR_5)
  return (VAR_5);

 VAR_4->pfrke_tzero = VAR_3;
 VAR_1->pfrkt_cnt++;

 return (0);
}
