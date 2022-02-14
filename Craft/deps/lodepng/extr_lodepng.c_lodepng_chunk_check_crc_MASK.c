
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned char const*) ;
 unsigned int FUNC_1 (unsigned char const*,unsigned int) ;
 unsigned int FUNC_2 (unsigned char const*) ;

unsigned FUNC_3(const unsigned char* VAR_0)
{
  unsigned VAR_1 = FUNC_0(VAR_0);
  unsigned VAR_2 = FUNC_2(&VAR_0[VAR_1 + 8]);

  unsigned VAR_3 = FUNC_1(&VAR_0[4], VAR_1 + 4);
  if(VAR_2 != VAR_3) return 1;
  else return 0;
}
