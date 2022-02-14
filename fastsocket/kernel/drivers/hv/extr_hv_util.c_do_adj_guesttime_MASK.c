
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct timespec {int dummy; } ;
typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 (struct timespec*) ;
 struct timespec FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(u64 VAR_1)
{
 s64 VAR_2;
 struct timespec VAR_3;

 VAR_2 = (VAR_1 - VAR_0) * 100;
 VAR_3 = FUNC_1(VAR_2);

 FUNC_0(&VAR_3);
}
