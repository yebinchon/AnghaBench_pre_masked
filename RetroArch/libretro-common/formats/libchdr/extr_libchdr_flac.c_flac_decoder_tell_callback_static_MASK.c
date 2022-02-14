
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int compressed_offset; } ;
typedef TYPE_1__ flac_decoder ;
typedef int FLAC__uint64 ;
typedef int FLAC__StreamDecoderTellStatus ;
typedef int FLAC__StreamDecoder ;


 int VAR_0 ;

FLAC__StreamDecoderTellStatus FUNC_0(const FLAC__StreamDecoder *VAR_1, FLAC__uint64 *VAR_2, void *VAR_3)
{
 *VAR_2 = ((flac_decoder *)VAR_3)->compressed_offset;
 return VAR_0;
}
