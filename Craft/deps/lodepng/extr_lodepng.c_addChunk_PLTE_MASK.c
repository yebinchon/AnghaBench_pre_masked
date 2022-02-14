
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int size; int data; } ;
typedef TYPE_1__ ucvector ;
struct TYPE_10__ {int palettesize; int * palette; } ;
typedef TYPE_2__ LodePNGColorMode ;


 unsigned int FUNC_0 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static unsigned FUNC_4(ucvector* VAR_0, const LodePNGColorMode* VAR_1)
{
  unsigned VAR_2 = 0;
  size_t VAR_3;
  ucvector VAR_4;
  FUNC_2(&VAR_4);
  for(VAR_3 = 0; VAR_3 < VAR_1->palettesize * 4; VAR_3++)
  {

    if(VAR_3 % 4 != 3) FUNC_3(&VAR_4, VAR_1->palette[VAR_3]);
  }
  VAR_2 = FUNC_0(VAR_0, "PLTE", VAR_4.data, VAR_4.size);
  FUNC_1(&VAR_4);

  return VAR_2;
}
