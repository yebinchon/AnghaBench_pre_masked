
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ chd_error ;
struct TYPE_2__ {int subcode_decompressor; int base_decompressor; int * buffer; } ;
typedef TYPE_1__ cdzl_codec_data ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int) ;

chd_error FUNC_2(void *VAR_5, uint32_t VAR_6)
{
 chd_error VAR_7;
 cdzl_codec_data* VAR_8 = (cdzl_codec_data*)VAR_5;


 if (VAR_6 % VAR_0 != 0)
  return VAR_2;

 VAR_8->buffer = (uint8_t*)FUNC_0(sizeof(uint8_t) * VAR_6);
 if (VAR_8->buffer == ((void*)0))
  return VAR_4;

 VAR_7 = FUNC_1(&VAR_8->base_decompressor, (VAR_6 / VAR_0) * VAR_1);
 if (VAR_7 != VAR_3)
  return VAR_7;







 return VAR_3;
}
