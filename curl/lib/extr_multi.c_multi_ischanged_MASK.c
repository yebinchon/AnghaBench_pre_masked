
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_multi {int recheckstate; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct Curl_multi *VAR_1, bool VAR_2)
{
  bool VAR_3 = VAR_1->recheckstate;
  if(VAR_2)
    VAR_1->recheckstate = VAR_0;
  return VAR_3;
}
