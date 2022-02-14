
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_pportdata {TYPE_1__* dd; } ;
struct TYPE_2__ {int (* f_get_ib_cfg ) (struct qib_pportdata*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct qib_pportdata*,int ) ;

__attribute__((used)) static int FUNC_1(struct qib_pportdata *VAR_1)
{
 return VAR_1->dd->f_get_ib_cfg(VAR_1, VAR_0);
}
