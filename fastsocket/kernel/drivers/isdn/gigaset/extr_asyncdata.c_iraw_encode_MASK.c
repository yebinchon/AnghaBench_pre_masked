
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; unsigned char* data; } ;


 unsigned char VAR_0 ;
 unsigned char FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 unsigned char* FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct sk_buff *VAR_1, int VAR_2, int VAR_3)
{
 struct sk_buff *VAR_4;
 unsigned char VAR_5;
 unsigned char *VAR_6;
 int VAR_7;


 VAR_4 = FUNC_1(2*VAR_1->len + VAR_3 + VAR_2);
 if (!VAR_4) {
  FUNC_2(VAR_1);
  return ((void*)0);
 }
 FUNC_4(VAR_4, VAR_2);

 VAR_6 = VAR_1->data;
 VAR_7 = VAR_1->len;
 while (VAR_7--) {
  VAR_5 = FUNC_0(*VAR_6++);
  if (VAR_5 == VAR_0)
   *(FUNC_3(VAR_4, 1)) = VAR_5;
  *(FUNC_3(VAR_4, 1)) = VAR_5;
 }
 FUNC_2(VAR_1);
 return VAR_4;
}
