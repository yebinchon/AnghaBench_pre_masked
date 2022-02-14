
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


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;

int FUNC_5(int VAR_7, int VAR_8,
 void (*VAR_9)(int VAR_10, int VAR_11, void *VAR_12),
        void *VAR_13)
{
 u32 VAR_14;

 FUNC_2(&(VAR_6));

 if(VAR_5->irq[VAR_7 - 1].callback[VAR_8].func) {
  FUNC_3(&(VAR_6));
  FUNC_4("VME Interrupt already taken\n");
  return -VAR_0;
 }


 VAR_5->irq[VAR_7 - 1].count++;
 VAR_5->irq[VAR_7 - 1].callback[VAR_8].priv_data = VAR_13;
 VAR_5->irq[VAR_7 - 1].callback[VAR_8].func = VAR_9;


 VAR_14 = FUNC_0(VAR_5->base + VAR_3);
 VAR_14 |= VAR_4[VAR_7 - 1];
 FUNC_1(VAR_14, VAR_5->base + VAR_3);

 VAR_14 = FUNC_0(VAR_5->base + VAR_1);
 VAR_14 |= VAR_2[VAR_7 - 1];
 FUNC_1(VAR_14, VAR_5->base + VAR_1);

 FUNC_3(&(VAR_6));

 return 0;
}
