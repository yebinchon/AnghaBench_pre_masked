
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ custom_context; scalar_t__ custom_inflate; scalar_t__ custom_zlib; scalar_t__ ignore_adler32; } ;
typedef TYPE_1__ LodePNGDecompressSettings ;



void FUNC_0(LodePNGDecompressSettings* VAR_0)
{
  VAR_0->ignore_adler32 = 0;

  VAR_0->custom_zlib = 0;
  VAR_0->custom_inflate = 0;
  VAR_0->custom_context = 0;
}
