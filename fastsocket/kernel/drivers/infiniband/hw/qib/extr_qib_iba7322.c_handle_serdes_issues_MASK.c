
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct qib_pportdata {scalar_t__ link_speed_enabled; int lastibcstat; int port; TYPE_3__* dd; TYPE_1__* cpspec; } ;
struct TYPE_7__ {int unit; TYPE_2__* cspec; } ;
struct TYPE_6__ {scalar_t__ r1; } ;
struct TYPE_5__ {int qdr_reforce; int qdr_dfe_on; scalar_t__ qdr_dfe_time; int chase_end; } ;


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
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct qib_pportdata*) ;
 int FUNC_5 (struct qib_pportdata*,unsigned long,int) ;
 int FUNC_6 (struct qib_pportdata*) ;
 unsigned long VAR_17 ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int ,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct qib_pportdata*,int ,int ) ;
 int FUNC_11 (struct qib_pportdata*,int) ;
 int FUNC_12 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_13(struct qib_pportdata *VAR_18, u64 VAR_19)
{
 u8 VAR_20;
 unsigned long VAR_21;

 VAR_20 = (u8)FUNC_2(VAR_19, VAR_0, VAR_12);







 switch (VAR_20) {
 case 130:
 case 129:
 case 128:
 case 131:
  VAR_21 = VAR_17;
  if (VAR_18->cpspec->chase_end &&
       FUNC_12(VAR_21, VAR_18->cpspec->chase_end))
   FUNC_5(VAR_18, VAR_21, VAR_20);
  else if (!VAR_18->cpspec->chase_end)
   VAR_18->cpspec->chase_end = VAR_21 + VAR_15;
  break;
 default:
  VAR_18->cpspec->chase_end = 0;
  break;
 }

 if (((VAR_20 >= VAR_2 &&
       VAR_20 <= VAR_3) ||
      VAR_20 == VAR_4) &&
     (VAR_19 & FUNC_3(VAR_0, VAR_11))) {
  FUNC_6(VAR_18);
  VAR_18->cpspec->qdr_reforce = 1;
  if (!VAR_18->dd->cspec->r1)
   FUNC_11(VAR_18, 0);
 } else if (VAR_18->cpspec->qdr_reforce &&
  (VAR_19 & FUNC_3(VAR_0, VAR_11)) &&
   (VAR_20 == 131 ||
  VAR_20 == VAR_1 ||
  VAR_20 == VAR_4))
  FUNC_6(VAR_18);

 if ((FUNC_1(VAR_18->dd) || FUNC_0(VAR_18->dd)) &&
     VAR_18->link_speed_enabled == VAR_16 &&
     (VAR_20 == VAR_2 ||
      VAR_20 == 131 ||
      (VAR_20 >= VAR_5 &&
       VAR_20 <= VAR_6)))
  FUNC_4(VAR_18);

 if (VAR_20 != VAR_4) {
  u8 VAR_22 = FUNC_9(VAR_19);
  u8 VAR_23 = (u8)FUNC_2(VAR_18->lastibcstat, VAR_0,
       VAR_12);
  if (!VAR_18->dd->cspec->r1 &&
      VAR_23 == VAR_4 &&
      VAR_22 != VAR_7 &&
      VAR_22 != VAR_9 &&
      VAR_22 != VAR_10 &&
      VAR_22 != VAR_8)


   FUNC_11(VAR_18, 1);
  if (!VAR_18->cpspec->qdr_dfe_on &&
      VAR_20 <= VAR_6) {
   VAR_18->cpspec->qdr_dfe_on = 1;
   VAR_18->cpspec->qdr_dfe_time = 0;

   FUNC_10(VAR_18, FUNC_7(2),
         VAR_18->dd->cspec->r1 ?
         VAR_14 :
         VAR_13);
   FUNC_8(
    "IB%u:%u re-enabled QDR adaptation ibclt %x\n",
    VAR_18->dd->unit, VAR_18->port, VAR_20);
  }
 }
}
