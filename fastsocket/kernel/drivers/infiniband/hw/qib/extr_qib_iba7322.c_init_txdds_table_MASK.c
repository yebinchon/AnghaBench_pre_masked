
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct txdds_ent {int dummy; } ;
struct qib_pportdata {int lflags; scalar_t__ link_speed_active; TYPE_1__* dd; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (struct txdds_ent const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct qib_pportdata*,struct txdds_ent const**,struct txdds_ent const**,struct txdds_ent const**,int) ;
 int FUNC_2 (struct qib_pportdata*,int,struct txdds_ent const*) ;
 struct txdds_ent const* VAR_7 ;
 struct txdds_ent const* VAR_8 ;
 struct txdds_ent const* VAR_9 ;
 int FUNC_3 (struct qib_pportdata*,struct txdds_ent*) ;

__attribute__((used)) static void FUNC_4(struct qib_pportdata *VAR_10, int VAR_11)
{
 const struct txdds_ent *VAR_12, *VAR_13, *VAR_14;
 struct txdds_ent *VAR_15;
 int VAR_16;
 int VAR_17 = 0;

 FUNC_1(VAR_10, &VAR_12, &VAR_13, &VAR_14, VAR_11);


 if (!(VAR_10->dd->flags & VAR_3) || VAR_11)
  VAR_17 = 1;


 FUNC_2(VAR_10, 0, VAR_12);
 FUNC_2(VAR_10, VAR_6, VAR_13);
 FUNC_2(VAR_10, 2 * VAR_6, VAR_14);
 if (VAR_10->lflags & (VAR_2 | VAR_1 |
  VAR_0)) {
  VAR_15 = (struct txdds_ent *)(VAR_10->link_speed_active ==
        VAR_5 ? VAR_14 :
        (VAR_10->link_speed_active ==
         VAR_4 ? VAR_13 : VAR_12));
  FUNC_3(VAR_10, VAR_15);
 }


 for (VAR_16 = 1; VAR_16 < FUNC_0(VAR_9); ++VAR_16) {
  FUNC_2(VAR_10, VAR_16, VAR_17 ? VAR_12 : VAR_9 + VAR_16);
  FUNC_2(VAR_10, VAR_16 + VAR_6,
     VAR_17 ? VAR_13 : VAR_7 + VAR_16);
  FUNC_2(VAR_10, VAR_16 + 2 * VAR_6,
     VAR_17 ? VAR_14 : VAR_8 + VAR_16);
 }
}
