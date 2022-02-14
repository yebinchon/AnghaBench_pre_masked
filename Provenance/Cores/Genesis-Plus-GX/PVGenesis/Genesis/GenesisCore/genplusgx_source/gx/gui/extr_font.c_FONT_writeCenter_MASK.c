
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {int fbWidth; int efbHeight; } ;
typedef int GXColor ;


 int FUNC_0 (char,int,int,int,int ) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_2 ;

int FUNC_2(char *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, GXColor VAR_8)
{
  int VAR_9=0;
  int VAR_10 = 0;
  while (VAR_3[VAR_9] && (VAR_3[VAR_9] != '\n'))
  {
    VAR_10 += (VAR_1[(u8)VAR_3[VAR_9++]] * VAR_4) / VAR_0;
  }

  if ((VAR_5 + VAR_10) > VAR_6) VAR_10 = VAR_6 - VAR_5;
  int VAR_11 = VAR_5 + (VAR_6 - VAR_5 - VAR_10 - VAR_2->fbWidth) / 2;
  VAR_7 -= (VAR_2->efbHeight / 2);
  VAR_6 -= (VAR_2->fbWidth / 2);

  while (*VAR_3 && (*VAR_3 != '\n'))
  {
    VAR_10 = (VAR_1[(u8)*VAR_3] * VAR_4) / VAR_0;
    if ((VAR_11 + VAR_10) > VAR_6) return FUNC_1(VAR_3);
    FUNC_0(*VAR_3, VAR_11, VAR_7, VAR_4,VAR_8);
    VAR_11 += VAR_10;
    VAR_3++;
  }

  if (*VAR_3 == '\n')
  {
    VAR_3++;
    return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6 + (VAR_2->fbWidth / 2), VAR_7 + VAR_4 + (VAR_2->efbHeight / 2), VAR_8);
  }
  return 0;
}
