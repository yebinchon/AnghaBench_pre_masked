
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct curltime {int member_0; int tv_sec; int member_1; } ;
typedef int curl_off_t ;
struct TYPE_6__ {int current_speed; } ;
struct TYPE_7__ {TYPE_1__ progress; } ;
typedef scalar_t__ CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,struct curltime) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,long) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int FUNC_3(long VAR_3,
                     long VAR_4,
                     curl_off_t VAR_5,
                     int VAR_6)
{
  int VAR_7 = 1;
  struct curltime VAR_8 = {1, 0};
  CURLcode VAR_9;
  int VAR_10;

  FUNC_2(VAR_2, VAR_0, VAR_4);
  FUNC_2(VAR_2, VAR_1, VAR_3);
  FUNC_1(VAR_2);

  do {

    VAR_2->progress.current_speed = VAR_5;
    VAR_9 = FUNC_0(VAR_2, VAR_8);
    if(VAR_9)
      break;

    VAR_8.tv_sec = ++VAR_7;
    VAR_5 -= VAR_6;
  } while(VAR_7 < 100);

  VAR_10 = (int)(VAR_8.tv_sec - 1);

  return VAR_10;
}
