
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; struct TYPE_3__** children; } ;
typedef TYPE_1__ ColorTree ;



__attribute__((used)) static int FUNC_0(ColorTree* VAR_0, unsigned char VAR_1, unsigned char VAR_2, unsigned char VAR_3, unsigned char VAR_4)
{
  int VAR_5 = 0;
  for(VAR_5 = 0; VAR_5 < 8; VAR_5++)
  {
    int VAR_6 = 8 * ((VAR_1 >> VAR_5) & 1) + 4 * ((VAR_2 >> VAR_5) & 1) + 2 * ((VAR_3 >> VAR_5) & 1) + 1 * ((VAR_4 >> VAR_5) & 1);
    if(!VAR_0->children[VAR_6]) return -1;
    else VAR_0 = VAR_0->children[VAR_6];
  }
  return VAR_0 ? VAR_0->index : -1;
}
