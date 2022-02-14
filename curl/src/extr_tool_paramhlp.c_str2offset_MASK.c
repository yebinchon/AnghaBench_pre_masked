
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int curl_off_t ;
typedef int ParameterError ;
typedef scalar_t__ CURLofft ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (char const*,char**,int ,int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char**,int ) ;

ParameterError FUNC_3(curl_off_t *VAR_10, const char *VAR_11)
{
  char *VAR_12;
  if(VAR_11[0] == '-')

    return VAR_6;
  VAR_9 = 0;
  *VAR_10 = FUNC_2(VAR_11, &VAR_12, 0);
  if((*VAR_10 == VAR_4 || *VAR_10 == VAR_3) && VAR_9 == VAR_2)
    return VAR_7;

  if((VAR_12 != VAR_11) && (VAR_12 == VAR_11 + FUNC_1(VAR_11)))
    return VAR_8;

  return VAR_5;
}
