
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef unsigned short u16 ;
typedef int time_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_2__ {int tv_sec; int tv_usec; } ;


 int FUNC_0 (struct timeval*) ;
 unsigned short VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

unsigned short
FUNC_3(void)
{
 u_long VAR_3;
 struct timeval VAR_4;
 time_t VAR_5;
 int VAR_6;
 u16 VAR_7;

 FUNC_1(&VAR_1, VAR_3);

 FUNC_0(&VAR_4);
 VAR_5 = VAR_4.tv_sec - VAR_2.tv_sec;
 VAR_6 = (VAR_4.tv_usec / 125) - (VAR_2.tv_usec / 125);
 if (VAR_6 < 0) {
  VAR_5 -= 1;
  VAR_6 += 8000;
 }

 VAR_7 = VAR_0 + VAR_5 * 8000 + VAR_6;
 FUNC_2(&VAR_1, VAR_3);
 return VAR_7;
}
