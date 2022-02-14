
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct nsprintf {char* buffer; size_t length; size_t max; } ;


 int VAR_0 ;
 int FUNC_0 (struct nsprintf*,int ,char const*,int ) ;

int FUNC_1(char *VAR_1, size_t VAR_2, const char *VAR_3,
                    va_list VAR_4)
{
  int VAR_5;
  struct nsprintf VAR_6;

  VAR_6.buffer = VAR_1;
  VAR_6.length = 0;
  VAR_6.max = VAR_2;

  VAR_5 = FUNC_0(&VAR_6, VAR_0, VAR_3, VAR_4);
  if((VAR_5 != -1) && VAR_6.max) {

    if(VAR_6.max == VAR_6.length)

      VAR_6.buffer[-1] = 0;
    else
      VAR_6.buffer[0] = 0;
  }
  return VAR_5;
}
