
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,unsigned char const*,unsigned char*,size_t,unsigned char,size_t) ;

__attribute__((used)) static unsigned FUNC_2(unsigned char* VAR_0, const unsigned char* VAR_1, unsigned VAR_2, unsigned VAR_3, unsigned VAR_4)
{
  unsigned VAR_5;
  unsigned char* VAR_6 = 0;


  size_t VAR_7 = (VAR_4 + 7) / 8;
  size_t VAR_8 = (VAR_2 * VAR_4 + 7) / 8;

  for(VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  {
    size_t VAR_9 = VAR_8 * VAR_5;
    size_t VAR_10 = (1 + VAR_8) * VAR_5;
    unsigned char VAR_11 = VAR_1[VAR_10];

    FUNC_0(FUNC_1(&VAR_0[VAR_9], &VAR_1[VAR_10 + 1], VAR_6, VAR_7, VAR_11, VAR_8));

    VAR_6 = &VAR_0[VAR_9];
  }

  return 0;
}
