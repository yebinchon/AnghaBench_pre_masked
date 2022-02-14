
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
struct pfr_table {int dummy; } ;
struct pfr_ktable {int pfrkt_flags; } ;
struct pfr_kentry {scalar_t__ pfrke_not; } ;
struct pfr_addr {int pfra_fback; } ;
typedef int ad ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct pfr_addr*) ;
 scalar_t__ FUNC_2 (int,struct pfr_addr*,int,int) ;
 scalar_t__ FUNC_3 (struct pfr_addr*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct pfr_addr*,struct pfr_kentry*) ;
 struct pfr_kentry* FUNC_5 (struct pfr_ktable*,struct pfr_addr*,int ) ;
 struct pfr_ktable* FUNC_6 (struct pfr_table*) ;
 scalar_t__ FUNC_7 (struct pfr_addr*) ;
 scalar_t__ FUNC_8 (struct pfr_table*,int ,int ) ;

int
FUNC_9(struct pfr_table *VAR_8, user_addr_t VAR_9, int VAR_10,
 int *VAR_11, int VAR_12)
{
 struct pfr_ktable *VAR_13;
 struct pfr_kentry *VAR_14;
 struct pfr_addr VAR_15;
 int VAR_16, VAR_17 = 0;

 FUNC_0(VAR_12, VAR_6);
 if (FUNC_8(VAR_8, 0, 0))
  return (VAR_1);
 VAR_13 = FUNC_6(VAR_8);
 if (VAR_13 == ((void*)0) || !(VAR_13->pfrkt_flags & VAR_7))
  return (VAR_2);

 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++, VAR_9 += sizeof (VAR_15)) {
  if (FUNC_2(VAR_9, &VAR_15, sizeof (VAR_15), VAR_12))
   return (VAR_0);
  if (FUNC_7(&VAR_15))
   return (VAR_1);
  if (FUNC_1(&VAR_15))
   return (VAR_1);
  VAR_14 = FUNC_5(VAR_13, &VAR_15, 0);
  if (VAR_12 & VAR_6)
   FUNC_4(&VAR_15, VAR_14);
  VAR_15.pfra_fback = (VAR_14 == ((void*)0)) ? VAR_4 :
      (VAR_14->pfrke_not ? VAR_5 : VAR_3);
  if (VAR_14 != ((void*)0) && !VAR_14->pfrke_not)
   VAR_17++;
  if (FUNC_3(&VAR_15, VAR_9, sizeof (VAR_15), VAR_12))
   return (VAR_0);
 }
 if (VAR_11 != ((void*)0))
  *VAR_11 = VAR_17;
 return (0);
}
