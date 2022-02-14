
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_mode; } ;
typedef int loff_t ;
typedef int __u64 ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static inline loff_t FUNC_1(struct file *VAR_2, __u32 VAR_3, __u32 VAR_4)
{
 if ((VAR_2->f_mode & VAR_0) ||
     (!(VAR_2->f_mode & VAR_1) && FUNC_0()))
  return VAR_3 >> 1;
 else
  return ((__u64)(VAR_3 >> 1) << 32) | (__u64)VAR_4;
}
