
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* gpcs; int * gpio; } ;
struct zoran {TYPE_1__ card; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct zoran*,int ,int) ;
 size_t VAR_1 ;
 int FUNC_1 (struct zoran*,int ) ;
 int FUNC_2 (struct zoran*,int,int ,int ) ;
 int FUNC_3 (int) ;

int
FUNC_4 (struct zoran *VAR_2)
{

 FUNC_1(VAR_2, 0);

 if (VAR_2->card.gpcs[VAR_0] != 0xff) {
  FUNC_2(VAR_2, VAR_2->card.gpcs[VAR_0], 0,
      0);
  FUNC_3(2);
 } else {
  FUNC_0(VAR_2, VAR_2->card.gpio[VAR_1], 0);
  FUNC_3(2);
  FUNC_0(VAR_2, VAR_2->card.gpio[VAR_1], 1);
  FUNC_3(2);
 }

 return 0;
}
