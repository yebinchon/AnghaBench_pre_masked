
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int16_t ;
struct TYPE_3__ {scalar_t__ uncompressed_offset; scalar_t__ uncompressed_length; int uncompressed_swap; int decoder; int ** uncompressed_start; } ;
typedef TYPE_1__ flac_decoder ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int ,int) ;

int FUNC_2(flac_decoder* VAR_0, int16_t *VAR_1, uint32_t VAR_2, int VAR_3)
{

 FUNC_1(VAR_0->uncompressed_start, 0, sizeof(VAR_0->uncompressed_start));
 VAR_0->uncompressed_start[0] = VAR_1;
 VAR_0->uncompressed_offset = 0;
 VAR_0->uncompressed_length = VAR_2;
 VAR_0->uncompressed_swap = VAR_3;


 while (VAR_0->uncompressed_offset < VAR_0->uncompressed_length)
  if (!FUNC_0(VAR_0->decoder))
   return 0;
 return 1;
}
