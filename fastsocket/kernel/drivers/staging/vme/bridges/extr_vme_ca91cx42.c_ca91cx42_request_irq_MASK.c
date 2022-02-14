
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ base; TYPE_2__* irq; } ;
struct TYPE_5__ {TYPE_1__* callback; int count; } ;
struct TYPE_4__ {void (* func ) (int,int,void*) ;void* priv_data; } ;


 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int VAR_4 ;

int FUNC_5(int VAR_5, int VAR_6,
 void (*VAR_7)(int VAR_8, int VAR_9, void *VAR_10),
 void *VAR_11)
{
 u32 VAR_12;

 FUNC_2(&(VAR_4));

 if (VAR_3->irq[VAR_5 - 1].callback[VAR_6].func) {
  FUNC_3(&(VAR_4));
  FUNC_4("VME Interrupt already taken\n");
  return -VAR_1;
 }


 VAR_3->irq[VAR_5 - 1].count++;
 VAR_3->irq[VAR_5 - 1].callback[VAR_6].priv_data = VAR_11;
 VAR_3->irq[VAR_5 - 1].callback[VAR_6].func = VAR_7;


 VAR_12 = FUNC_0(VAR_3->base + VAR_2);
 VAR_12 |= VAR_0[VAR_5];
 FUNC_1(VAR_12, VAR_3->base + VAR_2);

 FUNC_3(&(VAR_4));

 return 0;
}
