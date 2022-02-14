
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct etr_eacr {int ea; int dp; int es; int sl; int e0; int e1; scalar_t__ p1; scalar_t__ p0; } ;
struct TYPE_7__ {scalar_t__ psc0; scalar_t__ psc1; } ;
struct etr_aib {TYPE_1__ esw; } ;
struct TYPE_8__ {TYPE_1__ esw; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 struct etr_eacr VAR_1 ;
 struct etr_eacr FUNC_4 (struct etr_eacr) ;
 struct etr_eacr FUNC_5 (struct etr_aib*,struct etr_eacr) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (struct etr_eacr) ;
 int FUNC_7 (struct etr_eacr) ;
 TYPE_2__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 () ;
 int FUNC_10 (unsigned long long) ;
 scalar_t__ FUNC_11 (struct etr_aib*) ;
 scalar_t__ FUNC_12 (struct etr_aib*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (struct etr_eacr) ;
 int VAR_11 ;
 unsigned long long FUNC_14 () ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int *,int) ;

__attribute__((used)) static void FUNC_18(struct work_struct *VAR_12)
{
 unsigned long long VAR_13;
 struct etr_eacr VAR_14;
 struct etr_aib VAR_15;
 int VAR_16;


 FUNC_15(&VAR_11);


 VAR_14 = VAR_1;


 VAR_14 = FUNC_4(VAR_14);


 VAR_14.ea = VAR_14.p0 || VAR_14.p1;
 if (!VAR_14.ea) {

  VAR_14.dp = VAR_14.es = VAR_14.sl = 0;
  FUNC_17(VAR_0, ((void*)0), 1);
  FUNC_2(&VAR_9);
  FUNC_13(VAR_14);
  goto out_unlock;
 }


 FUNC_0(FUNC_11(&VAR_15) != 0);
 VAR_5 = VAR_7 = VAR_15.esw;
 VAR_13 = FUNC_14();





 if (VAR_13 >= VAR_10 + (1600000 << 12))
  VAR_14 = FUNC_5(&VAR_15, VAR_14);
 if (VAR_14.p0 && VAR_15.esw.psc0 == VAR_4) {
  VAR_14.sl = 0;
  VAR_14.e0 = 1;
  if (!FUNC_7(VAR_1))
   VAR_14.es = 0;
  if (!VAR_14.es || !VAR_14.p1 || VAR_15.esw.psc1 != VAR_4)
   VAR_14.e1 = 0;

  else if (VAR_6 && VAR_8)
   VAR_14.e1 = 1;
  VAR_16 = (VAR_6 &&
        FUNC_8(&VAR_5, 0)) ? 0 : -1;
 } else if (VAR_14.p1 && VAR_15.esw.psc1 == VAR_4) {
  VAR_14.sl = 0;
  VAR_14.e0 = 0;
  VAR_14.e1 = 1;
  if (!FUNC_7(VAR_1))
   VAR_14.es = 0;
  VAR_16 = (VAR_8 &&
        FUNC_8(&VAR_7, 1)) ? 1 : -1;
 } else if (VAR_14.p0 && VAR_15.esw.psc0 == VAR_3) {
  VAR_14.sl = 1;
  VAR_14.e0 = 1;
  if (!FUNC_6(VAR_1))
   VAR_14.es = 0;
  if (!VAR_14.es || !VAR_14.p1 ||
      VAR_15.esw.psc1 != VAR_2)
   VAR_14.e1 = 0;
  else if (VAR_6 && VAR_8 &&
    FUNC_3(&VAR_5, &VAR_7))
   VAR_14.e1 = 1;
  VAR_16 = (VAR_6 &&
        FUNC_8(&VAR_5, 0)) ? 0 : -1;
 } else if (VAR_14.p1 && VAR_15.esw.psc1 == VAR_3) {
  VAR_14.sl = 1;
  VAR_14.e0 = 0;
  VAR_14.e1 = 1;
  if (!FUNC_6(VAR_1))
   VAR_14.es = 0;
  VAR_16 = (VAR_8 &&
        FUNC_8(&VAR_7, 1)) ? 1 : -1;
 } else {

  VAR_14.es = VAR_14.sl = 0;
  VAR_16 = -1;
 }





 if ((VAR_14.es && FUNC_1()) || VAR_16 < 0) {
  FUNC_13(VAR_14);
  FUNC_10(VAR_13);
  goto out_unlock;
 }





 VAR_14.dp = 0;
 VAR_14.es = 1;
 FUNC_13(VAR_14);
 if (VAR_13 < VAR_10 + (1600000 << 12) ||
     FUNC_12(&VAR_15, VAR_16) != 0) {

  VAR_14.es = 0;
  FUNC_13(VAR_14);
  FUNC_9();
 } else
  FUNC_10(VAR_13);
out_unlock:
 FUNC_16(&VAR_11);
}
