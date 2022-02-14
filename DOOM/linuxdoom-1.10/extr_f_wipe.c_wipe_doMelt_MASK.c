
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int* VAR_3 ;

int
FUNC_0
( int VAR_4,
  int VAR_5,
  int VAR_6 )
{
    int VAR_7;
    int VAR_8;
    int VAR_9;
    int VAR_10;

    short* VAR_11;
    short* VAR_12;
    boolean VAR_13 = 1;

    VAR_4/=2;

    while (VAR_6--)
    {
 for (VAR_7=0;VAR_7<VAR_4;VAR_7++)
 {
     if (VAR_3[VAR_7]<0)
     {
  VAR_3[VAR_7]++; VAR_13 = 0;
     }
     else if (VAR_3[VAR_7] < VAR_5)
     {
  VAR_9 = (VAR_3[VAR_7] < 16) ? VAR_3[VAR_7]+1 : 8;
  if (VAR_3[VAR_7]+VAR_9 >= VAR_5) VAR_9 = VAR_5 - VAR_3[VAR_7];
  VAR_11 = &((short *)VAR_1)[VAR_7*VAR_5+VAR_3[VAR_7]];
  VAR_12 = &((short *)VAR_0)[VAR_3[VAR_7]*VAR_4+VAR_7];
  VAR_10 = 0;
  for (VAR_8=VAR_9;VAR_8;VAR_8--)
  {
      VAR_12[VAR_10] = *(VAR_11++);
      VAR_10 += VAR_4;
  }
  VAR_3[VAR_7] += VAR_9;
  VAR_11 = &((short *)VAR_2)[VAR_7*VAR_5];
  VAR_12 = &((short *)VAR_0)[VAR_3[VAR_7]*VAR_4+VAR_7];
  VAR_10 = 0;
  for (VAR_8=VAR_5-VAR_3[VAR_7];VAR_8;VAR_8--)
  {
      VAR_12[VAR_10] = *(VAR_11++);
      VAR_10 += VAR_4;
  }
  VAR_13 = 0;
     }
 }
    }

    return VAR_13;

}
