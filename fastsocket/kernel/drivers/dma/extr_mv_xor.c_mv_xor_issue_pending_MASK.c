
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_xor_chan {scalar_t__ pending; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mv_xor_chan*) ;
 struct mv_xor_chan* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_2(struct dma_chan *VAR_1)
{
 struct mv_xor_chan *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->pending >= VAR_0) {
  VAR_2->pending = 0;
  FUNC_0(VAR_2);
 }
}
