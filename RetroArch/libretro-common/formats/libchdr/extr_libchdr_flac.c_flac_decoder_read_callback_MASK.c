
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {scalar_t__ compressed_offset; scalar_t__ compressed_length; scalar_t__ compressed_start; scalar_t__ compressed2_length; scalar_t__ compressed2_start; } ;
typedef TYPE_1__ flac_decoder ;
typedef int FLAC__byte ;
typedef int FLAC__StreamDecoderReadStatus ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,size_t) ;

FLAC__StreamDecoderReadStatus FUNC_2(void* VAR_2, FLAC__byte VAR_3[], size_t *VAR_4)
{
 flac_decoder* VAR_5 = (flac_decoder*)VAR_2;

 uint32_t VAR_6 = (uint32_t)*VAR_4;


 uint32_t VAR_7 = 0;

 if (VAR_7 < *VAR_4 && VAR_5->compressed_offset < VAR_5->compressed_length)
 {
  uint32_t VAR_8 = (uint32_t)FUNC_0(*VAR_4 - VAR_7, VAR_5->compressed_length - VAR_5->compressed_offset);
  FUNC_1(&VAR_3[VAR_7], VAR_5->compressed_start + VAR_5->compressed_offset, VAR_8);
  VAR_7 += VAR_8;
  VAR_5->compressed_offset += VAR_8;
 }


 if (VAR_7 < *VAR_4 && VAR_5->compressed_offset < VAR_5->compressed_length + VAR_5->compressed2_length)
 {
  uint32_t VAR_9 = (uint32_t)FUNC_0(*VAR_4 - VAR_7, VAR_5->compressed2_length - (VAR_5->compressed_offset - VAR_5->compressed_length));
  FUNC_1(&VAR_3[VAR_7], VAR_5->compressed2_start + VAR_5->compressed_offset - VAR_5->compressed_length, VAR_9);
  VAR_7 += VAR_9;
  VAR_5->compressed_offset += VAR_9;
 }
 *VAR_4 = VAR_7;


 return (*VAR_4 < VAR_6) ? VAR_1 : VAR_0;
}
