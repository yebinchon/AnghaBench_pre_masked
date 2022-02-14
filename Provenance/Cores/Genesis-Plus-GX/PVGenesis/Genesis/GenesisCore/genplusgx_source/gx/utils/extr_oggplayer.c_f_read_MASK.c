
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; scalar_t__ pos; int mem; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (void*,int,int) ;
 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static int FUNC_2(void * VAR_1, int VAR_2, int VAR_3, int *VAR_4)
{
  int VAR_5;
  int VAR_6;
  int VAR_7;

  if (VAR_2 * VAR_3 <= 0)
    return 0;

  VAR_3 = VAR_2 * VAR_3;
  VAR_6 = 0;

  while (VAR_3 > 0)
  {
    VAR_5 = VAR_3;
    if (VAR_5 > 4096)
      VAR_5 = 4096;

    if (*VAR_4 >= 0x666 && *VAR_4 <= 0x669)
    {
      VAR_7 = (*VAR_4) - 0x666;
      if (VAR_0[VAR_7].size == 0)
        return -1;
      if ((VAR_0[VAR_7].pos + VAR_5) > VAR_0[VAR_7].size)
        VAR_5 = VAR_0[VAR_7].size - VAR_0[VAR_7].pos;
      if (VAR_5 > 0)
      {
        FUNC_0(VAR_1, VAR_0[VAR_7].mem + VAR_0[VAR_7].pos, VAR_5);
        VAR_0[VAR_7].pos += VAR_5;
      }
    }
    else
      VAR_5 = FUNC_1(*VAR_4, ((char *) VAR_1) + VAR_6, VAR_5);

    if (VAR_5 <= 0)
    {
      return VAR_6 / VAR_2;
    }
    VAR_6 += VAR_5;
    VAR_3 -= VAR_5;
  }
  return VAR_6 / VAR_2;
}
