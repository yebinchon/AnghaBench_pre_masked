
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const,unsigned char const,unsigned char const) ;

__attribute__((used)) static void FUNC_1(unsigned char* VAR_0, const unsigned char* VAR_1, const unsigned char* VAR_2,
                           size_t VAR_3, size_t VAR_4, unsigned char VAR_5)
{
  size_t VAR_6;
  switch(VAR_5)
  {
    case 0:
      for(VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) VAR_0[VAR_6] = VAR_1[VAR_6];
      break;
    case 1:
      if(VAR_2)
      {
        for(VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) VAR_0[VAR_6] = VAR_1[VAR_6];
        for(VAR_6 = VAR_4; VAR_6 < VAR_3; VAR_6++) VAR_0[VAR_6] = VAR_1[VAR_6] - VAR_1[VAR_6 - VAR_4];
      }
      else
      {
        for(VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) VAR_0[VAR_6] = VAR_1[VAR_6];
        for(VAR_6 = VAR_4; VAR_6 < VAR_3; VAR_6++) VAR_0[VAR_6] = VAR_1[VAR_6] - VAR_1[VAR_6 - VAR_4];
      }
      break;
    case 2:
      if(VAR_2)
      {
        for(VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) VAR_0[VAR_6] = VAR_1[VAR_6] - VAR_2[VAR_6];
      }
      else
      {
        for(VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) VAR_0[VAR_6] = VAR_1[VAR_6];
      }
      break;
    case 3:
      if(VAR_2)
      {
        for(VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) VAR_0[VAR_6] = VAR_1[VAR_6] - VAR_2[VAR_6] / 2;
        for(VAR_6 = VAR_4; VAR_6 < VAR_3; VAR_6++) VAR_0[VAR_6] = VAR_1[VAR_6] - ((VAR_1[VAR_6 - VAR_4] + VAR_2[VAR_6]) / 2);
      }
      else
      {
        for(VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) VAR_0[VAR_6] = VAR_1[VAR_6];
        for(VAR_6 = VAR_4; VAR_6 < VAR_3; VAR_6++) VAR_0[VAR_6] = VAR_1[VAR_6] - VAR_1[VAR_6 - VAR_4] / 2;
      }
      break;
    case 4:
      if(VAR_2)
      {

        for(VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) VAR_0[VAR_6] = (VAR_1[VAR_6] - VAR_2[VAR_6]);
        for(VAR_6 = VAR_4; VAR_6 < VAR_3; VAR_6++)
        {
          VAR_0[VAR_6] = (VAR_1[VAR_6] - FUNC_0(VAR_1[VAR_6 - VAR_4], VAR_2[VAR_6], VAR_2[VAR_6 - VAR_4]));
        }
      }
      else
      {
        for(VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) VAR_0[VAR_6] = VAR_1[VAR_6];

        for(VAR_6 = VAR_4; VAR_6 < VAR_3; VAR_6++) VAR_0[VAR_6] = (VAR_1[VAR_6] - VAR_1[VAR_6 - VAR_4]);
      }
      break;
    default: return;
  }
}
