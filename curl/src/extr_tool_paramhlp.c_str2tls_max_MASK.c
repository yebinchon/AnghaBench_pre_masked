
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tls_max_array ;
typedef int ParameterError ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char const*) ;

ParameterError FUNC_1(long *VAR_3, const char *VAR_4)
{
   static struct s_tls_max {
    const char *tls_max_str;
    long tls_max;
  } const VAR_5[] = {
    { "default", 132 },
    { "1.0", 131 },
    { "1.1", 130 },
    { "1.2", 129 },
    { "1.3", 128 }
  };
  size_t VAR_6 = 0;
  if(!VAR_4)
    return VAR_2;
  for(VAR_6 = 0; VAR_6 < sizeof(VAR_5)/sizeof(VAR_5[0]); VAR_6++) {
    if(!FUNC_0(VAR_4, VAR_5[VAR_6].tls_max_str)) {
      *VAR_3 = VAR_5[VAR_6].tls_max;
      return VAR_1;
    }
  }
  return VAR_0;
}
