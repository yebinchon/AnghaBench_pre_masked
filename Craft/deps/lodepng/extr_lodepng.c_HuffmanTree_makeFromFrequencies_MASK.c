
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int maxbitlen; unsigned int numcodes; unsigned int* lengths; } ;
typedef TYPE_1__ HuffmanTree ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (unsigned int*,unsigned int const*,size_t,unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int*,size_t) ;
 int FUNC_3 (unsigned int*,int ,size_t) ;

__attribute__((used)) static unsigned FUNC_4(HuffmanTree* VAR_0, const unsigned* VAR_1,
                                                size_t VAR_2, size_t VAR_3, unsigned VAR_4)
{
  unsigned VAR_5 = 0;
  while(!VAR_1[VAR_3 - 1] && VAR_3 > VAR_2) VAR_3--;
  VAR_0->maxbitlen = VAR_4;
  VAR_0->numcodes = (unsigned)VAR_3;
  VAR_0->lengths = (unsigned*)FUNC_2(VAR_0->lengths, VAR_3 * sizeof(unsigned));
  if(!VAR_0->lengths) return 83;

  FUNC_3(VAR_0->lengths, 0, VAR_3 * sizeof(unsigned));

  VAR_5 = FUNC_1(VAR_0->lengths, VAR_1, VAR_3, VAR_4);
  if(!VAR_5) VAR_5 = FUNC_0(VAR_0);
  return VAR_5;
}
