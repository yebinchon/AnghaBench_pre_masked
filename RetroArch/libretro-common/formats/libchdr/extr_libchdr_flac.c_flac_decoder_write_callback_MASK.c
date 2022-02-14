
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef void* int16_t ;
struct TYPE_6__ {int channels; void*** uncompressed_start; int uncompressed_offset; int uncompressed_length; scalar_t__ uncompressed_swap; } ;
typedef TYPE_2__ flac_decoder ;
struct TYPE_5__ {int channels; int blocksize; } ;
struct TYPE_7__ {TYPE_1__ header; } ;
typedef scalar_t__ FLAC__int32 ;
typedef int FLAC__StreamDecoderWriteStatus ;
typedef TYPE_3__ FLAC__Frame ;


 int VAR_0 ;
 int FUNC_0 (int) ;

FLAC__StreamDecoderWriteStatus FUNC_1(void *VAR_1, const FLAC__Frame *VAR_2, const FLAC__int32 * const VAR_3[])
{
 int VAR_4, VAR_5;
   int VAR_6, VAR_7;
 flac_decoder * VAR_8 = (flac_decoder *)VAR_1;

 FUNC_0(VAR_2->header.channels == VAR_8->channels);


 VAR_6 = VAR_8->uncompressed_swap ? 8 : 0;
 VAR_7 = VAR_2->header.blocksize;
 if (VAR_8->uncompressed_start[1] == ((void*)0))
 {
  int16_t *VAR_9 = VAR_8->uncompressed_start[0] + VAR_8->uncompressed_offset * VAR_2->header.channels;
  for (VAR_4 = 0; VAR_4 < VAR_7 && VAR_8->uncompressed_offset < VAR_8->uncompressed_length; VAR_4++, VAR_8->uncompressed_offset++)
   for (VAR_5 = 0; VAR_5 < VAR_2->header.channels; VAR_5++)
    *VAR_9++ = (int16_t)((((uint16_t)VAR_3[VAR_5][VAR_4]) << VAR_6) | (((uint16_t)VAR_3[VAR_5][VAR_4]) >> VAR_6));
 }


 else
 {
  for (VAR_4 = 0; VAR_4 < VAR_7 && VAR_8->uncompressed_offset < VAR_8->uncompressed_length; VAR_4++, VAR_8->uncompressed_offset++)
   for (VAR_5 = 0; VAR_5 < VAR_2->header.channels; VAR_5++)
    if (VAR_8->uncompressed_start[VAR_5] != ((void*)0))
     VAR_8->uncompressed_start[VAR_5][VAR_8->uncompressed_offset] = (int16_t) ( (((uint16_t)(VAR_3[VAR_5][VAR_4])) << VAR_6) | ( ((uint16_t)(VAR_3[VAR_5][VAR_4])) >> VAR_6) );
 }
 return VAR_0;
}
