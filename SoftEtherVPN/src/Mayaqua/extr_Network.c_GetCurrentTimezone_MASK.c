
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tz ;
typedef int tv ;
struct timezone {int tz_minuteswest; } ;
struct timeval {int tz_minuteswest; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct timezone*,int) ;
 int FUNC_2 (struct timezone*,struct timezone*) ;
 int VAR_0 ;
 int FUNC_3 () ;

int FUNC_4()
{
 int VAR_1 = 0;




 {
  FUNC_3();

  VAR_1 = VAR_0 / 60;

 }


 return VAR_1;
}
