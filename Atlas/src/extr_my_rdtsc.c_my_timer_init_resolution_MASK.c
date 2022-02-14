
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulonglong ;


 int VAR_0 ;

__attribute__((used)) static ulonglong FUNC_0(ulonglong (*VAR_1)(void),
                                          ulonglong VAR_2)
{
  ulonglong VAR_3, VAR_4;
  ulonglong VAR_5;
  int VAR_6, VAR_7, VAR_8, VAR_9;

  VAR_8= VAR_9= 0;
  VAR_5= 1000000;
  for (VAR_6= VAR_7= 0; VAR_7 < 3 && VAR_6 < VAR_0 * 10; ++VAR_6)
  {
    VAR_3= VAR_1();
    VAR_4= VAR_1();
    VAR_4-= VAR_3;
    if (VAR_4)
    {
      ++VAR_7;
      if (!(VAR_4 % 1000))
      {
        ++VAR_8;
        if (!(VAR_4 % 1000000))
          ++VAR_9;
      }
      if (VAR_5 > VAR_4)
        VAR_5= VAR_4;

      if (VAR_2 == 0)
        break;
    }
  }
  if (VAR_7 == 3)
  {
    if (VAR_7 == VAR_9)
      return 1000000;
    if (VAR_7 == VAR_8)
      return 1000;
  }
  if (VAR_5 > VAR_2)
    return VAR_5;
  return 1;
}
