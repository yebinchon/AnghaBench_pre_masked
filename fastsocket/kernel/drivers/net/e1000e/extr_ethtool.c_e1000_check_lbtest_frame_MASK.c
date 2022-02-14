
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; } ;



__attribute__((used)) static int FUNC_0(struct sk_buff *VAR_0,
        unsigned int VAR_1)
{
 VAR_1 &= ~1;
 if (*(VAR_0->data + 3) == 0xFF)
  if ((*(VAR_0->data + VAR_1 / 2 + 10) == 0xBE) &&
     (*(VAR_0->data + VAR_1 / 2 + 12) == 0xAF))
   return 0;
 return 13;
}
