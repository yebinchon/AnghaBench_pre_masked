
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int irqreturn_t ;
struct TYPE_2__ {int event; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,scalar_t__) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 u32 VAR_5 = FUNC_0(&VAR_2->event);
 int VAR_6 = VAR_1;

 if (FUNC_1())
  VAR_6 = VAR_0;

 if (VAR_5) {
  FUNC_2(&VAR_2->event, VAR_5);
  VAR_6 = VAR_0;
 }

 return VAR_6;
}
