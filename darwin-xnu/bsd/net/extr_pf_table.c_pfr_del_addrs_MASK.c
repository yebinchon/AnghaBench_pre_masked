
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
struct pfr_table {int dummy; } ;
struct pfr_ktable {int pfrkt_flags; int pfrkt_cnt; } ;
struct pfr_kentryworkq {int dummy; } ;
struct pfr_kentry {int pfrke_mark; scalar_t__ pfrke_not; } ;
struct pfr_addr {scalar_t__ pfra_not; int pfra_fback; } ;
typedef int ad ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,struct pfr_addr*,int,int) ;
 scalar_t__ FUNC_2 (struct pfr_addr*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct pfr_kentryworkq*) ;
 int FUNC_4 (struct pfr_kentryworkq*,struct pfr_kentry*,int ) ;
 struct pfr_kentry* FUNC_5 (struct pfr_ktable*,struct pfr_addr*,int) ;
 struct pfr_ktable* FUNC_6 (struct pfr_table*) ;
 int FUNC_7 (struct pfr_ktable*) ;
 int FUNC_8 (struct pfr_ktable*,struct pfr_kentryworkq*) ;
 int FUNC_9 (int,int,int) ;
 scalar_t__ FUNC_10 (struct pfr_addr*) ;
 scalar_t__ FUNC_11 (struct pfr_table*,int ,int) ;
 int VAR_14 ;
 int FUNC_12 (int) ;

int
FUNC_13(struct pfr_table *VAR_15, user_addr_t VAR_16, int VAR_17,
    int *VAR_18, int VAR_19)
{
 struct pfr_ktable *VAR_20;
 struct pfr_kentryworkq VAR_21;
 struct pfr_kentry *VAR_22;
 struct pfr_addr VAR_23;
 user_addr_t VAR_24 = VAR_16;
 int VAR_25, VAR_26, VAR_27 = 0, VAR_28 = 1;

 FUNC_0(VAR_19, VAR_8 | VAR_9 |
     VAR_10);
 if (FUNC_11(VAR_15, 0, VAR_19 & VAR_11))
  return (VAR_1);
 VAR_20 = FUNC_6(VAR_15);
 if (VAR_20 == ((void*)0) || !(VAR_20->pfrkt_flags & VAR_12))
  return (VAR_3);
 if (VAR_20->pfrkt_flags & VAR_13)
  return (VAR_2);
 for (VAR_25 = VAR_20->pfrkt_cnt; VAR_25 > 0; VAR_25 >>= 1)
  VAR_28++;
 if (VAR_17 > VAR_20->pfrkt_cnt/VAR_28) {

  FUNC_7(VAR_20);
 } else {

  for (VAR_25 = 0; VAR_25 < VAR_17; VAR_25++, VAR_24 += sizeof (VAR_23)) {
   if (FUNC_1(VAR_24, &VAR_23, sizeof (VAR_23), VAR_19))
    return (VAR_0);
   if (FUNC_10(&VAR_23))
    return (VAR_1);
   VAR_22 = FUNC_5(VAR_20, &VAR_23, 1);
   if (VAR_22 != ((void*)0))
    VAR_22->pfrke_mark = 0;
  }
 }
 FUNC_3(&VAR_21);
 for (VAR_24 = VAR_16, VAR_25 = 0; VAR_25 < VAR_17; VAR_25++, VAR_24 += sizeof (VAR_23)) {
  if (FUNC_1(VAR_24, &VAR_23, sizeof (VAR_23), VAR_19))
   FUNC_12(VAR_0);
  if (FUNC_10(&VAR_23))
   FUNC_12(VAR_1);
  VAR_22 = FUNC_5(VAR_20, &VAR_23, 1);
  if (VAR_19 & VAR_10) {
   if (VAR_22 == ((void*)0))
    VAR_23.pfra_fback = VAR_7;
   else if (VAR_22->pfrke_not != VAR_23.pfra_not)
    VAR_23.pfra_fback = VAR_4;
   else if (VAR_22->pfrke_mark)
    VAR_23.pfra_fback = VAR_6;
   else
    VAR_23.pfra_fback = VAR_5;
  }
  if (VAR_22 != ((void*)0) && VAR_22->pfrke_not == VAR_23.pfra_not &&
      !VAR_22->pfrke_mark) {
   VAR_22->pfrke_mark = 1;
   FUNC_4(&VAR_21, VAR_22, VAR_14);
   VAR_27++;
  }
  if (VAR_19 & VAR_10)
   if (FUNC_2(&VAR_23, VAR_24, sizeof (VAR_23), VAR_19))
    FUNC_12(VAR_0);
 }
 if (!(VAR_19 & VAR_9)) {
  FUNC_8(VAR_20, &VAR_21);
 }
 if (VAR_18 != ((void*)0))
  *VAR_18 = VAR_27;
 return (0);
_bad:
 if (VAR_19 & VAR_10)
  FUNC_9(VAR_16, VAR_17, VAR_19);
 return (VAR_26);
}
