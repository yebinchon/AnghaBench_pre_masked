
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int* data; } ;
typedef TYPE_1__ uivector ;
struct TYPE_9__ {unsigned int* tree1d; int numcodes; int maxbitlen; size_t* lengths; } ;
typedef TYPE_2__ HuffmanTree ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;

__attribute__((used)) static unsigned FUNC_5(HuffmanTree* VAR_0)
{
  uivector VAR_1;
  uivector VAR_2;
  unsigned VAR_3, VAR_4, VAR_5 = 0;

  FUNC_3(&VAR_1);
  FUNC_3(&VAR_2);

  VAR_0->tree1d = (unsigned*)FUNC_1(VAR_0->numcodes * sizeof(unsigned));
  if(!VAR_0->tree1d) VAR_5 = 83;

  if(!FUNC_4(&VAR_1, VAR_0->maxbitlen + 1, 0)
  || !FUNC_4(&VAR_2, VAR_0->maxbitlen + 1, 0))
    VAR_5 = 83;

  if(!VAR_5)
  {

    for(VAR_3 = 0; VAR_3 < VAR_0->numcodes; VAR_3++) VAR_1.data[VAR_0->lengths[VAR_3]]++;

    for(VAR_3 = 1; VAR_3 <= VAR_0->maxbitlen; VAR_3++)
    {
      VAR_2.data[VAR_3] = (VAR_2.data[VAR_3 - 1] + VAR_1.data[VAR_3 - 1]) << 1;
    }

    for(VAR_4 = 0; VAR_4 < VAR_0->numcodes; VAR_4++)
    {
      if(VAR_0->lengths[VAR_4] != 0) VAR_0->tree1d[VAR_4] = VAR_2.data[VAR_0->lengths[VAR_4]]++;
    }
  }

  FUNC_2(&VAR_1);
  FUNC_2(&VAR_2);

  if(!VAR_5) return FUNC_0(VAR_0);
  else return VAR_5;
}
