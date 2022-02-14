
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sk_buff {int len; int data; } ;


 int FUNC_0 (int,int*) ;
 int FUNC_1 (int,int) ;
 int* FUNC_2 (int ,int ,int,int ) ;

__attribute__((used)) static u_char
FUNC_3(struct sk_buff *VAR_0)
{
 u_char *VAR_1;

 if ((VAR_1 = FUNC_2(VAR_0->data, VAR_0->len, 0x7c, 0))) {
  switch (VAR_1[4] & 0x0f) {
   case 0x01:
    if (VAR_1[1] == 0x04)

     return FUNC_1(160, VAR_1[5]);

    else if (VAR_1[1] == 0x06)

     return FUNC_0(192, VAR_1);

    break;
   case 0x08:
    if (VAR_1[1] > 3)
     return FUNC_1(176, VAR_1[5]);
    break;
  }
 }
 return 0;
}
