
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cphy {TYPE_1__* ops; } ;
struct adapter {int dummy; } ;
struct TYPE_4__ {struct cphy phy; } ;
struct TYPE_3__ {int (* intr_enable ) (struct cphy*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 TYPE_2__* FUNC_1 (struct adapter*,int) ;
 int FUNC_2 (struct cphy*) ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*,int ,int ) ;

void FUNC_5(struct adapter *VAR_2, int VAR_3)
{
 struct cphy *VAR_4 = &FUNC_1(VAR_2, VAR_3)->phy;

 FUNC_4(VAR_2, FUNC_0(VAR_0, VAR_3), VAR_1);
 FUNC_3(VAR_2, FUNC_0(VAR_0, VAR_3));
 VAR_4->ops->intr_enable(VAR_4);
}
