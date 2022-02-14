
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_nf_limits {int nominal; int min; int max; } ;
struct ath_hw {struct ath_nf_limits nf_5g; struct ath_nf_limits nf_2g; int curchan; } ;
struct ath_common {int dummy; } ;
typedef int s16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_common*,int ,char*,...) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_2, s16 *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_1(VAR_2);
 struct ath_nf_limits *VAR_5;
 int VAR_6;

 if (FUNC_0(VAR_2->curchan))
  VAR_5 = &VAR_2->nf_2g;
 else
  VAR_5 = &VAR_2->nf_5g;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (!VAR_3[VAR_6])
   continue;

  FUNC_2(VAR_4, VAR_0,
   "NF calibrated [%s] [chain %d] is %d\n",
   (VAR_6 >= 3 ? "ext" : "ctl"), VAR_6 % 3, VAR_3[VAR_6]);

  if (VAR_3[VAR_6] > VAR_5->max) {
   FUNC_2(VAR_4, VAR_0,
    "NF[%d] (%d) > MAX (%d), correcting to MAX\n",
    VAR_6, VAR_3[VAR_6], VAR_5->max);
   VAR_3[VAR_6] = VAR_5->max;
  } else if (VAR_3[VAR_6] < VAR_5->min) {
   FUNC_2(VAR_4, VAR_0,
    "NF[%d] (%d) < MIN (%d), correcting to NOM\n",
    VAR_6, VAR_3[VAR_6], VAR_5->min);
   VAR_3[VAR_6] = VAR_5->nominal;
  }
 }
}
