
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct parport {int dummy; } ;
struct i2c_par {struct i2c_par* next; TYPE_1__* pdev; int adapter; } ;
struct TYPE_6__ {scalar_t__ val; } ;
struct TYPE_7__ {TYPE_3__ init; } ;
struct TYPE_5__ {struct parport* port; } ;


 struct i2c_par* VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct i2c_par*) ;
 int FUNC_2 (struct parport*,int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_5 (struct parport *VAR_3)
{
 struct i2c_par *VAR_4, *VAR_5;


 for (VAR_5 = ((void*)0), VAR_4 = VAR_0; VAR_4;
      VAR_5 = VAR_4, VAR_4 = VAR_4->next) {
  if (VAR_4->pdev->port == VAR_3) {
   FUNC_0(&VAR_4->adapter);


   if (VAR_1[VAR_2].init.val)
    FUNC_2(VAR_3, 0, &VAR_1[VAR_2].init);

   FUNC_3(VAR_4->pdev);
   FUNC_4(VAR_4->pdev);
   if (VAR_5)
    VAR_5->next = VAR_4->next;
   else
    VAR_0 = VAR_4->next;
   FUNC_1(VAR_4);
   return;
  }
 }
}
