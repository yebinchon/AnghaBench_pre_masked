
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int bitdepth; int colortype; } ;
struct TYPE_7__ {TYPE_1__ info_raw; } ;
typedef TYPE_2__ LodePNGState ;
typedef int LodePNGColorType ;


 unsigned int FUNC_0 (unsigned char**,unsigned int*,unsigned int*,TYPE_2__*,unsigned char const*,size_t) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

unsigned FUNC_3(unsigned char** VAR_0, unsigned* VAR_1, unsigned* VAR_2, const unsigned char* VAR_3,
                               size_t VAR_4, LodePNGColorType VAR_5, unsigned VAR_6)
{
  unsigned VAR_7;
  LodePNGState VAR_8;
  FUNC_2(&VAR_8);
  VAR_8.info_raw.colortype = VAR_5;
  VAR_8.info_raw.bitdepth = VAR_6;
  VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_8, VAR_3, VAR_4);
  FUNC_1(&VAR_8);
  return VAR_7;
}
