
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct desc_tbl_t {int dummy; } ;
struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* tail; struct desc_tbl_t data; } ;
typedef TYPE_1__ IARTN_Q ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1 (IARTN_Q *VAR_1, struct desc_tbl_t VAR_2) {
   IARTN_Q *VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
   if (!VAR_3) return -1;
   VAR_3->data = VAR_2;
   VAR_3->next = ((void*)0);
   if (VAR_1->next == ((void*)0))
      VAR_1->next = VAR_1->tail = VAR_3;
   else {
      VAR_1->tail->next = VAR_3;
      VAR_1->tail = VAR_1->tail->next;
   }
   return 1;
}
