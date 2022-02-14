
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qib_pportdata {TYPE_2__* dd; } ;
struct TYPE_4__ {TYPE_1__* cspec; } ;
struct TYPE_3__ {scalar_t__ r1; } ;


 int FUNC_0 (struct qib_pportdata*) ;
 int FUNC_1 (struct qib_pportdata*) ;

__attribute__((used)) static int FUNC_2(struct qib_pportdata *VAR_0)
{
 int VAR_1 = 0;
 if (VAR_0->dd->cspec->r1)
  VAR_1 = FUNC_1(VAR_0);
 else
  VAR_1 = FUNC_0(VAR_0);
 return VAR_1;
}
