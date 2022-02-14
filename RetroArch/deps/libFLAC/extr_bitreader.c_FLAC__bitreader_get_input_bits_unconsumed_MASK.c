
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int words; int consumed_words; int bytes; int consumed_bits; } ;
typedef TYPE_1__ FLAC__BitReader ;


 int VAR_0 ;

unsigned FUNC_0(const FLAC__BitReader *VAR_1)
{
 return (VAR_1->words-VAR_1->consumed_words)*VAR_0 + VAR_1->bytes*8 - VAR_1->consumed_bits;
}
