
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int* data; int len; } ;
struct TYPE_2__ {int l2m; int flag; } ;
struct PStack {TYPE_1__ l2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*,int,int,int,...) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct PStack *VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4 = FUNC_0(&VAR_2->l2) + 1;
 u_char *VAR_5 = VAR_3->data + VAR_4;
 int VAR_6 = *VAR_3->data & 0x2;

 if (FUNC_2(VAR_1, &VAR_2->l2.flag))
  VAR_6 = !VAR_6;

 if (!VAR_6)
  return 'L';

 if (FUNC_2(VAR_0, &VAR_2->l2.flag)) {
  if (VAR_3->len < VAR_4 + 5)
   return 'N';
  else
   FUNC_1(&VAR_2->l2.l2m, "FRMR information %2x %2x %2x %2x %2x",
    VAR_5[0], VAR_5[1], VAR_5[2],
    VAR_5[3], VAR_5[4]);
 } else {
  if (VAR_3->len < VAR_4 + 3)
   return 'N';
  else
   FUNC_1(&VAR_2->l2.l2m, "FRMR information %2x %2x %2x",
    VAR_5[0], VAR_5[1], VAR_5[2]);
 }

 return 0;
}
