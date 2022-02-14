
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int*,int) ;

__attribute__((used)) static unsigned FUNC_1(struct sk_buff *VAR_2, __u8 *VAR_3)
{
 __u16 VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3 + VAR_1,
     VAR_0 - VAR_1);
 VAR_3[0] = 0x55;
 VAR_3[1] = 0xAA;
 VAR_3[2] = VAR_4 & 0xff;
 VAR_3[3] = (VAR_4 >> 8) & 0xff;

 return VAR_4 + VAR_1;
}
