
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
struct curltime {int dummy; } ;


 struct curltime FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int ,int *,int *,int *,struct timeval*) ;

int FUNC_8(int VAR_2)
{


  struct timeval VAR_3;

  struct curltime VAR_4;
  int VAR_5;

  int VAR_6 = 0;

  if(!VAR_2)
    return 0;
  if(VAR_2 < 0) {
    FUNC_3(VAR_0);
    return -1;
  }





  VAR_5 = VAR_2;
  VAR_4 = FUNC_0();
  do {
    int VAR_7;



    VAR_3.tv_sec = VAR_5 / 1000;
    VAR_3.tv_usec = (VAR_5 % 1000) * 1000;
    VAR_6 = FUNC_7(0, ((void*)0), ((void*)0), ((void*)0), &VAR_3);

    if(VAR_6 != -1)
      break;
    VAR_7 = VAR_1;
    if(VAR_7 && FUNC_2(VAR_7))
      break;
    VAR_5 = VAR_2 - FUNC_1();
    if(VAR_5 <= 0) {
      VAR_6 = 0;
      break;
    }
  } while(VAR_6 == -1);

  if(VAR_6)
    VAR_6 = -1;
  return VAR_6;
}
