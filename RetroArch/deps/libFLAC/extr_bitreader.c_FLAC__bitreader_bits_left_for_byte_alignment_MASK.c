
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int consumed_bits; } ;
typedef TYPE_1__ FLAC__BitReader ;



unsigned FUNC_0(const FLAC__BitReader *VAR_0)
{
 return 8 - (VAR_0->consumed_bits & 7);
}
