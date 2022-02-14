
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {unsigned char bitdepth; scalar_t__ colortype; } ;
struct TYPE_11__ {unsigned char compression_method; unsigned char filter_method; unsigned char interlace_method; TYPE_2__ color; } ;
struct TYPE_8__ {int ignore_crc; } ;
struct TYPE_10__ {int error; TYPE_1__ decoder; TYPE_4__ info_png; } ;
typedef TYPE_3__ LodePNGState ;
typedef TYPE_4__ LodePNGInfo ;
typedef scalar_t__ LodePNGColorType ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__,unsigned char) ;
 unsigned int FUNC_2 (unsigned char const*,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 unsigned int FUNC_5 (unsigned char const*) ;

unsigned FUNC_6(unsigned* VAR_0, unsigned* VAR_1, LodePNGState* VAR_2,
                         const unsigned char* VAR_3, size_t VAR_4)
{
  LodePNGInfo* VAR_5 = &VAR_2->info_png;
  if(VAR_4 == 0 || VAR_3 == 0)
  {
    FUNC_0(VAR_2->error, 48);
  }
  if(VAR_4 < 29)
  {
    FUNC_0(VAR_2->error, 27);
  }


  FUNC_3(VAR_5);
  FUNC_4(VAR_5);

  if(VAR_3[0] != 137 || VAR_3[1] != 80 || VAR_3[2] != 78 || VAR_3[3] != 71
     || VAR_3[4] != 13 || VAR_3[5] != 10 || VAR_3[6] != 26 || VAR_3[7] != 10)
  {
    FUNC_0(VAR_2->error, 28);
  }
  if(VAR_3[12] != 'I' || VAR_3[13] != 'H' || VAR_3[14] != 'D' || VAR_3[15] != 'R')
  {
    FUNC_0(VAR_2->error, 29);
  }


  *VAR_0 = FUNC_5(&VAR_3[16]);
  *VAR_1 = FUNC_5(&VAR_3[20]);
  VAR_5->color.bitdepth = VAR_3[24];
  VAR_5->color.colortype = (LodePNGColorType)VAR_3[25];
  VAR_5->compression_method = VAR_3[26];
  VAR_5->filter_method = VAR_3[27];
  VAR_5->interlace_method = VAR_3[28];

  if(!VAR_2->decoder.ignore_crc)
  {
    unsigned VAR_6 = FUNC_5(&VAR_3[29]);
    unsigned VAR_7 = FUNC_2(&VAR_3[12], 17);
    if(VAR_6 != VAR_7)
    {
      FUNC_0(VAR_2->error, 57);
    }
  }


  if(VAR_5->compression_method != 0) FUNC_0(VAR_2->error, 32);

  if(VAR_5->filter_method != 0) FUNC_0(VAR_2->error, 33);

  if(VAR_5->interlace_method > 1) FUNC_0(VAR_2->error, 34);

  VAR_2->error = FUNC_1(VAR_5->color.colortype, VAR_5->color.bitdepth);
  return VAR_2->error;
}
