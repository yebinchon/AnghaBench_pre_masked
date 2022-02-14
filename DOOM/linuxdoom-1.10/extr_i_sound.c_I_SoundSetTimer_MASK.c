
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sigaction {int sa_flags; int sa_handler; } ;
struct TYPE_4__ {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_3__ {int tv_usec; scalar_t__ tv_sec; } ;
struct itimerval {TYPE_2__ it_value; TYPE_1__ it_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,struct itimerval*,struct itimerval*) ;
 int VAR_3 ;
 int FUNC_2 (int ,struct sigaction*,struct sigaction*) ;
 int VAR_4 ;

int FUNC_3( int VAR_5 )
{

  struct itimerval VAR_6;
  struct itimerval VAR_7;
  struct sigaction VAR_8;
  struct sigaction VAR_9;

  int VAR_10;





  VAR_8.sa_handler = VAR_0;



  VAR_8.sa_flags = VAR_1;

  FUNC_2( VAR_3, &VAR_8, &VAR_9 );

  VAR_6.it_interval.tv_sec = 0;
  VAR_6.it_interval.tv_usec = VAR_5;
  VAR_6.it_value.tv_sec = 0;
  VAR_6.it_value.tv_usec = VAR_5;


  VAR_10 = FUNC_1( VAR_2, &VAR_6, &VAR_7 );


  if ( VAR_10 == -1 )
    FUNC_0( VAR_4, "I_SoundSetTimer: interrupt n.a.\n");

  return VAR_10;
}
