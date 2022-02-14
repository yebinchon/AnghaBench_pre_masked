
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FLAC__StreamDecoderWriteCallback ;
typedef int FLAC__StreamDecoderMetadataCallback ;
typedef int FLAC__StreamDecoderInitStatus ;
typedef int FLAC__StreamDecoderErrorCallback ;
typedef int FLAC__StreamDecoder ;
typedef int FILE ;


 int FUNC_0 (int *,int *,int ,int ,int ,void*,int) ;

FLAC__StreamDecoderInitStatus FUNC_1(
 FLAC__StreamDecoder *VAR_0,
 FILE *VAR_1,
 FLAC__StreamDecoderWriteCallback VAR_2,
 FLAC__StreamDecoderMetadataCallback VAR_3,
 FLAC__StreamDecoderErrorCallback VAR_4,
 void *VAR_5
)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 1);
}
