
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev_id; int next_lch; int * callback; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

void FUNC_11(int VAR_5)
{
 unsigned long VAR_6;

 if (VAR_3[VAR_5].dev_id == -1) {
  FUNC_8("omap_dma: trying to free unallocated DMA channel %d\n",
         VAR_5);
  return;
 }

 if (FUNC_3()) {

  FUNC_6(0, FUNC_1(VAR_5));

  FUNC_6(0, FUNC_0(VAR_5));
 }

 if (FUNC_4()) {
  u32 VAR_7;

  FUNC_9(&VAR_4, VAR_6);

  VAR_7 = FUNC_5(VAR_0);
  VAR_7 &= ~(1 << VAR_5);
  FUNC_6(VAR_7, VAR_0);
  FUNC_10(&VAR_4, VAR_6);


  FUNC_6(VAR_2, FUNC_2(VAR_5));
  FUNC_6(1 << VAR_5, VAR_1);


  FUNC_6(0, FUNC_1(VAR_5));


  FUNC_6(0, FUNC_0(VAR_5));
  FUNC_7(VAR_5);
 }

 FUNC_9(&VAR_4, VAR_6);
 VAR_3[VAR_5].dev_id = -1;
 VAR_3[VAR_5].next_lch = -1;
 VAR_3[VAR_5].callback = ((void*)0);
 FUNC_10(&VAR_4, VAR_6);
}
