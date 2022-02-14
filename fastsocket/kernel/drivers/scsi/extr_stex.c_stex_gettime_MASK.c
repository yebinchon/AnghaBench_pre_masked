
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; } ;
typedef int __le64 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct timeval*) ;

__attribute__((used)) static void FUNC_2(__le64 *VAR_0)
{
 struct timeval VAR_1;

 FUNC_1(&VAR_1);
 *VAR_0 = FUNC_0(VAR_1.tv_sec);
}
