
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct eeti_ts_priv {int work; int irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct eeti_ts_priv* FUNC_2 (struct input_dev*) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_0)
{
 struct eeti_ts_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->irq);


 FUNC_0(&VAR_1->work);

 return 0;
}
