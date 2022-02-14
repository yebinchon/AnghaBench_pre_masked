
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int index; struct TYPE_4__** children; } ;
typedef TYPE_1__ ColorTree ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(ColorTree* VAR_0,
                           unsigned char VAR_1, unsigned char VAR_2, unsigned char VAR_3, unsigned char VAR_4, int VAR_5)
{
  int VAR_6;
  for(VAR_6 = 0; VAR_6 < 8; VAR_6++)
  {
    int VAR_7 = 8 * ((VAR_1 >> VAR_6) & 1) + 4 * ((VAR_2 >> VAR_6) & 1) + 2 * ((VAR_3 >> VAR_6) & 1) + 1 * ((VAR_4 >> VAR_6) & 1);
    if(!VAR_0->children[VAR_7])
    {
      VAR_0->children[VAR_7] = (ColorTree*)FUNC_1(sizeof(ColorTree));
      FUNC_0(VAR_0->children[VAR_7]);
    }
    VAR_0 = VAR_0->children[VAR_7];
  }
  VAR_0->index = VAR_5;
}
