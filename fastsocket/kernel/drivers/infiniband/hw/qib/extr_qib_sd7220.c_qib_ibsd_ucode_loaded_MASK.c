
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_pportdata {struct qib_devdata* dd; } ;
struct qib_devdata {TYPE_1__* cspec; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {int serdes_first_init_done; } ;


 scalar_t__ FUNC_0 (struct qib_devdata*,struct firmware const*) ;

__attribute__((used)) static int FUNC_1(struct qib_pportdata *VAR_0,
     const struct firmware *VAR_1)
{
 struct qib_devdata *VAR_2 = VAR_0->dd;

 if (!VAR_2->cspec->serdes_first_init_done &&
     FUNC_0(VAR_2, VAR_1) > 0)
  VAR_2->cspec->serdes_first_init_done = 1;
 return VAR_2->cspec->serdes_first_init_done;
}
