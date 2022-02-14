
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_table {int dummy; } ;
struct pfr_ktable {int pfrkt_flags; int pfrkt_cnt; } ;
struct pfr_kentryworkq {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct pfr_ktable*,struct pfr_kentryworkq*,int*,int ) ;
 struct pfr_ktable* FUNC_2 (struct pfr_table*) ;
 int FUNC_3 (struct pfr_ktable*,struct pfr_kentryworkq*) ;
 scalar_t__ FUNC_4 (struct pfr_table*,int ,int) ;
 int FUNC_5 (char*,int) ;

int
FUNC_6(struct pfr_table *VAR_8, int *VAR_9, int VAR_10)
{
 struct pfr_ktable *VAR_11;
 struct pfr_kentryworkq VAR_12;

 FUNC_0(VAR_10, VAR_3 | VAR_4);
 if (FUNC_4(VAR_8, 0, VAR_10 & VAR_5))
  return (VAR_0);
 VAR_11 = FUNC_2(VAR_8);
 if (VAR_11 == ((void*)0) || !(VAR_11->pfrkt_flags & VAR_6))
  return (VAR_2);
 if (VAR_11->pfrkt_flags & VAR_7)
  return (VAR_1);
 FUNC_1(VAR_11, &VAR_12, VAR_9, 0);

 if (!(VAR_10 & VAR_4)) {
  FUNC_3(VAR_11, &VAR_12);
  if (VAR_11->pfrkt_cnt) {
   FUNC_5("pfr_clr_addrs: corruption detected (%d).\n",
       VAR_11->pfrkt_cnt);
   VAR_11->pfrkt_cnt = 0;
  }
 }
 return (0);
}
