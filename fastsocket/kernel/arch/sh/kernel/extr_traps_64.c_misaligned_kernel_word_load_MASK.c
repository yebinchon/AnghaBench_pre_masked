
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u64 ;
typedef scalar_t__ __s64 ;



__attribute__((used)) static void FUNC_0(__u64 VAR_0, int VAR_1, __u64 *VAR_2)
{
 unsigned short VAR_3;
 unsigned char *VAR_4, *VAR_5;
 VAR_4 = (unsigned char *) (int) VAR_0;
 VAR_5 = (unsigned char *) &VAR_3;
 VAR_5[0] = VAR_4[0];
 VAR_5[1] = VAR_4[1];

 if (VAR_1) {
  *VAR_2 = (__u64)(__s64) *(short *) &VAR_3;
 } else {
  *VAR_2 = (__u64) VAR_3;
 }
}
