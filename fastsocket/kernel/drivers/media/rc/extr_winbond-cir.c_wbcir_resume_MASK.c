
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbcir_data {int irq; } ;
struct pnp_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 struct wbcir_data* FUNC_1 (struct pnp_dev*) ;
 int FUNC_2 (struct wbcir_data*) ;

__attribute__((used)) static int
FUNC_3(struct pnp_dev *VAR_0)
{
 struct wbcir_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1);
 FUNC_0(VAR_1->irq);

 return 0;
}
