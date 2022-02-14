
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
struct async_submit_ctl {int flags; void* scribble; void* cb_param; int * cb_fn; } ;
typedef enum async_tx_flags { ____Placeholder_async_tx_flags } async_tx_flags ;
typedef int * dma_async_tx_callback ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct dma_async_tx_descriptor* FUNC_1 (struct page*,struct page*,int ,int ,size_t,struct async_submit_ctl*) ;
 struct dma_async_tx_descriptor* FUNC_2 (struct page*,struct page*,size_t,size_t,struct async_submit_ctl*) ;
 struct dma_async_tx_descriptor* FUNC_3 (struct page*,struct page**,unsigned char*,size_t,struct async_submit_ctl*) ;
 struct dma_async_tx_descriptor* FUNC_4 (struct page*,struct page**,int ,int,size_t,struct async_submit_ctl*) ;
 int FUNC_5 (struct async_submit_ctl*,int,struct dma_async_tx_descriptor*,int *,void*,void*) ;
 unsigned char* VAR_2 ;
 size_t* VAR_3 ;
 unsigned char* VAR_4 ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_6(int VAR_5, size_t VAR_6, int VAR_7, int VAR_8,
  struct page **VAR_9, struct async_submit_ctl *VAR_10)
{
 struct dma_async_tx_descriptor *VAR_11 = ((void*)0);
 struct page *VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16;
 struct page *VAR_17[2];
 unsigned char VAR_18[2];
 enum async_tx_flags VAR_19 = VAR_10->flags;
 dma_async_tx_callback VAR_20 = VAR_10->cb_fn;
 void *VAR_21 = VAR_10->cb_param;
 void *VAR_22 = VAR_10->scribble;
 int VAR_23, VAR_24, VAR_25;

 VAR_23 = 0;
 VAR_24 = -1;
 for (VAR_25 = 0; VAR_25 < VAR_5-2; VAR_25++) {
  if (VAR_9[VAR_25] == ((void*)0))
   continue;
  if (VAR_25 == VAR_7 || VAR_25 == VAR_8)
   continue;
  VAR_24 = VAR_25;
  VAR_23++;
 }
 FUNC_0(VAR_23 > 1);

 VAR_12 = VAR_9[VAR_5-2];
 VAR_13 = VAR_9[VAR_5-1];
 VAR_14 = VAR_9[VAR_24];





 VAR_15 = VAR_9[VAR_7];
 VAR_16 = VAR_9[VAR_8];

 FUNC_5(VAR_10, VAR_0, VAR_11, ((void*)0), ((void*)0), VAR_22);
 VAR_11 = FUNC_1(VAR_15, VAR_14, 0, 0, VAR_6, VAR_10);
 FUNC_5(VAR_10, VAR_0, VAR_11, ((void*)0), ((void*)0), VAR_22);
 VAR_11 = FUNC_2(VAR_16, VAR_14, VAR_3[VAR_24], VAR_6, VAR_10);


 VAR_17[0] = VAR_15;
 VAR_17[1] = VAR_12;
 FUNC_5(VAR_10, VAR_0|VAR_1, VAR_11,
     ((void*)0), ((void*)0), VAR_22);
 VAR_11 = FUNC_4(VAR_15, VAR_17, 0, 2, VAR_6, VAR_10);


 VAR_17[0] = VAR_16;
 VAR_17[1] = VAR_13;
 FUNC_5(VAR_10, VAR_0|VAR_1, VAR_11,
     ((void*)0), ((void*)0), VAR_22);
 VAR_11 = FUNC_4(VAR_16, VAR_17, 0, 2, VAR_6, VAR_10);


 VAR_17[0] = VAR_15;
 VAR_17[1] = VAR_16;
 VAR_18[0] = VAR_2[VAR_8-VAR_7];
 VAR_18[1] = VAR_4[VAR_3[VAR_7]^VAR_3[VAR_8]];
 FUNC_5(VAR_10, VAR_0, VAR_11, ((void*)0), ((void*)0), VAR_22);
 VAR_11 = FUNC_3(VAR_16, VAR_17, VAR_18, VAR_6, VAR_10);


 VAR_17[0] = VAR_15;
 VAR_17[1] = VAR_16;
 FUNC_5(VAR_10, VAR_19 | VAR_1, VAR_11, VAR_20,
     VAR_21, VAR_22);
 VAR_11 = FUNC_4(VAR_15, VAR_17, 0, 2, VAR_6, VAR_10);

 return VAR_11;
}
