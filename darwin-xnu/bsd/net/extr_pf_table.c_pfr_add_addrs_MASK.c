
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int u_int64_t ;
struct pfr_table {int dummy; } ;
struct pfr_ktable {int pfrkt_flags; } ;
struct pfr_kentryworkq {int dummy; } ;
struct pfr_kentry {scalar_t__ pfrke_not; } ;
struct pfr_addr {scalar_t__ pfra_not; void* pfra_fback; } ;
typedef int ad ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,struct pfr_addr*,int,int) ;
 scalar_t__ FUNC_2 (struct pfr_addr*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct pfr_kentryworkq*) ;
 int FUNC_4 (struct pfr_kentryworkq*,struct pfr_kentry*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct pfr_ktable*,struct pfr_kentryworkq*) ;
 struct pfr_kentry* FUNC_7 (struct pfr_addr*,int) ;
 struct pfr_ktable* FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (struct pfr_kentryworkq*) ;
 int FUNC_10 (struct pfr_kentry*) ;
 int FUNC_11 (struct pfr_ktable*,int ) ;
 int FUNC_12 (struct pfr_ktable*,struct pfr_kentryworkq*,int ) ;
 struct pfr_kentry* FUNC_13 (struct pfr_ktable*,struct pfr_addr*,int) ;
 struct pfr_ktable* FUNC_14 (struct pfr_table*) ;
 int VAR_15 ;
 int FUNC_15 (int,int,int) ;
 scalar_t__ FUNC_16 (struct pfr_ktable*,struct pfr_kentry*) ;
 scalar_t__ FUNC_17 (struct pfr_addr*) ;
 scalar_t__ FUNC_18 (struct pfr_table*,int ,int) ;
 int VAR_16 ;
 int FUNC_19 (int) ;

int
FUNC_20(struct pfr_table *VAR_17, user_addr_t VAR_18, int VAR_19,
    int *VAR_20, int VAR_21)
{
 struct pfr_ktable *VAR_22, *VAR_23;
 struct pfr_kentryworkq VAR_24;
 struct pfr_kentry *VAR_25, *VAR_26;
 struct pfr_addr VAR_27;
 int VAR_28, VAR_29, VAR_30 = 0;
 user_addr_t VAR_31 = VAR_18;
 u_int64_t VAR_32 = FUNC_5();

 FUNC_0(VAR_21, VAR_9 | VAR_10 |
     VAR_11);
 if (FUNC_18(VAR_17, 0, VAR_21 & VAR_12))
  return (VAR_1);
 VAR_22 = FUNC_14(VAR_17);
 if (VAR_22 == ((void*)0) || !(VAR_22->pfrkt_flags & VAR_13))
  return (VAR_4);
 if (VAR_22->pfrkt_flags & VAR_14)
  return (VAR_3);
 VAR_23 = FUNC_8(&VAR_15, 0, 0);
 if (VAR_23 == ((void*)0))
  return (VAR_2);
 FUNC_3(&VAR_24);
 for (VAR_28 = 0; VAR_28 < VAR_19; VAR_28++, VAR_31 += sizeof (VAR_27)) {
  if (FUNC_1(VAR_31, &VAR_27, sizeof (VAR_27), VAR_21))
   FUNC_19(VAR_0);
  if (FUNC_17(&VAR_27))
   FUNC_19(VAR_1);
  VAR_25 = FUNC_13(VAR_22, &VAR_27, 1);
  VAR_26 = FUNC_13(VAR_23, &VAR_27, 1);
  if (VAR_21 & VAR_11) {
   if (VAR_26 != ((void*)0))
    VAR_27.pfra_fback = VAR_7;
   else if (VAR_25 == ((void*)0))
    VAR_27.pfra_fback = VAR_5;
   else if (VAR_25->pfrke_not != VAR_27.pfra_not)
    VAR_27.pfra_fback = VAR_6;
   else
    VAR_27.pfra_fback = VAR_8;
  }
  if (VAR_25 == ((void*)0) && VAR_26 == ((void*)0)) {
   VAR_25 = FUNC_7(&VAR_27,
       !(VAR_21 & VAR_12));
   if (VAR_25 == ((void*)0))
    FUNC_19(VAR_2);
   if (FUNC_16(VAR_23, VAR_25)) {
    FUNC_10(VAR_25);
    VAR_27.pfra_fback = VAR_8;
   } else {
    FUNC_4(&VAR_24, VAR_25, VAR_16);
    VAR_30++;
   }
  }
  if (VAR_21 & VAR_11)
   if (FUNC_2(&VAR_27, VAR_31, sizeof (VAR_27), VAR_21))
    FUNC_19(VAR_0);
 }
 FUNC_6(VAR_23, &VAR_24);
 if (!(VAR_21 & VAR_10)) {
  FUNC_12(VAR_22, &VAR_24, VAR_32);
 } else
  FUNC_9(&VAR_24);
 if (VAR_20 != ((void*)0))
  *VAR_20 = VAR_30;
 FUNC_11(VAR_23, 0);
 return (0);
_bad:
 FUNC_6(VAR_23, &VAR_24);
 FUNC_9(&VAR_24);
 if (VAR_21 & VAR_11)
  FUNC_15(VAR_18, VAR_19, VAR_21);
 FUNC_11(VAR_23, 0);
 return (VAR_29);
}
