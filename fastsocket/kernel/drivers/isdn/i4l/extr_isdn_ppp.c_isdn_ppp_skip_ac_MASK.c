
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int* data; } ;
struct ippp_struct {int pppcfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_1(struct ippp_struct *VAR_1, struct sk_buff *VAR_2)
{
 if (VAR_2->len < 1)
  return -1;

 if (VAR_2->data[0] == 0xff) {
  if (VAR_2->len < 2)
   return -1;

  if (VAR_2->data[1] != 0x03)
   return -1;


  FUNC_0(VAR_2, 2);
 } else {
  if (VAR_1->pppcfg & VAR_0)

   return -1;
 }
 return 0;
}
