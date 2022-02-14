
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {int httpversion; } ;
struct TYPE_4__ {scalar_t__ httpversion; } ;
struct TYPE_3__ {int httpversion; } ;
struct Curl_easy {TYPE_2__ set; TYPE_1__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_0(const struct Curl_easy *VAR_4,
                             const struct connectdata *VAR_5)
{
  if((VAR_4->state.httpversion == 10) || (VAR_5->httpversion == 10))
    return VAR_3;
  if((VAR_4->set.httpversion == VAR_0) &&
     (VAR_5->httpversion <= 10))
    return VAR_3;
  return ((VAR_4->set.httpversion == VAR_2) ||
          (VAR_4->set.httpversion >= VAR_1));
}
