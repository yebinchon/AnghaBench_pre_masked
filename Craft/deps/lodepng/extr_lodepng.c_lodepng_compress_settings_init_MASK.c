
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int btype; int use_lz77; int minmatch; int nicematch; int lazymatching; scalar_t__ custom_context; scalar_t__ custom_deflate; scalar_t__ custom_zlib; int windowsize; } ;
typedef TYPE_1__ LodePNGCompressSettings ;


 int VAR_0 ;

void FUNC_0(LodePNGCompressSettings* VAR_1)
{

  VAR_1->btype = 2;
  VAR_1->use_lz77 = 1;
  VAR_1->windowsize = VAR_0;
  VAR_1->minmatch = 3;
  VAR_1->nicematch = 128;
  VAR_1->lazymatching = 1;

  VAR_1->custom_zlib = 0;
  VAR_1->custom_deflate = 0;
  VAR_1->custom_context = 0;
}
