
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 int FUNC_0 (struct timeval*,int ) ;

__attribute__((used)) static uint64 FUNC_1(void)
{
 uint64 VAR_0;
 struct timeval VAR_1;

 FUNC_0(&VAR_1,0);
 VAR_0=(uint64)VAR_1.tv_sec*1000000;
 VAR_0+=VAR_1.tv_usec;
 return(VAR_0);
}
