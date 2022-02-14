
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bd2802_led {TYPE_1__* led; } ;
struct TYPE_2__ {scalar_t__ b; scalar_t__ g; scalar_t__ r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bd2802_led*,int,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct bd2802_led *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_4->led[VAR_5].r)
   FUNC_0(VAR_4, VAR_5, VAR_3, VAR_4->led[VAR_5].r);
  if (VAR_4->led[VAR_5].g)
   FUNC_0(VAR_4, VAR_5, VAR_1, VAR_4->led[VAR_5].g);
  if (VAR_4->led[VAR_5].b)
   FUNC_0(VAR_4, VAR_5, VAR_0, VAR_4->led[VAR_5].b);
 }
}
