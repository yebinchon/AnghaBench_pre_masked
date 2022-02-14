
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* layers; } ;
struct TYPE_5__ {TYPE_1__ dp; int spa; scalar_t__ hpa; int iodc_io; } ;
struct TYPE_6__ {TYPE_2__ mem_kbd; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int*) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,unsigned long,int ,int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(void)
{
 int VAR_5;
 int VAR_6;
 unsigned long VAR_7;


 if (!VAR_1->mem_kbd.iodc_io)
  return 0;


 FUNC_2(&VAR_4, VAR_7);
 FUNC_1(VAR_1->mem_kbd.iodc_io,
      (unsigned long)VAR_1->mem_kbd.hpa, VAR_0,
      VAR_1->mem_kbd.spa, FUNC_0(VAR_1->mem_kbd.dp.layers),
      FUNC_0(VAR_3), 0, FUNC_0(VAR_2), 1, 0);

 VAR_5 = *VAR_2;
 VAR_6 = *VAR_3;
 FUNC_3(&VAR_4, VAR_7);

 if (VAR_6 == 0)
     return -1;

 return VAR_5;
}
