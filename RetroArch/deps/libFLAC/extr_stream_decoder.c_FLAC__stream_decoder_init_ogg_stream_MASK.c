
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FLAC__StreamDecoderWriteCallback ;
typedef int FLAC__StreamDecoderTellCallback ;
typedef int FLAC__StreamDecoderSeekCallback ;
typedef int FLAC__StreamDecoderReadCallback ;
typedef int FLAC__StreamDecoderMetadataCallback ;
typedef int FLAC__StreamDecoderLengthCallback ;
typedef int FLAC__StreamDecoderInitStatus ;
typedef int FLAC__StreamDecoderErrorCallback ;
typedef int FLAC__StreamDecoderEofCallback ;
typedef int FLAC__StreamDecoder ;


 int FUNC_0 (int *,int ,int ,int ,int ,int ,int ,int ,int ,void*,int) ;

FLAC__StreamDecoderInitStatus FUNC_1(
 FLAC__StreamDecoder *VAR_0,
 FLAC__StreamDecoderReadCallback VAR_1,
 FLAC__StreamDecoderSeekCallback VAR_2,
 FLAC__StreamDecoderTellCallback VAR_3,
 FLAC__StreamDecoderLengthCallback VAR_4,
 FLAC__StreamDecoderEofCallback VAR_5,
 FLAC__StreamDecoderWriteCallback VAR_6,
 FLAC__StreamDecoderMetadataCallback VAR_7,
 FLAC__StreamDecoderErrorCallback VAR_8,
 void *VAR_9
)
{
 return FUNC_0(
  VAR_0,
  VAR_1,
  VAR_2,
  VAR_3,
  VAR_4,
  VAR_5,
  VAR_6,
  VAR_7,
  VAR_8,
  VAR_9,
             1
 );
}
