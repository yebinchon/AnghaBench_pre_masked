
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ chd_error ;
struct TYPE_4__ {int * decoder; } ;
struct TYPE_3__ {int* buffer; int swap_endian; TYPE_2__ decoder; int subcode_decompressor; } ;
typedef TYPE_1__ cdfl_codec_data ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int) ;

chd_error FUNC_3(void *VAR_5, uint32_t VAR_6)
{



   uint16_t VAR_7 = 0;
 cdfl_codec_data *VAR_8 = (cdfl_codec_data*)VAR_5;


 if (VAR_6 % VAR_0 != 0)
  return VAR_2;

 VAR_8->buffer = (uint8_t*)FUNC_1(sizeof(uint8_t) * VAR_6);
 if (VAR_8->buffer == ((void*)0))
  return VAR_4;


 *(uint8_t *)(&VAR_7) = 1;
 VAR_8->swap_endian = (VAR_7 & 1);
 FUNC_0(&VAR_8->decoder);
 if (VAR_8->decoder.decoder == ((void*)0))
  return VAR_4;

 return VAR_3;
}
