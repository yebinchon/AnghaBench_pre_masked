
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; int size; } ;
typedef TYPE_1__ ucvector ;
typedef int LodePNGInfo ;
typedef int LodePNGDecompressSettings ;


 int FUNC_0 (unsigned int,int) ;
 unsigned int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 unsigned int FUNC_7 (scalar_t__*,int *,unsigned char*,unsigned int,int const*) ;

__attribute__((used)) static unsigned FUNC_8(LodePNGInfo* VAR_0, const LodePNGDecompressSettings* VAR_1,
                               const unsigned char* VAR_2, size_t VAR_3)
{
  unsigned VAR_4 = 0;
  unsigned VAR_5;

  unsigned VAR_6, VAR_7;
  char *VAR_8 = 0;
  ucvector VAR_9;

  FUNC_5(&VAR_9);

  while(!VAR_4)
  {
    for(VAR_6 = 0; VAR_6 < VAR_3 && VAR_2[VAR_6] != 0; VAR_6++) ;
    if(VAR_6 + 2 >= VAR_3) FUNC_0(VAR_4, 75);
    if(VAR_6 < 1 || VAR_6 > 79) FUNC_0(VAR_4, 89);

    VAR_8 = (char*)FUNC_3(VAR_6 + 1);
    if(!VAR_8) FUNC_0(VAR_4, 83);

    VAR_8[VAR_6] = 0;
    for(VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) VAR_8[VAR_5] = VAR_2[VAR_5];

    if(VAR_2[VAR_6 + 1] != 0) FUNC_0(VAR_4, 72);

    VAR_7 = VAR_6 + 2;
    if(VAR_7 > VAR_3) FUNC_0(VAR_4, 75);

    VAR_6 = VAR_3 - VAR_7;

    VAR_4 = FUNC_7(&VAR_9.data, &VAR_9.size,
                            (unsigned char*)(&VAR_2[VAR_7]),
                            VAR_6, VAR_1);
    if(VAR_4) break;
    FUNC_6(&VAR_9, 0);

    VAR_4 = FUNC_1(VAR_0, VAR_8, (char*)VAR_9.data);

    break;
  }

  FUNC_2(VAR_8);
  FUNC_4(&VAR_9);

  return VAR_4;
}
