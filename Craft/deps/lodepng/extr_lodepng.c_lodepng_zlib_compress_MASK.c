
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* data; size_t size; } ;
typedef TYPE_1__ ucvector ;
typedef int LodePNGCompressSettings ;


 unsigned int FUNC_0 (unsigned char const*,unsigned int) ;
 unsigned int FUNC_1 (unsigned char**,size_t*,unsigned char const*,size_t,int const*) ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (TYPE_1__*,unsigned char*,size_t) ;
 int FUNC_5 (TYPE_1__*,unsigned char) ;

unsigned FUNC_6(unsigned char** VAR_0, size_t* VAR_1, const unsigned char* VAR_2,
                               size_t VAR_3, const LodePNGCompressSettings* VAR_4)
{


  ucvector VAR_5;
  size_t VAR_6;
  unsigned VAR_7;
  unsigned char* VAR_8 = 0;
  size_t VAR_9 = 0;

  unsigned VAR_10;

  unsigned VAR_11 = 120;
  unsigned VAR_12 = 0;
  unsigned VAR_13 = 0;
  unsigned VAR_14 = 256 * VAR_11 + VAR_13 * 32 + VAR_12 * 64;
  unsigned VAR_15 = 31 - VAR_14 % 31;
  VAR_14 += VAR_15;


  FUNC_4(&VAR_5, *VAR_0, *VAR_1);

  FUNC_5(&VAR_5, (unsigned char)(VAR_14 / 256));
  FUNC_5(&VAR_5, (unsigned char)(VAR_14 % 256));

  VAR_7 = FUNC_1(&VAR_8, &VAR_9, VAR_2, VAR_3, VAR_4);

  if(!VAR_7)
  {
    VAR_10 = FUNC_0(VAR_2, (unsigned)VAR_3);
    for(VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) FUNC_5(&VAR_5, VAR_8[VAR_6]);
    FUNC_3(VAR_8);
    FUNC_2(&VAR_5, VAR_10);
  }

  *VAR_0 = VAR_5.data;
  *VAR_1 = VAR_5.size;

  return VAR_7;
}
