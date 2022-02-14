
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; int len; } ;
typedef int __u8 ;
typedef int __u32 ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int*,int,int) ;
 int* FUNC_2 (int*,int) ;

__attribute__((used)) static unsigned FUNC_3(const struct sk_buff *VAR_1, __u8 *VAR_2)
{
 __u8 *VAR_3 = VAR_2;
 __u32 VAR_4 = ~(FUNC_0(~0, VAR_1->data, VAR_1->len));
 __u16 VAR_5;
 int VAR_6;


 VAR_2[0] = 0x55;
 VAR_2[1] = 0xAA;

 VAR_3 = VAR_2 + VAR_0;
 FUNC_1(VAR_3, 0x7f, 16);
 VAR_3 += 16;


 *VAR_3++ = 0x7e;
 *VAR_3++ = 0x7e;


 for (VAR_6 = 0; VAR_6 < VAR_1->len; VAR_6++)
  VAR_3 = FUNC_2(VAR_3, VAR_1->data[VAR_6]);


 VAR_3 = FUNC_2(VAR_3, VAR_4 & 0xff);
 VAR_3 = FUNC_2(VAR_3, (VAR_4 >> 8) & 0xff);
 VAR_3 = FUNC_2(VAR_3, (VAR_4 >> 16) & 0xff);
 VAR_3 = FUNC_2(VAR_3, (VAR_4 >> 24) & 0xff);


 *VAR_3++ = 0x7e;
 *VAR_3++ = 0x7e;


 VAR_5 = (VAR_3 - VAR_2) - VAR_0;
 VAR_2[2] = VAR_5 & 0xff;
 VAR_2[3] = (VAR_5 >> 8) & 0xff;

 return VAR_5 + VAR_0;
}
