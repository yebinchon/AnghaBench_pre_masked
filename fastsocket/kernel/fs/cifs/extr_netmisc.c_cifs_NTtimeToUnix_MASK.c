
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
typedef int __le64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ) ;

struct timespec
FUNC_2(__le64 VAR_1)
{
 struct timespec VAR_2;



 u64 VAR_3;

 VAR_3 = FUNC_1(VAR_1) - VAR_0;
 VAR_2.tv_nsec = FUNC_0(VAR_3, 10000000) * 100;
 VAR_2.tv_sec = VAR_3;
 return VAR_2;
}
