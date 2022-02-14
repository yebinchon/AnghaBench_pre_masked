
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int keyword; } ;
typedef TYPE_1__ keywordHash_t ;


 int FUNC_0 (int ) ;

void FUNC_1(keywordHash_t *VAR_0[], keywordHash_t *VAR_1) {
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->keyword);





 VAR_1->next = VAR_0[VAR_2];
 VAR_0[VAR_2] = VAR_1;
}
