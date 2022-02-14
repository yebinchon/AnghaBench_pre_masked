
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* head; int* val; unsigned short* chain; unsigned short* zeros; } ;
typedef TYPE_1__ Hash ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static unsigned FUNC_1(Hash* VAR_1, unsigned VAR_2)
{
  unsigned VAR_3;
  VAR_1->head = (int*)FUNC_0(sizeof(int) * VAR_0);
  VAR_1->val = (int*)FUNC_0(sizeof(int) * VAR_2);
  VAR_1->chain = (unsigned short*)FUNC_0(sizeof(unsigned short) * VAR_2);
  VAR_1->zeros = (unsigned short*)FUNC_0(sizeof(unsigned short) * VAR_2);

  if(!VAR_1->head || !VAR_1->val || !VAR_1->chain || !VAR_1->zeros) return 83;


  for(VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) VAR_1->head[VAR_3] = -1;
  for(VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) VAR_1->val[VAR_3] = -1;
  for(VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) VAR_1->chain[VAR_3] = VAR_3;

  return 0;
}
