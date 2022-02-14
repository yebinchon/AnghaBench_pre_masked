
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_4__ {int timecond; } ;
struct TYPE_3__ {scalar_t__ timevalue; int timecondition; } ;
struct Curl_easy {TYPE_2__ info; TYPE_1__ set; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Curl_easy*,char*) ;

bool FUNC_1(struct Curl_easy *VAR_2, time_t VAR_3)
{
  if((VAR_3 == 0) || (VAR_2->set.timevalue == 0))
    return VAR_1;

  switch(VAR_2->set.timecondition) {
  case 129:
  default:
    if(VAR_3 <= VAR_2->set.timevalue) {
      FUNC_0(VAR_2,
            "The requested document is not new enough\n");
      VAR_2->info.timecond = VAR_1;
      return VAR_0;
    }
    break;
  case 128:
    if(VAR_3 >= VAR_2->set.timevalue) {
      FUNC_0(VAR_2,
            "The requested document is not old enough\n");
      VAR_2->info.timecond = VAR_1;
      return VAR_0;
    }
    break;
  }

  return VAR_1;
}
