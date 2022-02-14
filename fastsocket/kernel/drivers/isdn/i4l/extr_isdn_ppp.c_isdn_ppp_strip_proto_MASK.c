
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int* data; } ;


 int FUNC_0 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_0)
{
 int VAR_1;

 if (VAR_0->len < 1)
  return -1;

 if (VAR_0->data[0] & 0x1) {

  VAR_1 = VAR_0->data[0];
  FUNC_0(VAR_0, 1);
 } else {
  if (VAR_0->len < 2)
   return -1;
  VAR_1 = ((int) VAR_0->data[0] << 8) + VAR_0->data[1];
  FUNC_0(VAR_0, 2);
 }
 return VAR_1;
}
