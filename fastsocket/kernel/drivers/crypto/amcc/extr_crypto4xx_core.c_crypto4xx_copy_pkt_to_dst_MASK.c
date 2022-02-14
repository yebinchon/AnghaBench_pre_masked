
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct scatterlist {size_t length; int offset; } ;
struct pd_uinfo {size_t first_sd; } ;
struct crypto4xx_device {size_t scatter_buffer_size; TYPE_1__* core_dev; } ;
struct ce_pd {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto4xx_device*,int *,size_t*,size_t*,size_t*,size_t*) ;
 int FUNC_1 (int ,int ,int ,size_t,int ) ;
 int FUNC_2 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_3(struct crypto4xx_device *VAR_1,
          struct ce_pd *VAR_2,
          struct pd_uinfo *VAR_3,
          u32 VAR_4,
          struct scatterlist *VAR_5)
{
 dma_addr_t VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 struct scatterlist *VAR_12;

 VAR_7 = VAR_3->first_sd;
 VAR_8 = 0;
 VAR_10 = 0;

 while (VAR_4) {
  VAR_12 = &VAR_5[VAR_10];
  VAR_11 = VAR_12->length;
  VAR_6 = FUNC_1(VAR_1->core_dev->device, FUNC_2(VAR_12),
    VAR_12->offset, VAR_12->length, VAR_0);

  if (VAR_8 == 0) {
   VAR_9 = (VAR_4 <= VAR_12->length) ? VAR_4 : VAR_12->length;
   while (FUNC_0(VAR_1, &VAR_6, &VAR_9,
    &VAR_7, &VAR_8, &VAR_4))
    ;
   if (!VAR_4)
    return;
   VAR_10++;
  } else {
   VAR_9 = (VAR_4 <= (VAR_1->scatter_buffer_size - VAR_8)) ?
    VAR_4 : (VAR_1->scatter_buffer_size - VAR_8);
   VAR_9 = (VAR_12->length < VAR_9) ? VAR_12->length : VAR_9;
   while (FUNC_0(VAR_1, &VAR_6, &VAR_9,
            &VAR_7, &VAR_8, &VAR_4))
    ;
   if (!VAR_4)
    return;
   VAR_11 -= VAR_9;
   if (VAR_11) {
    VAR_6 += VAR_9;
    while (FUNC_0(VAR_1, &VAR_6,
     &VAR_11, &VAR_7, &VAR_8, &VAR_4))
     ;
   }
   VAR_10++;
  }
 }
}
