
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ogg_int64_t ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ pos; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int,int,int) ;

__attribute__((used)) static int FUNC_1(int *VAR_1, ogg_int64_t VAR_2, int VAR_3)
{
  if(VAR_1==((void*)0)) return(-1);

  int VAR_4, VAR_5;
  VAR_3 &= 3;
  if (*VAR_1 >= 0x666 && *VAR_1 <= 0x669)
  {
    VAR_5 = (*VAR_1) - 0x666;
    VAR_4 = 0;

    if (VAR_0[VAR_5].size == 0)
      return -1;

    if (VAR_3 == 0)
    {
      if ((VAR_2) >= VAR_0[VAR_5].size)
      {
        VAR_0[VAR_5].pos = VAR_0[VAR_5].size;
        VAR_4 = -1;
      }
      else if ((VAR_2) < 0)
      {
        VAR_0[VAR_5].pos = 0;
        VAR_4 = -1;
      }
      else
        VAR_0[VAR_5].pos = VAR_2;
    }
    if (VAR_3 == 1)
    {
      if ((VAR_0[VAR_5].pos + VAR_2) >= VAR_0[VAR_5].size)
      {
        VAR_0[VAR_5].pos = VAR_0[VAR_5].size;
        VAR_4 = -1;
      }
      else if ((VAR_0[VAR_5].pos + VAR_2) < 0)
      {
        VAR_0[VAR_5].pos = 0;
        VAR_4 = -1;
      }
      else
        VAR_0[VAR_5].pos += VAR_2;
    }
    if (VAR_3 == 2)
    {

      if ((VAR_0[VAR_5].size + VAR_2) >= VAR_0[VAR_5].size)
      {
        VAR_0[VAR_5].pos = VAR_0[VAR_5].size;
        VAR_4 = -1;
      }
      else if ((VAR_0[VAR_5].size + VAR_2) < 0)
      {
        VAR_0[VAR_5].pos = 0;
        VAR_4 = -1;
      }
      else
        VAR_0[VAR_5].pos = VAR_0[VAR_5].size + VAR_2;
    }

  }
  else
    VAR_4 = FUNC_0(*VAR_1, (int) VAR_2, VAR_3);

  if (VAR_4 < 0)
    VAR_4 = -1;
  else
    VAR_4 = 0;
  return VAR_4;
}
