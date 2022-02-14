
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct timeval {int tv_sec; } ;


 int FUNC_0 (struct timeval*) ;

__attribute__((used)) static u64
FUNC_1(void)
{
 u64 VAR_0 = 0;
 struct timeval VAR_1;
 FUNC_0(&VAR_1);


 VAR_0 = VAR_1.tv_sec;
 return VAR_0;
}
