
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
typedef int __u64 ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct timespec *VAR_3, __le32 VAR_4)
{
       if (sizeof(VAR_3->tv_sec) > 4)
        VAR_3->tv_sec |= (__u64)(FUNC_0(VAR_4) & VAR_1)
          << 32;
       VAR_3->tv_nsec = (FUNC_0(VAR_4) & VAR_2) >> VAR_0;
}
