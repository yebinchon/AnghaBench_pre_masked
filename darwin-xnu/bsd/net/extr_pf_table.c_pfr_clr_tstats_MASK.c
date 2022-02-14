
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int u_int64_t ;
struct pfr_ktableworkq {int dummy; } ;
struct pfr_ktable {int pfrkt_t; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int *,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pfr_ktable* FUNC_3 (int ,int *,struct pfr_ktable*) ;
 int FUNC_4 (struct pfr_ktableworkq*) ;
 int FUNC_5 (struct pfr_ktableworkq*,struct pfr_ktable*,int ) ;
 int FUNC_6 () ;
 int VAR_6 ;
 int FUNC_7 (struct pfr_ktableworkq*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ,int ) ;
 int VAR_9 ;

int
FUNC_10(user_addr_t VAR_10, int VAR_11, int *VAR_12, int VAR_13)
{
 struct pfr_ktableworkq VAR_14;
 struct pfr_ktable *VAR_15, VAR_16;
 int VAR_17, VAR_18 = 0;
 u_int64_t VAR_19 = FUNC_6();

 FUNC_2(VAR_6, VAR_2);

 FUNC_0(VAR_13, VAR_4 | VAR_5 |
     VAR_3);
 FUNC_4(&VAR_14);
 for (VAR_17 = 0; VAR_17 < VAR_11; VAR_17++, VAR_10 += sizeof (VAR_16.pfrkt_t)) {
  if (FUNC_1(VAR_10, &VAR_16.pfrkt_t, sizeof (VAR_16.pfrkt_t), VAR_13))
   return (VAR_0);
  FUNC_8(&VAR_16.pfrkt_t);
  if (FUNC_9(&VAR_16.pfrkt_t, 0, 0))
   return (VAR_1);
  VAR_15 = FUNC_3(VAR_7, &VAR_8, &VAR_16);
  if (VAR_15 != ((void*)0)) {
   FUNC_5(&VAR_14, VAR_15, VAR_9);
   VAR_18++;
  }
 }
 if (!(VAR_13 & VAR_5)) {
  FUNC_7(&VAR_14, VAR_19, VAR_13 & VAR_3);
 }
 if (VAR_12 != ((void*)0))
  *VAR_12 = VAR_18;
 return (0);
}
