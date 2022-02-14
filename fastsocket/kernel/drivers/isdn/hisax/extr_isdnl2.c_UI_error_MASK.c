
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int* data; scalar_t__ len; } ;
struct TYPE_2__ {scalar_t__ maxlen; int flag; } ;
struct PStack {TYPE_1__ l2; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct PStack *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3 = *VAR_2->data & 0x2;
 if (FUNC_1(VAR_0, &VAR_1->l2.flag))
  VAR_3 = !VAR_3;

 if (VAR_3)
  return 'L';

 if (VAR_2->len > VAR_1->l2.maxlen + FUNC_0(&VAR_1->l2) + 1)
  return 'O';

 return 0;
}
