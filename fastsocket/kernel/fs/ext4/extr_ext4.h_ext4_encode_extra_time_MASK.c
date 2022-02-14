
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline __le32 FUNC_1(struct timespec *VAR_3)
{
       return FUNC_0((sizeof(VAR_3->tv_sec) > 4 ?
      (VAR_3->tv_sec >> 32) & VAR_1 : 0) |
                          ((VAR_3->tv_nsec << VAR_0) & VAR_2));
}
