
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LodePNGInfo ;


 int FUNC_0 (unsigned int,int) ;
 unsigned int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (unsigned int) ;

__attribute__((used)) static unsigned FUNC_4(LodePNGInfo* VAR_0, const unsigned char* VAR_1, size_t VAR_2)
{
  unsigned VAR_3 = 0;
  char *VAR_4 = 0, *VAR_5 = 0;
  unsigned VAR_6;

  while(!VAR_3)
  {
    unsigned VAR_7, VAR_8;

    VAR_7 = 0;
    while(VAR_7 < VAR_2 && VAR_1[VAR_7] != 0) VAR_7++;


    if(VAR_7 < 1 || VAR_7 > 79) FUNC_0(VAR_3, 89);

    VAR_4 = (char*)FUNC_3(VAR_7 + 1);
    if(!VAR_4) FUNC_0(VAR_3, 83);

    VAR_4[VAR_7] = 0;
    for(VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) VAR_4[VAR_6] = VAR_1[VAR_6];

    VAR_8 = VAR_7 + 1;

    VAR_7 = VAR_2 < VAR_8 ? 0 : VAR_2 - VAR_8;
    VAR_5 = (char*)FUNC_3(VAR_7 + 1);
    if(!VAR_5) FUNC_0(VAR_3, 83);

    VAR_5[VAR_7] = 0;
    for(VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) VAR_5[VAR_6] = VAR_1[VAR_8 + VAR_6];

    VAR_3 = FUNC_1(VAR_0, VAR_4, VAR_5);

    break;
  }

  FUNC_2(VAR_4);
  FUNC_2(VAR_5);

  return VAR_3;
}
