
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qib_pportdata {TYPE_1__* cpspec; TYPE_3__* dd; } ;
struct TYPE_6__ {TYPE_2__* cspec; } ;
struct TYPE_5__ {int r1; } ;
struct TYPE_4__ {int h1_val; scalar_t__ qdr_reforce; } ;


 int VAR_0 ;
 int FUNC_0 (struct qib_pportdata*,int) ;
 int FUNC_1 (struct qib_pportdata*,int,int ) ;
 int FUNC_2 (struct qib_pportdata*,int,int,int ) ;

__attribute__((used)) static void FUNC_3(struct qib_pportdata *VAR_1)
{
 int VAR_2;

 VAR_1->cpspec->qdr_reforce = 0;
 if (!VAR_1->dd->cspec->r1)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_2(VAR_1, VAR_2, 1, 0);
  FUNC_1(VAR_1, VAR_2, VAR_1->cpspec->h1_val);
  FUNC_0(VAR_1, VAR_2);
  FUNC_2(VAR_1, VAR_2, 0, 0);
 }
}
