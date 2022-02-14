
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; } ;


 int FUNC_0 (struct timeval*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;

int FUNC_4(void)
{
 struct timeval VAR_0;
 int VAR_1 = 0, VAR_2 = 0;

 FUNC_1();

 for (;;)
 {
  FUNC_0(&VAR_0, 0);

  if(VAR_1 != VAR_0.tv_sec)
  {
   VAR_1 = VAR_0.tv_sec;

   FUNC_2("frames_done: %i\n", VAR_2);
   VAR_2 = 0;
  }





  FUNC_3(1000);
  VAR_2++;
 }

}
