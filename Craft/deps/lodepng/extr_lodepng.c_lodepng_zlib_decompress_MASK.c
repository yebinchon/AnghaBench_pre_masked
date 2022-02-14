
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ignore_adler32; } ;
typedef TYPE_1__ LodePNGDecompressSettings ;


 unsigned int FUNC_0 (unsigned char*,unsigned int) ;
 unsigned int FUNC_1 (unsigned char**,size_t*,unsigned char const*,size_t,TYPE_1__ const*) ;
 unsigned int FUNC_2 (unsigned char const*) ;

unsigned FUNC_3(unsigned char** VAR_0, size_t* VAR_1, const unsigned char* VAR_2,
                                 size_t VAR_3, const LodePNGDecompressSettings* VAR_4)
{
  unsigned VAR_5 = 0;
  unsigned VAR_6, VAR_7, VAR_8;

  if(VAR_3 < 2) return 53;

  if((VAR_2[0] * 256 + VAR_2[1]) % 31 != 0)
  {

    return 24;
  }

  VAR_6 = VAR_2[0] & 15;
  VAR_7 = (VAR_2[0] >> 4) & 15;

  VAR_8 = (VAR_2[1] >> 5) & 1;


  if(VAR_6 != 8 || VAR_7 > 7)
  {

    return 25;
  }
  if(VAR_8 != 0)
  {


    return 26;
  }

  VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2 + 2, VAR_3 - 2, VAR_4);
  if(VAR_5) return VAR_5;

  if(!VAR_4->ignore_adler32)
  {
    unsigned VAR_9 = FUNC_2(&VAR_2[VAR_3 - 4]);
    unsigned VAR_10 = FUNC_0(*VAR_0, (unsigned)(*VAR_1));
    if(VAR_10 != VAR_9) return 58;
  }

  return 0;
}
