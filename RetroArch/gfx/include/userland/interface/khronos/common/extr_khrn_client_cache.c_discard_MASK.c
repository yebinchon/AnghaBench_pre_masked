
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int link; int key; } ;
struct TYPE_6__ {int * data; int map; } ;
typedef TYPE_1__ KHRN_CACHE_T ;
typedef int CLIENT_THREAD_STATE_T ;
typedef TYPE_2__ CACHE_ENTRY_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(CLIENT_THREAD_STATE_T *VAR_1, KHRN_CACHE_T *VAR_2, CACHE_ENTRY_T *VAR_3)
{
   FUNC_0(VAR_2, (int)((uint8_t *)VAR_3 - VAR_2->data) >> VAR_0);

   FUNC_1(&VAR_2->map, VAR_3->key);

   FUNC_2(&VAR_3->link);

   FUNC_3(VAR_1, (int)((uint8_t *)VAR_3 - VAR_2->data));
}
