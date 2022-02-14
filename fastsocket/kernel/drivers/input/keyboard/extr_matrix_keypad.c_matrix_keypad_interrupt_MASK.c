
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct matrix_keypad {int scan_pending; int lock; TYPE_1__* pdata; int work; scalar_t__ stopped; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int debounce_ms; } ;


 int VAR_0 ;
 int FUNC_0 (struct matrix_keypad*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 struct matrix_keypad *VAR_3 = VAR_2;
 unsigned long VAR_4;

 FUNC_3(&VAR_3->lock, VAR_4);






 if (FUNC_5(VAR_3->scan_pending || VAR_3->stopped))
  goto out;

 FUNC_0(VAR_3);
 VAR_3->scan_pending = 1;
 FUNC_2(&VAR_3->work,
  FUNC_1(VAR_3->pdata->debounce_ms));

out:
 FUNC_4(&VAR_3->lock, VAR_4);
 return VAR_0;
}
