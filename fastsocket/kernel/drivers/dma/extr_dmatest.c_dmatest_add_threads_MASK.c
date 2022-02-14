
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmatest_thread {int type; int node; int task; struct dma_chan* chan; } ;
struct dmatest_chan {int threads; struct dma_chan* chan; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_transaction_type { ____Placeholder_dma_transaction_type } dma_transaction_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct dma_chan*) ;
 int VAR_5 ;
 int FUNC_2 (struct dmatest_thread*) ;
 int FUNC_3 (int ,struct dmatest_thread*,char*,int ,char*,unsigned int) ;
 struct dmatest_thread* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*,int ,char*,unsigned int) ;
 int FUNC_7 () ;
 unsigned int VAR_6 ;

__attribute__((used)) static int FUNC_8(struct dmatest_chan *VAR_7, enum dma_transaction_type VAR_8)
{
 struct dmatest_thread *VAR_9;
 struct dma_chan *VAR_10 = VAR_7->chan;
 char *VAR_11;
 unsigned int VAR_12;

 if (VAR_8 == VAR_0)
  VAR_11 = "copy";
 else if (VAR_8 == VAR_2)
  VAR_11 = "xor";
 else if (VAR_8 == VAR_1)
  VAR_11 = "pq";
 else
  return -VAR_3;

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  VAR_9 = FUNC_4(sizeof(struct dmatest_thread), VAR_4);
  if (!VAR_9) {
   FUNC_6("dmatest: No memory for %s-%s%u\n",
       FUNC_1(VAR_10), VAR_11, VAR_12);

   break;
  }
  VAR_9->chan = VAR_7->chan;
  VAR_9->type = VAR_8;
  FUNC_7();
  VAR_9->task = FUNC_3(VAR_5, VAR_9, "%s-%s%u",
    FUNC_1(VAR_10), VAR_11, VAR_12);
  if (FUNC_0(VAR_9->task)) {
   FUNC_6("dmatest: Failed to run thread %s-%s%u\n",
     FUNC_1(VAR_10), VAR_11, VAR_12);
   FUNC_2(VAR_9);
   break;
  }



  FUNC_5(&VAR_9->node, &VAR_7->threads);
 }

 return VAR_12;
}
