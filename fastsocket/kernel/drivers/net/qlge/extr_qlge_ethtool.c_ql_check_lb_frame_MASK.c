
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; int* data; } ;
struct ql_adapter {int lb_count; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct ql_adapter *VAR_0,
     struct sk_buff *VAR_1)
{
 unsigned int VAR_2 = VAR_1->len;

 if ((*(VAR_1->data + 3) == 0xFF) &&
  (*(VAR_1->data + VAR_2 / 2 + 10) == 0xBE) &&
  (*(VAR_1->data + VAR_2 / 2 + 12) == 0xAF)) {
   FUNC_0(&VAR_0->lb_count);
   return;
 }
}
