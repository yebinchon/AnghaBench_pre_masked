
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned char* data; scalar_t__ size; scalar_t__ allocsize; } ;
typedef TYPE_1__ ucvector ;
typedef int LodePNGInfo ;
typedef int LodePNGDecompressSettings ;


 int FUNC_0 (unsigned int,int) ;
 unsigned int FUNC_1 (int *,char*,char*,char*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,unsigned int) ;
 unsigned int FUNC_8 (unsigned char**,scalar_t__*,unsigned char*,unsigned int,int const*) ;

__attribute__((used)) static unsigned FUNC_9(LodePNGInfo* VAR_0, const LodePNGDecompressSettings* VAR_1,
                               const unsigned char* VAR_2, size_t VAR_3)
{
  unsigned VAR_4 = 0;
  unsigned VAR_5;

  unsigned VAR_6, VAR_7, VAR_8;
  char *VAR_9 = 0, *VAR_10 = 0, *VAR_11 = 0;
  ucvector VAR_12;
  FUNC_5(&VAR_12);

  while(!VAR_4)
  {


    if(VAR_3 < 5) FUNC_0(VAR_4, 30);


    for(VAR_6 = 0; VAR_6 < VAR_3 && VAR_2[VAR_6] != 0; VAR_6++) ;
    if(VAR_6 + 3 >= VAR_3) FUNC_0(VAR_4, 75);
    if(VAR_6 < 1 || VAR_6 > 79) FUNC_0(VAR_4, 89);

    VAR_9 = (char*)FUNC_3(VAR_6 + 1);
    if(!VAR_9) FUNC_0(VAR_4, 83);

    VAR_9[VAR_6] = 0;
    for(VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) VAR_9[VAR_5] = VAR_2[VAR_5];


    VAR_8 = VAR_2[VAR_6 + 1];
    if(VAR_2[VAR_6 + 2] != 0) FUNC_0(VAR_4, 72);





    VAR_7 = VAR_6 + 3;
    VAR_6 = 0;
    for(VAR_5 = VAR_7; VAR_5 < VAR_3 && VAR_2[VAR_5] != 0; VAR_5++) VAR_6++;

    VAR_10 = (char*)FUNC_3(VAR_6 + 1);
    if(!VAR_10) FUNC_0(VAR_4, 83);

    VAR_10[VAR_6] = 0;
    for(VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) VAR_10[VAR_5] = VAR_2[VAR_7 + VAR_5];


    VAR_7 += VAR_6 + 1;
    VAR_6 = 0;
    for(VAR_5 = VAR_7; VAR_5 < VAR_3 && VAR_2[VAR_5] != 0; VAR_5++) VAR_6++;

    VAR_11 = (char*)FUNC_3(VAR_6 + 1);
    if(!VAR_11) FUNC_0(VAR_4, 83);

    VAR_11[VAR_6] = 0;
    for(VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) VAR_11[VAR_5] = VAR_2[VAR_7 + VAR_5];


    VAR_7 += VAR_6 + 1;

    VAR_6 = VAR_3 < VAR_7 ? 0 : VAR_3 - VAR_7;

    if(VAR_8)
    {

      VAR_4 = FUNC_8(&VAR_12.data, &VAR_12.size,
                              (unsigned char*)(&VAR_2[VAR_7]),
                              VAR_6, VAR_1);
      if(VAR_4) break;
      if(VAR_12.allocsize < VAR_12.size) VAR_12.allocsize = VAR_12.size;
      FUNC_6(&VAR_12, 0);
    }
    else
    {
      if(!FUNC_7(&VAR_12, VAR_6 + 1)) FUNC_0(VAR_4, 83 );

      VAR_12.data[VAR_6] = 0;
      for(VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) VAR_12.data[VAR_5] = VAR_2[VAR_7 + VAR_5];
    }

    VAR_4 = FUNC_1(VAR_0, VAR_9, VAR_10, VAR_11, (char*)VAR_12.data);

    break;
  }

  FUNC_2(VAR_9);
  FUNC_2(VAR_10);
  FUNC_2(VAR_11);
  FUNC_4(&VAR_12);

  return VAR_4;
}
