
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** protocols; } ;
typedef TYPE_1__ curl_version_info_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const* const,char const*) ;
 TYPE_1__* FUNC_1 (int ) ;

int FUNC_2(const char *VAR_4)
{
  const char * const *VAR_5;
  const curl_version_info_data *VAR_6 = FUNC_1(VAR_0);
  if(!VAR_4)
    return VAR_3;
  for(VAR_5 = VAR_6->protocols; *VAR_5; VAR_5++) {
    if(FUNC_0(*VAR_5, VAR_4))
      return VAR_2;
  }
  return VAR_1;
}
