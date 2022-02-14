
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int* gpio; int * gpio_pol; } ;
struct zoran {TYPE_1__ card; } ;


 int FUNC_0 (struct zoran*,int,int) ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1 (struct zoran *VAR_2,
    int VAR_3)
{
 switch (VAR_2->card.type) {
 case 129:
 case 128:
  if (VAR_1 == 0)
   FUNC_0(VAR_2, 5, VAR_3);
  else
   FUNC_0(VAR_2, 5, 1);
  break;
 default:
  FUNC_0(VAR_2, VAR_2->card.gpio[VAR_0],
       VAR_2->card.gpio_pol[VAR_0] ? !VAR_3 : VAR_3);
  break;
 }
}
