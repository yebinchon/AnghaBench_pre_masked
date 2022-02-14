
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u8 ;
typedef int __u64 ;
typedef scalar_t__ __u32 ;
typedef scalar_t__ __u16 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline __u64 FUNC_0(__u8 VAR_1, __u32 VAR_2,
     __u16 VAR_3)
{
 __u64 VAR_4 = 0;

 VAR_4 = (((__u64)VAR_0) << 48);
 VAR_4 |= (((__u64)(VAR_1)) << 48);
 VAR_4 |= (((__u64)(VAR_2)) << 16);
 VAR_4 |= ((__u64)(VAR_3));

 return VAR_4;
}
