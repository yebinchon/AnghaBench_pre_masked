
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qib_pportdata {int * statusp; } ;
struct qib_devdata {int flags; scalar_t__ num_pports; int * devstatusp; int (* f_setextled ) (struct qib_pportdata*,int ) ;struct qib_pportdata* pport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qib_pportdata*,int ) ;
 int FUNC_1 (struct qib_pportdata*,int ) ;

void FUNC_2(struct qib_devdata *VAR_5)
{
 if (VAR_5->flags & VAR_1) {
  u32 VAR_6;

  VAR_5->flags &= ~VAR_1;
  if (VAR_5->pport)
   for (VAR_6 = 0; VAR_6 < VAR_5->num_pports; ++VAR_6) {
    struct qib_pportdata *VAR_7;

    VAR_7 = VAR_5->pport + VAR_6;
    if (VAR_5->flags & VAR_2) {
     FUNC_0(VAR_7,
      VAR_0);
     VAR_5->f_setextled(VAR_7, 0);
    }
    *VAR_7->statusp &= ~VAR_4;
   }
 }






 if (VAR_5->devstatusp)
  *VAR_5->devstatusp |= VAR_3;
}
