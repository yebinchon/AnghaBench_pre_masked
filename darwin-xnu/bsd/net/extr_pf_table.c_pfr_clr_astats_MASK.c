
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
struct pfr_table {int dummy; } ;
struct pfr_ktable {int pfrkt_flags; } ;
struct pfr_kentryworkq {int dummy; } ;
struct pfr_kentry {int dummy; } ;
struct pfr_addr {int pfra_fback; } ;
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
 int FUNC_3 (struct pfr_kentryworkq*) ;
 int FUNC_4 (struct pfr_kentryworkq*,struct pfr_kentry*,int ) ;
 int FUNC_5 (struct pfr_kentryworkq*,int ,int ) ;
 struct pfr_kentry* FUNC_6 (struct pfr_ktable*,struct pfr_addr*,int) ;
 struct pfr_ktable* FUNC_7 (struct pfr_table*) ;
 int FUNC_8 (int,int,int) ;
 scalar_t__ FUNC_9 (struct pfr_addr*) ;
 scalar_t__ FUNC_10 (struct pfr_table*,int ,int ) ;
 int VAR_9 ;
 int FUNC_11 (int) ;

int
FUNC_12(struct pfr_table *VAR_10, user_addr_t VAR_11, int VAR_12,
    int *VAR_13, int VAR_14)
{
 struct pfr_ktable *VAR_15;
 struct pfr_kentryworkq VAR_16;
 struct pfr_kentry *VAR_17;
 struct pfr_addr VAR_18;
 user_addr_t VAR_19 = VAR_11;
 int VAR_20, VAR_21, VAR_22 = 0;

 FUNC_0(VAR_14, VAR_5 | VAR_6 |
     VAR_7);
 if (FUNC_10(VAR_10, 0, 0))
  return (VAR_1);
 VAR_15 = FUNC_7(VAR_10);
 if (VAR_15 == ((void*)0) || !(VAR_15->pfrkt_flags & VAR_8))
  return (VAR_2);
 FUNC_3(&VAR_16);
 for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++, VAR_19 += sizeof (VAR_18)) {
  if (FUNC_1(VAR_19, &VAR_18, sizeof (VAR_18), VAR_14))
   FUNC_11(VAR_0);
  if (FUNC_9(&VAR_18))
   FUNC_11(VAR_1);
  VAR_17 = FUNC_6(VAR_15, &VAR_18, 1);
  if (VAR_14 & VAR_7) {
   VAR_18.pfra_fback = (VAR_17 != ((void*)0)) ?
       VAR_3 : VAR_4;
   if (FUNC_2(&VAR_18, VAR_19, sizeof (VAR_18), VAR_14))
    FUNC_11(VAR_0);
  }
  if (VAR_17 != ((void*)0)) {
   FUNC_4(&VAR_16, VAR_17, VAR_9);
   VAR_22++;
  }
 }

 if (!(VAR_14 & VAR_6)) {
  FUNC_5(&VAR_16, 0, 0);
 }
 if (VAR_13 != ((void*)0))
  *VAR_13 = VAR_22;
 return (0);
_bad:
 if (VAR_14 & VAR_7)
  FUNC_8(VAR_11, VAR_12, VAR_14);
 return (VAR_21);
}
