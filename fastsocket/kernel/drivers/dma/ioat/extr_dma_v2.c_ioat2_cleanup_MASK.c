
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat_chan_common {int cleanup_lock; int completion; } ;
struct ioat2_dma_chan {int ring_lock; struct ioat_chan_common base; } ;


 int FUNC_0 (struct ioat2_dma_chan*,unsigned long) ;
 int FUNC_1 (struct ioat_chan_common*,unsigned long*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ioat2_dma_chan *VAR_0)
{
 struct ioat_chan_common *VAR_1 = &VAR_0->base;
 unsigned long VAR_2;

 FUNC_2(VAR_1->completion);

 if (!FUNC_3(&VAR_1->cleanup_lock))
  return;

 if (!FUNC_1(VAR_1, &VAR_2)) {
  FUNC_4(&VAR_1->cleanup_lock);
  return;
 }

 if (!FUNC_3(&VAR_0->ring_lock)) {
  FUNC_4(&VAR_1->cleanup_lock);
  return;
 }

 FUNC_0(VAR_0, VAR_2);

 FUNC_4(&VAR_0->ring_lock);
 FUNC_4(&VAR_1->cleanup_lock);
}
