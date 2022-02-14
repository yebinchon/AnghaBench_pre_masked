
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;


 int VAR_0 ;

__attribute__((used)) static inline __u8 *FUNC_0(__u8 *VAR_1, __u8 VAR_2)
{
 switch(VAR_2) {
 case 0x7d:
 case 0x7e:
 case 0x7f:
  *VAR_1++ = 0x7d;
  VAR_2 ^= VAR_0;

 default:
  *VAR_1++ = VAR_2;
 }
 return VAR_1;
}
