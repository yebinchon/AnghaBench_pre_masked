
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vuart_bus_priv {int * devices; TYPE_1__* bmp; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct vuart_bus_priv *VAR_5 = VAR_4;

 FUNC_0(!VAR_5);

 while (1) {
  unsigned int VAR_6;

  FUNC_2(VAR_5->bmp);

  VAR_6 = (VAR_0 - 1) - FUNC_1(VAR_5->bmp->status);

  if (VAR_6 == VAR_0)
   break;

  FUNC_0(VAR_6 >= VAR_2);
  FUNC_0(!VAR_5->devices[VAR_6]);

  FUNC_3(VAR_5->devices[VAR_6]);
 }

 return VAR_1;
}
