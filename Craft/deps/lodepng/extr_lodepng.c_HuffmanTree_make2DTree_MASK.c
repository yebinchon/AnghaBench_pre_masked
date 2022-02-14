
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* tree2d; int numcodes; unsigned int* lengths; unsigned int* tree1d; } ;
typedef TYPE_1__ HuffmanTree ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static unsigned FUNC_1(HuffmanTree* VAR_0)
{
  unsigned VAR_1 = 0;
  unsigned VAR_2 = 0;
  unsigned VAR_3, VAR_4;

  VAR_0->tree2d = (unsigned*)FUNC_0(VAR_0->numcodes * 2 * sizeof(unsigned));
  if(!VAR_0->tree2d) return 83;
  for(VAR_3 = 0; VAR_3 < VAR_0->numcodes * 2; VAR_3++)
  {
    VAR_0->tree2d[VAR_3] = 32767;
  }

  for(VAR_3 = 0; VAR_3 < VAR_0->numcodes; VAR_3++)
  {
    for(VAR_4 = 0; VAR_4 < VAR_0->lengths[VAR_3]; VAR_4++)
    {
      unsigned char VAR_5 = (unsigned char)((VAR_0->tree1d[VAR_3] >> (VAR_0->lengths[VAR_3] - VAR_4 - 1)) & 1);
      if(VAR_2 > VAR_0->numcodes - 2) return 55;
      if(VAR_0->tree2d[2 * VAR_2 + VAR_5] == 32767)
      {
        if(VAR_4 + 1 == VAR_0->lengths[VAR_3])
        {
          VAR_0->tree2d[2 * VAR_2 + VAR_5] = VAR_3;
          VAR_2 = 0;
        }
        else
        {


          VAR_1++;

          VAR_0->tree2d[2 * VAR_2 + VAR_5] = VAR_1 + VAR_0->numcodes;
          VAR_2 = VAR_1;
        }
      }
      else VAR_2 = VAR_0->tree2d[2 * VAR_2 + VAR_5] - VAR_0->numcodes;
    }
  }

  for(VAR_3 = 0; VAR_3 < VAR_0->numcodes * 2; VAR_3++)
  {
    if(VAR_0->tree2d[VAR_3] == 32767) VAR_0->tree2d[VAR_3] = 0;
  }

  return 0;
}
