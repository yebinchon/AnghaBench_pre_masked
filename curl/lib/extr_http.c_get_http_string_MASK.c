
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ h2; } ;
struct TYPE_6__ {TYPE_2__ httpc; } ;
struct connectdata {int httpversion; TYPE_3__ proto; } ;
struct TYPE_4__ {scalar_t__ httpversion; } ;
struct Curl_easy {TYPE_1__ set; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct Curl_easy const*,struct connectdata const*) ;

__attribute__((used)) static const char *FUNC_1(const struct Curl_easy *VAR_1,
                                   const struct connectdata *VAR_2)
{
  if(FUNC_0(VAR_1, VAR_2))
    return "1.1";

  return "1.0";
}
