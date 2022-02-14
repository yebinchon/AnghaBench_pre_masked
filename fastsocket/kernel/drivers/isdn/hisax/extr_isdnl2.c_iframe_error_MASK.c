
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int* data; int len; } ;
struct TYPE_2__ {int maxlen; int flag; } ;
struct PStack {TYPE_1__ l2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct PStack *VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4 = FUNC_0(&VAR_2->l2) + (FUNC_1(VAR_0, &VAR_2->l2.flag) ? 2 : 1);
 int VAR_5 = *VAR_3->data & 0x2;

 if (FUNC_1(VAR_1, &VAR_2->l2.flag))
  VAR_5 = !VAR_5;

 if (VAR_5)
  return 'L';


 if (VAR_3->len < VAR_4)
  return 'N';

 if ((VAR_3->len - VAR_4) > VAR_2->l2.maxlen)
  return 'O';


 return 0;
}
