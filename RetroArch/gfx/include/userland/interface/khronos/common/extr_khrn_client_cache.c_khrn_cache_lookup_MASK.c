
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_17__ {int len; int key; int * data; int link; } ;
struct TYPE_16__ {int prev; struct TYPE_16__* next; } ;
struct TYPE_14__ {TYPE_3__* next; } ;
struct TYPE_15__ {int * data; TYPE_3__ end; int map; TYPE_1__ start; } ;
typedef TYPE_2__ KHRN_CACHE_T ;
typedef int CLIENT_THREAD_STATE_T ;
typedef TYPE_3__ CACHE_LINK_T ;
typedef TYPE_4__ CACHE_ENTRY_T ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_2__*,TYPE_4__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (void const*,int,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int *,int,TYPE_4__*) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ,TYPE_3__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,void const*,int) ;
 int FUNC_13 (int *,void const*,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int,void const*,int) ;
 int VAR_1 ;

int FUNC_16(CLIENT_THREAD_STATE_T *VAR_2, KHRN_CACHE_T *VAR_3, const void *VAR_4, int VAR_5, int VAR_6)
{
   int VAR_7 = FUNC_4(VAR_4, VAR_5, VAR_6);

   CACHE_ENTRY_T *VAR_8 = (CACHE_ENTRY_T *)FUNC_9(&VAR_3->map, VAR_7);
   if (VAR_8 && VAR_8->len >= VAR_5 && !FUNC_12(VAR_8->data, VAR_4, VAR_5)) {




      FUNC_11(&VAR_8->link);
      FUNC_10(&VAR_8->link, VAR_3->end.prev, &VAR_3->end);
   } else {
      int VAR_9 = FUNC_0(FUNC_1(VAR_5 + sizeof(CACHE_ENTRY_T) - 1) + 2 - VAR_0, 1);
      int VAR_10;

      CACHE_LINK_T *VAR_11;

      if (VAR_8)
         FUNC_2(VAR_2, VAR_3, VAR_8);

      while (!FUNC_6(VAR_3, VAR_9) && FUNC_3(VAR_2, VAR_3));

      for (VAR_11 = VAR_3->start.next; VAR_11 != &VAR_3->end && !FUNC_6(VAR_3, VAR_9); VAR_11 = VAR_11->next)
         FUNC_2(VAR_2, VAR_3, (CACHE_ENTRY_T *)VAR_11);

      if (!FUNC_6(VAR_3, VAR_9))
         return -1;

      VAR_10 = FUNC_5(VAR_3, VAR_9);

      VAR_8 = (CACHE_ENTRY_T *)(VAR_3->data + (VAR_10 << VAR_0));
      VAR_8->len = VAR_5;
      VAR_8->key = VAR_7;
      FUNC_13(VAR_8->data, VAR_4, VAR_5);

      if (!FUNC_8(&VAR_3->map, VAR_7, VAR_8)) {
         FUNC_7(VAR_3, VAR_10);
         return -1;
      }

      FUNC_10(&VAR_8->link, VAR_3->end.prev, &VAR_3->end);

      FUNC_14(VAR_2, (int)((uint8_t *)VAR_8 - VAR_3->data));
      FUNC_15(VAR_2, (int)(VAR_8->data - VAR_3->data), VAR_4, VAR_5);
   }

   return (int)((uint8_t *)VAR_8 - VAR_3->data);
}
