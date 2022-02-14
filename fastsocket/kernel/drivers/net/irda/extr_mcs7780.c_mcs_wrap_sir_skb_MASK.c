
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef int __u8 ;


 int FUNC_0 (struct sk_buff*,int*,int) ;

__attribute__((used)) static inline int FUNC_1(struct sk_buff *VAR_0, __u8 * VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_0(VAR_0, VAR_1 + 2, 4094);

 VAR_2 += 2;
 VAR_1[0] = VAR_2 & 0xff;
 VAR_1[1] = (VAR_2 >> 8) & 0xff;

 return VAR_2;
}
