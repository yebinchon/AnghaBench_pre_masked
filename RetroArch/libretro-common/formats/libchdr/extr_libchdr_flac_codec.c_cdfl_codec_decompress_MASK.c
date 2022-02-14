
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int16_t ;
typedef scalar_t__ chd_error ;
struct TYPE_2__ {int * buffer; int decoder; int subcode_decompressor; int swap_endian; } ;
typedef TYPE_1__ cdfl_codec_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int,int ,int const*,int) ;
 int FUNC_4 (int *,int *,int) ;
 scalar_t__ FUNC_5 (int *,int const*,int,int *,int) ;

chd_error FUNC_6(void *VAR_5, const uint8_t *VAR_6, uint32_t VAR_7, uint8_t *VAR_8, uint32_t VAR_9)
{
 uint32_t VAR_10;
   uint8_t *VAR_11;




 cdfl_codec_data *VAR_12 = (cdfl_codec_data*)VAR_5;


 uint32_t VAR_13 = VAR_9 / VAR_0;

 if (!FUNC_3(&VAR_12->decoder, 44100, 2, FUNC_0(VAR_13 * VAR_1), VAR_6, VAR_7))
  return VAR_3;
 VAR_11 = &VAR_12->buffer[0];
 if (!FUNC_1(&VAR_12->decoder, (int16_t *)(VAR_11), VAR_13 * VAR_1/4, VAR_12->swap_endian))
  return VAR_3;
 FUNC_2(&VAR_12->decoder);



 for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++)
 {
  FUNC_4(&VAR_8[VAR_10 * VAR_0], &VAR_12->buffer[VAR_10 * VAR_1], VAR_1);



 }

 return VAR_4;
}
