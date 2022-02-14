
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {size_t data; int function; scalar_t__ expires; } ;
struct parport {size_t number; TYPE_3__* physport; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_6__ {TYPE_1__ ieee1284; TYPE_2__* cad; } ;
struct TYPE_5__ {int timeout; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct timer_list*) ;
 int FUNC_1 (struct timer_list*) ;
 int FUNC_2 (struct timer_list*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct timer_list*) ;
 scalar_t__ VAR_1 ;
 struct parport** VAR_2 ;
 int VAR_3 ;

int FUNC_5 (struct parport *VAR_4, signed long VAR_5)
{
 int VAR_6;
 struct timer_list VAR_7;

 if (!VAR_4->physport->cad->timeout)


  return 1;

 FUNC_4(&VAR_7);
 VAR_7.expires = VAR_1 + VAR_5;
 VAR_7.function = VAR_3;
 VAR_2[VAR_4->number % VAR_0] = VAR_4;
 VAR_7.data = VAR_4->number;

 FUNC_0 (&VAR_7);
 VAR_6 = FUNC_3 (&VAR_4->physport->ieee1284.irq);
 if (!FUNC_1(&VAR_7) && !VAR_6)

  VAR_6 = 1;

 FUNC_2(&VAR_7);

 return VAR_6;
}
