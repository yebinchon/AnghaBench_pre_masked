
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmatest_chan {int node; int threads; struct dma_chan* chan; } ;
struct dma_device {int cap_mask; } ;
struct dma_chan {struct dma_device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dma_chan*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (struct dmatest_chan*,int ) ;
 int VAR_5 ;
 struct dmatest_chan* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_6 ;
 int FUNC_6 (char*,unsigned int,int ) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int FUNC_8(struct dma_chan *VAR_7)
{
 struct dmatest_chan *VAR_8;
 struct dma_device *VAR_9 = VAR_7->device;
 unsigned int VAR_10 = 0;
 unsigned int VAR_11;

 VAR_8 = FUNC_4(sizeof(struct dmatest_chan), VAR_4);
 if (!VAR_8) {
  FUNC_7("dmatest: No memory for %s\n", FUNC_1(VAR_7));
  return -VAR_3;
 }

 VAR_8->chan = VAR_7;
 FUNC_0(&VAR_8->threads);

 if (FUNC_2(VAR_0, VAR_9->cap_mask)) {
  VAR_11 = FUNC_3(VAR_8, VAR_0);
  VAR_10 += VAR_11 > 0 ? VAR_11 : 0;
 }
 if (FUNC_2(VAR_2, VAR_9->cap_mask)) {
  VAR_11 = FUNC_3(VAR_8, VAR_2);
  VAR_10 += VAR_11 > 0 ? VAR_11 : 0;
 }
 if (FUNC_2(VAR_1, VAR_9->cap_mask)) {
  VAR_11 = FUNC_3(VAR_8, VAR_1);
  VAR_10 += VAR_11 > 0 ?: 0;
 }

 FUNC_6("dmatest: Started %u threads using %s\n",
  VAR_10, FUNC_1(VAR_7));

 FUNC_5(&VAR_8->node, &VAR_5);
 VAR_6++;

 return 0;
}
