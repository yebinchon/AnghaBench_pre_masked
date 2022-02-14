
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (size_t*,unsigned char const*) ;
 int FUNC_1 (size_t*,unsigned char*,unsigned char) ;

__attribute__((used)) static void FUNC_2(unsigned char* VAR_0, const unsigned char* VAR_1,
                           size_t VAR_2, size_t VAR_3, unsigned VAR_4)
{


  unsigned VAR_5;
  size_t VAR_6 = VAR_2 - VAR_3;
  size_t VAR_7 = 0, VAR_8 = 0;
  for(VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  {
    size_t VAR_9;
    for(VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
    {
      unsigned char VAR_10 = FUNC_0(&VAR_8, VAR_1);
      FUNC_1(&VAR_7, VAR_0, VAR_10);
    }


    for(VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) FUNC_1(&VAR_7, VAR_0, 0);
  }
}
