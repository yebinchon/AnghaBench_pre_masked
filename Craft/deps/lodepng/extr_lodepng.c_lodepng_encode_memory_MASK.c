
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned int bitdepth; void* colortype; } ;
struct TYPE_9__ {TYPE_1__ color; } ;
struct TYPE_10__ {unsigned int bitdepth; void* colortype; } ;
struct TYPE_11__ {unsigned int error; TYPE_2__ info_png; TYPE_3__ info_raw; } ;
typedef TYPE_4__ LodePNGState ;
typedef void* LodePNGColorType ;


 int FUNC_0 (unsigned char**,size_t*,unsigned char const*,unsigned int,unsigned int,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;

unsigned FUNC_3(unsigned char** VAR_0, size_t* VAR_1, const unsigned char* VAR_2,
                               unsigned VAR_3, unsigned VAR_4, LodePNGColorType VAR_5, unsigned VAR_6)
{
  unsigned VAR_7;
  LodePNGState VAR_8;
  FUNC_2(&VAR_8);
  VAR_8.info_raw.colortype = VAR_5;
  VAR_8.info_raw.bitdepth = VAR_6;
  VAR_8.info_png.color.colortype = VAR_5;
  VAR_8.info_png.color.bitdepth = VAR_6;
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_8);
  VAR_7 = VAR_8.error;
  FUNC_1(&VAR_8);
  return VAR_7;
}
