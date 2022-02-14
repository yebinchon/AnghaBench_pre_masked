
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ consumed_bits; scalar_t__ consumed_words; scalar_t__ bytes; scalar_t__ words; } ;
typedef int FLAC__bool ;
typedef TYPE_1__ FLAC__BitReader ;



FLAC__bool FUNC_0(FLAC__BitReader *VAR_0)
{
 VAR_0->words = VAR_0->bytes = 0;
 VAR_0->consumed_words = VAR_0->consumed_bits = 0;
 return 1;
}
