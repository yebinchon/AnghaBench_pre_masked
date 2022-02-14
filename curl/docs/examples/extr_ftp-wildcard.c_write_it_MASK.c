
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callback_data {scalar_t__ output; } ;


 size_t FUNC_0 (char*,size_t,size_t,scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static size_t FUNC_1(char *VAR_1, size_t VAR_2, size_t VAR_3,
                       void *VAR_4)
{
  struct callback_data *VAR_5 = VAR_4;
  size_t VAR_6 = 0;
  if(VAR_5->output)
    VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5->output);
  else

    VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0);
  return VAR_6;
}
