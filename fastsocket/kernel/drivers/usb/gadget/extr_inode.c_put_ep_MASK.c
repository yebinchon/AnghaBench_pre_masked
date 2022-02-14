
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep_data {int wait; int epfiles; int dev; int count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ep_data*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7 (struct ep_data *VAR_0)
{
 if (FUNC_3 (!FUNC_1 (&VAR_0->count)))
  return;
 FUNC_5 (VAR_0->dev);

 FUNC_0 (!FUNC_4 (&VAR_0->epfiles));
 FUNC_0 (FUNC_6 (&VAR_0->wait));
 FUNC_2 (VAR_0);
}
