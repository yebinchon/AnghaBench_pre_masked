
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__* regs; } ;
typedef scalar_t__ __u64 ;
typedef int __u32 ;
typedef int __s64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_2(struct pt_regs *VAR_1,
          __u32 VAR_2,
          int VAR_3,
          int VAR_4,
          __u64 *VAR_5)
{


 __u64 VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = (VAR_2 >> 20) & 0x3f;
 VAR_6 = VAR_1->regs[VAR_8];
 if (VAR_3) {
  __s64 VAR_9;
  VAR_9 = (VAR_2 >> 10) & 0x3ff;
  VAR_9 = ((VAR_9 << 54) >> 54);
  VAR_7 = (__u64)((__s64)VAR_6 + (VAR_9 << VAR_4));
 } else {
  __u64 VAR_10;
  int VAR_11;
  VAR_11 = (VAR_2 >> 10) & 0x3f;
  VAR_10 = VAR_1->regs[VAR_11];
  VAR_7 = VAR_6 + VAR_10;
 }


 if (!FUNC_0(VAR_7)) {
  return -1;
 }




 if (FUNC_1(VAR_1)) {
  if (VAR_7 >= VAR_0) {
   return -1;
  }

 }

 *VAR_5 = VAR_7;
 return 0;
}
