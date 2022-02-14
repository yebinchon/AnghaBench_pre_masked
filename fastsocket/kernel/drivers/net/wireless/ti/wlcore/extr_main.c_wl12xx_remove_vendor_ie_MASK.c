
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int* data; int len; } ;


 scalar_t__ FUNC_0 (unsigned int,int,int*,int) ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_0,
         unsigned int VAR_1, u8 VAR_2,
         int VAR_3)
{
 int VAR_4;
 const u8 *VAR_5, *VAR_6 = VAR_0->data + VAR_0->len;
 u8 *VAR_7 = (u8 *)FUNC_0(VAR_1, VAR_2,
            VAR_0->data + VAR_3,
            VAR_0->len - VAR_3);
 if (!VAR_7)
  return;
 VAR_4 = VAR_7[1] + 2;
 VAR_5 = VAR_7 + VAR_4;
 FUNC_1(VAR_7, VAR_5, VAR_6 - VAR_5);
 FUNC_2(VAR_0, VAR_0->len - VAR_4);
}
