
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {TYPE_2__* irq; scalar_t__ base; } ;
struct TYPE_5__ {TYPE_1__* callback; } ;
struct TYPE_4__ {void (* func ) (int,int,void*) ;void* priv_data; } ;


 scalar_t__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static u32 FUNC_2(int VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;
 void (*VAR_6)(int, int, void *);
 void *VAR_7;

 for (VAR_4 = 7; VAR_4 > 0; VAR_4--) {
  if (VAR_2 & (1 << VAR_4)) {
   VAR_3 = FUNC_0(VAR_1->base +
    VAR_0[VAR_4]) & 0xff;

   VAR_6 = VAR_1->irq[VAR_4 - 1].callback[VAR_3].func;
   VAR_7 =
   VAR_1->irq[VAR_4 - 1].callback[VAR_3].priv_data;

   if (VAR_6 != ((void*)0))
    VAR_6(VAR_4, VAR_3, VAR_7);
   else
    FUNC_1("Spurilous VME interrupt, level:%x, "
     "vector:%x\n", VAR_4, VAR_3);

   VAR_5 |= (1 << VAR_4);
  }
 }

 return VAR_5;
}
