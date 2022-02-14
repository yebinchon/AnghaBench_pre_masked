
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; scalar_t__ data; } ;


 unsigned int FUNC_0 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_3 (struct sk_buff*,unsigned int) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;

void FUNC_5(struct sk_buff *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2 = VAR_0->len - VAR_1;
 unsigned int VAR_3 = FUNC_0(VAR_0, 0);
 unsigned int VAR_4 = FUNC_0(VAR_0, VAR_1);
 unsigned int VAR_5 = VAR_2 ? FUNC_1(VAR_1) : 0;





 if (VAR_4 > VAR_3)
  VAR_3 += 4;


 if (!VAR_3)
  return;


 FUNC_3(VAR_0, VAR_3);




 FUNC_2(VAR_0->data, VAR_0->data + VAR_3, VAR_1);


 if (VAR_2 && VAR_4)
  FUNC_2(VAR_0->data + VAR_1 + VAR_5,
   VAR_0->data + VAR_1 + VAR_5 + VAR_4,
   VAR_2);


 FUNC_4(VAR_0, VAR_1 + VAR_5 + VAR_2);
}
