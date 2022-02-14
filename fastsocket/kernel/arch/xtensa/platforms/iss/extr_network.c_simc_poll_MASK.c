
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int,int ,int ) ;

__attribute__((used)) static int inline FUNC_1(int VAR_2)
{
 struct timeval VAR_3 = { .tv_sec = 0, .tv_usec = 0 };

 return FUNC_0(VAR_0, VAR_2, VAR_1, (int)&VAR_3,0,0);
}
