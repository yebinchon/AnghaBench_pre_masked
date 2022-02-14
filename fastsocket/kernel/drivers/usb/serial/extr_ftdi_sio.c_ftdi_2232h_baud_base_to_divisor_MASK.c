
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;



__attribute__((used)) static __u32 FUNC_0(int VAR_0, int VAR_1)
{
 static const unsigned char VAR_2[8] = { 0, 3, 2, 4, 1, 5, 6, 7 };
 __u32 VAR_3;
 int VAR_4;


 VAR_4 = (VAR_1 / 10 / VAR_0) * 8;

 VAR_3 = VAR_4 >> 3;
 VAR_3 |= (__u32)VAR_2[VAR_4 & 0x7] << 14;

 if (VAR_3 == 1)
  VAR_3 = 0;
 else if (VAR_3 == 0x4001)
  VAR_3 = 1;





 VAR_3 |= 0x00020000;
 return VAR_3;
}
