
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ chd_error ;
struct TYPE_2__ {int subcode_decompressor; int base_decompressor; int * buffer; } ;
typedef TYPE_1__ cdlz_codec_data ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int) ;

chd_error FUNC_3(void* VAR_4, uint32_t VAR_5)
{
 chd_error VAR_6;
 cdlz_codec_data* VAR_7 = (cdlz_codec_data*) VAR_4;


 VAR_7->buffer = (uint8_t*)FUNC_1(sizeof(uint8_t) * VAR_5);
 if (VAR_7->buffer == ((void*)0))
  return VAR_3;

 VAR_6 = FUNC_0(&VAR_7->base_decompressor, (VAR_5 / VAR_0) * VAR_1);
 if (VAR_6 != VAR_2)
  return VAR_6;







 return VAR_2;
}
