
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;


 int FUNC_0 (struct timeval*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(int VAR_0, int VAR_1)
{
 struct timeval VAR_2;

 FUNC_1(1024);
 FUNC_0(&VAR_2, 0);
 if(VAR_0 != VAR_2.tv_sec) VAR_2.tv_usec+=1000000;

 while(VAR_2.tv_usec < VAR_1)
 {
  FUNC_1(1024);
  FUNC_0(&VAR_2, 0);
  if(VAR_0 != VAR_2.tv_sec) VAR_2.tv_usec+=1000000;
 }
}
