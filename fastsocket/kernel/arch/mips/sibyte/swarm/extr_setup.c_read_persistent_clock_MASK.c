
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {unsigned long tv_sec; scalar_t__ tv_nsec; } ;





 unsigned long FUNC_0 () ;
 unsigned long FUNC_1 (int,int,int,int ,int ,int ) ;
 int VAR_0 ;
 unsigned long FUNC_2 () ;

void FUNC_3(struct timespec *VAR_1)
{
 unsigned long VAR_2;

 switch (VAR_0) {
 case 128:
  VAR_2 = FUNC_2();
  break;

 case 130:
  VAR_2 = FUNC_0();
  break;

 case 129:
 default:
  VAR_2 = FUNC_1(2000, 1, 1, 0, 0, 0);
  break;
 }
 VAR_1->tv_sec = VAR_2;
 VAR_1->tv_nsec = 0;
}
