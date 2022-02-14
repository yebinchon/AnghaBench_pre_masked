
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_2__ {int decoder; } ;
typedef TYPE_1__ lzma_codec_data ;
typedef int chd_error ;
typedef scalar_t__ SRes ;
typedef int ELzmaStatus ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,size_t*,int const*,size_t*,int ,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;

chd_error FUNC_2(void* VAR_5, const uint8_t *VAR_6, uint32_t VAR_7, uint8_t *VAR_8, uint32_t VAR_9)
{
 ELzmaStatus VAR_10;
   SRes VAR_11;
   size_t VAR_12, VAR_13;

 lzma_codec_data* VAR_14 = (lzma_codec_data*) VAR_5;
 FUNC_1(&VAR_14->decoder);


 VAR_12 = VAR_7;
 VAR_13 = VAR_9;
 VAR_11 = FUNC_0(&VAR_14->decoder, VAR_8, &VAR_13, VAR_6, &VAR_12, VAR_2, &VAR_10);
 if ((VAR_11 != VAR_4 && VAR_11 != VAR_3) || VAR_12 != VAR_7 || VAR_13 != VAR_9)
  return VAR_0;
 return VAR_1;
}
