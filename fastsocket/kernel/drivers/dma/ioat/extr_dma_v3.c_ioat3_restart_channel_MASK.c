
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ioat_chan_common {int dummy; } ;
struct ioat2_dma_chan {struct ioat_chan_common base; } ;


 int FUNC_0 (struct ioat2_dma_chan*,unsigned long) ;
 int FUNC_1 (struct ioat2_dma_chan*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct ioat_chan_common*) ;
 scalar_t__ FUNC_4 (struct ioat_chan_common*,unsigned long*) ;
 int FUNC_5 (struct ioat_chan_common*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct ioat2_dma_chan *VAR_0)
{
 struct ioat_chan_common *VAR_1 = &VAR_0->base;
 unsigned long VAR_2;
 u32 VAR_3;

 VAR_3 = FUNC_3(VAR_1);
 if (FUNC_6(VAR_3) || FUNC_7(VAR_3))
  FUNC_5(VAR_1);
 while (FUNC_6(VAR_3) || FUNC_7(VAR_3)) {
  VAR_3 = FUNC_3(VAR_1);
  FUNC_2();
 }

 if (FUNC_4(VAR_1, &VAR_2))
  FUNC_0(VAR_0, VAR_2);

 FUNC_1(VAR_0);
}
