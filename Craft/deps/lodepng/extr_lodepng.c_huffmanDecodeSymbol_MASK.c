
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* tree2d; unsigned int numcodes; } ;
typedef TYPE_1__ HuffmanTree ;


 unsigned int FUNC_0 (size_t,unsigned char const*) ;

__attribute__((used)) static unsigned FUNC_1(const unsigned char* VAR_0, size_t* VAR_1,
                                    const HuffmanTree* VAR_2, size_t VAR_3)
{
  unsigned VAR_4 = 0, VAR_5;
  for(;;)
  {
    if(*VAR_1 >= VAR_3) return (unsigned)(-1);




    VAR_5 = VAR_2->tree2d[(VAR_4 << 1) + FUNC_0(*VAR_1, VAR_0)];
    (*VAR_1)++;
    if(VAR_5 < VAR_2->numcodes) return VAR_5;
    else VAR_4 = VAR_5 - VAR_2->numcodes;

    if(VAR_4 >= VAR_2->numcodes) return (unsigned)(-1);
  }
}
