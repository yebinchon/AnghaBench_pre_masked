
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ uncompressed_swap; scalar_t__ uncompressed_length; scalar_t__ uncompressed_offset; scalar_t__ compressed2_length; int * compressed2_start; scalar_t__ compressed_length; int * compressed_start; scalar_t__ compressed_offset; scalar_t__ bits_per_sample; scalar_t__ channels; scalar_t__ sample_rate; int decoder; } ;
typedef TYPE_1__ flac_decoder ;


 int FUNC_0 () ;

void FUNC_1(flac_decoder *VAR_0)
{
 VAR_0->decoder = FUNC_0();
 VAR_0->sample_rate = 0;
 VAR_0->channels = 0;
 VAR_0->bits_per_sample = 0;
 VAR_0->compressed_offset = 0;
 VAR_0->compressed_start = ((void*)0);
 VAR_0->compressed_length = 0;
 VAR_0->compressed2_start = ((void*)0);
 VAR_0->compressed2_length = 0;
 VAR_0->uncompressed_offset = 0;
 VAR_0->uncompressed_length = 0;
 VAR_0->uncompressed_swap = 0;
}
