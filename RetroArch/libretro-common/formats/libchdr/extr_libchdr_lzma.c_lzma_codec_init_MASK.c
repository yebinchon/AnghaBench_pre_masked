
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int decoder; int allocator; } ;
typedef TYPE_1__ lzma_codec_data ;
typedef int lzma_allocator ;
typedef int decoder_props ;
typedef int chd_error ;
struct TYPE_7__ {int level; int reduceSize; } ;
typedef int ISzAlloc ;
typedef TYPE_2__ CLzmaEncProps ;
typedef int CLzmaEncHandle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int *) ;
 scalar_t__ FUNC_6 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ,int *,size_t*) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int *) ;

chd_error FUNC_9(void* VAR_4, uint32_t VAR_5)
{
 CLzmaEncProps VAR_6;
   CLzmaEncHandle VAR_7;
 uint8_t VAR_8[VAR_2];
   lzma_allocator* VAR_9;
   size_t VAR_10;
 lzma_codec_data* VAR_11 = (lzma_codec_data*) VAR_4;


 FUNC_1(&VAR_11->decoder);







 FUNC_2(&VAR_6);
 VAR_6.level = 9;
 VAR_6.reduceSize = VAR_5;
 FUNC_3(&VAR_6);


 VAR_9 = &VAR_11->allocator;
 FUNC_8(VAR_9);
 VAR_7 = FUNC_4((ISzAlloc*)VAR_9);
 if (!VAR_7)
  return VAR_0;
 if (FUNC_6(VAR_7, &VAR_6) != VAR_3)
 {
  FUNC_5(VAR_7, (ISzAlloc*)&VAR_9, (ISzAlloc*)&VAR_9);
  return VAR_0;
 }
 VAR_10 = sizeof(VAR_8);
 if (FUNC_7(VAR_7, VAR_8, &VAR_10) != VAR_3)
 {
  FUNC_5(VAR_7, (ISzAlloc*)VAR_9, (ISzAlloc*)VAR_9);
  return VAR_0;
 }
 FUNC_5(VAR_7, (ISzAlloc*)VAR_9, (ISzAlloc*)VAR_9);


 if (FUNC_0(&VAR_11->decoder, VAR_8, VAR_2, (ISzAlloc*)VAR_9) != VAR_3)
  return VAR_0;


 return VAR_1;
}
