
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_hash {int slots; scalar_t__ size; int * table; } ;


 int FUNC_0 (int *,void*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct curl_hash *VAR_0)
{
  int VAR_1;

  for(VAR_1 = 0; VAR_1 < VAR_0->slots; ++VAR_1) {
    FUNC_0(&VAR_0->table[VAR_1], (void *) VAR_0);
  }

  FUNC_1(VAR_0->table);
  VAR_0->size = 0;
  VAR_0->slots = 0;
}
