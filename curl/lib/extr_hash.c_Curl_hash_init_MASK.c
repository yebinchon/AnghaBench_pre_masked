
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_llist {int dummy; } ;
struct curl_hash {int slots; int * table; scalar_t__ size; scalar_t__ dtor; scalar_t__ comp_func; scalar_t__ hash_func; } ;
typedef scalar_t__ hash_function ;
typedef int curl_llist_dtor ;
typedef scalar_t__ curl_hash_dtor ;
typedef scalar_t__ comp_function ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int) ;

int
FUNC_2(struct curl_hash *VAR_1,
               int VAR_2,
               hash_function VAR_3,
               comp_function VAR_4,
               curl_hash_dtor VAR_5)
{
  if(!VAR_2 || !VAR_3 || !VAR_4 ||!VAR_5) {
    return 1;
  }

  VAR_1->hash_func = VAR_3;
  VAR_1->comp_func = VAR_4;
  VAR_1->dtor = VAR_5;
  VAR_1->size = 0;
  VAR_1->slots = VAR_2;

  VAR_1->table = FUNC_1(VAR_2 * sizeof(struct curl_llist));
  if(VAR_1->table) {
    int VAR_6;
    for(VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6)
      FUNC_0(&VAR_1->table[VAR_6], (curl_llist_dtor) VAR_0);
    return 0;
  }
  VAR_1->slots = 0;
  return 1;
}
