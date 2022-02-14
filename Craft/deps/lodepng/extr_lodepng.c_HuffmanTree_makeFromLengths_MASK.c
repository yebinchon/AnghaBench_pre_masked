
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int* lengths; unsigned int numcodes; unsigned int maxbitlen; } ;
typedef TYPE_1__ HuffmanTree ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (size_t) ;

__attribute__((used)) static unsigned FUNC_2(HuffmanTree* VAR_0, const unsigned* VAR_1,
                                            size_t VAR_2, unsigned VAR_3)
{
  unsigned VAR_4;
  VAR_0->lengths = (unsigned*)FUNC_1(VAR_2 * sizeof(unsigned));
  if(!VAR_0->lengths) return 83;
  for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) VAR_0->lengths[VAR_4] = VAR_1[VAR_4];
  VAR_0->numcodes = (unsigned)VAR_2;
  VAR_0->maxbitlen = VAR_3;
  return FUNC_0(VAR_0);
}
