
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_async_tx_descriptor {int dummy; } ;
struct completion {int dummy; } ;
struct async_submit_ctl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dma_async_tx_descriptor* FUNC_0 (int ,int ,int,int ,struct async_submit_ctl*) ;
 int FUNC_1 (struct dma_async_tx_descriptor*) ;
 int VAR_3 ;
 void** VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct async_submit_ctl*,int ,int *,int ,struct completion*,int ) ;
 int FUNC_3 (struct completion*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (char*,int) ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_9 (int,int,int) ;
 scalar_t__ FUNC_10 (struct completion*,int ) ;

__attribute__((used)) static int FUNC_11(int VAR_9, int *VAR_10)
{
 struct dma_async_tx_descriptor *VAR_11;
 struct async_submit_ctl VAR_12;
 struct completion VAR_13;
 int VAR_14 = 0;
 int VAR_15, VAR_16;

 VAR_6 = VAR_4[VAR_9];
 VAR_7 = VAR_4[VAR_9+1];
 VAR_8 = VAR_4[VAR_9+2];

 FUNC_4(VAR_9);


 FUNC_5(FUNC_7(VAR_4[VAR_9-2]), 0xee, VAR_1);
 FUNC_5(FUNC_7(VAR_4[VAR_9-1]), 0xee, VAR_1);


 FUNC_3(&VAR_13);
 FUNC_2(&VAR_12, VAR_0, ((void*)0), VAR_3, &VAR_13, VAR_2);
 VAR_11 = FUNC_0(VAR_5, 0, VAR_9, VAR_1, &VAR_12);
 FUNC_1(VAR_11);

 if (FUNC_10(&VAR_13, FUNC_6(3000)) == 0) {
  FUNC_8("error: initial gen_syndrome(%d) timed out\n", VAR_9);
  return 1;
 }

 FUNC_8("testing the %d-disk case...\n", VAR_9);
 for (VAR_15 = 0; VAR_15 < VAR_9-1; VAR_15++)
  for (VAR_16 = VAR_15+1; VAR_16 < VAR_9; VAR_16++) {
   (*VAR_10)++;
   VAR_14 += FUNC_9(VAR_15, VAR_16, VAR_9);
  }

 return VAR_14;
}
