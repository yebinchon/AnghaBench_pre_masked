
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;



__attribute__((used)) static __u64 FUNC_0(unsigned char *VAR_0, int VAR_1, int VAR_2, char VAR_3)
{
 __u64 VAR_4 = 0;
 int VAR_5 = VAR_1 % VAR_3;
 int VAR_6 = VAR_1 / VAR_3;
 int VAR_7 = 0;

 while (VAR_2--) {
  VAR_4 |= (__u64)((VAR_0[VAR_6] >> VAR_5++) & 1) << VAR_7++;
  if (VAR_5 == VAR_3) {
   VAR_6++;
   VAR_5 = 0;
  }
 }

 return VAR_4;
}
