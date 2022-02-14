
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; scalar_t__ size_ul; } ;
struct Curl_easy {TYPE_1__ progress; } ;
typedef scalar_t__ curl_off_t ;


 int VAR_0 ;

void FUNC_0(struct Curl_easy *VAR_1, curl_off_t VAR_2)
{
  if(VAR_2 >= 0) {
    VAR_1->progress.size_ul = VAR_2;
    VAR_1->progress.flags |= VAR_0;
  }
  else {
    VAR_1->progress.size_ul = 0;
    VAR_1->progress.flags &= ~VAR_0;
  }
}
