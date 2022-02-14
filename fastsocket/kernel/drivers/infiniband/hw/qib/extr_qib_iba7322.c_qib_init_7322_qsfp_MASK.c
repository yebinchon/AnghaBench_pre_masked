
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct qib_qsfp_data {struct qib_pportdata* ppd; } ;
struct qib_pportdata {int hw_pidx; struct qib_devdata* dd; TYPE_1__* cpspec; } ;
struct qib_devdata {TYPE_2__* cspec; } ;
struct TYPE_4__ {int extctrl; int gpio_mask; int gpio_lock; } ;
struct TYPE_3__ {struct qib_qsfp_data qsfp_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct qib_qsfp_data*,int ) ;
 int FUNC_2 (struct qib_devdata*,int ,int) ;
 int VAR_6 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct qib_pportdata *VAR_7)
{
 unsigned long VAR_8;
 struct qib_qsfp_data *VAR_9 = &VAR_7->cpspec->qsfp_data;
 struct qib_devdata *VAR_10 = VAR_7->dd;
 u64 VAR_11 = VAR_2;

 VAR_11 <<= (VAR_3 * VAR_7->hw_pidx);
 VAR_9->ppd = VAR_7;
 FUNC_1(VAR_9, VAR_6);
 FUNC_3(&VAR_10->cspec->gpio_lock, VAR_8);
 VAR_10->cspec->extctrl |= (VAR_11 << FUNC_0(VAR_0, VAR_1));
 VAR_10->cspec->gpio_mask |= VAR_11;
 FUNC_2(VAR_10, VAR_4, VAR_10->cspec->extctrl);
 FUNC_2(VAR_10, VAR_5, VAR_10->cspec->gpio_mask);
 FUNC_4(&VAR_10->cspec->gpio_lock, VAR_8);
}
