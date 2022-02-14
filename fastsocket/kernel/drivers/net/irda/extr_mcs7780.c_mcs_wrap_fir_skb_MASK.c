
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
typedef int __u8 ;
typedef int __u32 ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct sk_buff const*,int*,int) ;

__attribute__((used)) static unsigned FUNC_2(const struct sk_buff *VAR_0, __u8 *VAR_1)
{
 unsigned int VAR_2 = 0;
 __u32 VAR_3 = ~(FUNC_0(~0, VAR_0->data, VAR_0->len));


 VAR_2 = VAR_0->len + 6;





 VAR_1[0] = VAR_2 & 0xff;
 VAR_1[1] = (VAR_2 >> 8) & 0xff;

 FUNC_1(VAR_0, VAR_1 + 2, VAR_0->len);

 VAR_1[VAR_2 - 4] = VAR_3 & 0xff;
 VAR_1[VAR_2 - 3] = (VAR_3 >> 8) & 0xff;
 VAR_1[VAR_2 - 2] = (VAR_3 >> 16) & 0xff;
 VAR_1[VAR_2 - 1] = (VAR_3 >> 24) & 0xff;

 return VAR_2;
}
