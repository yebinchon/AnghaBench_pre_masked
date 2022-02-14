
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upload_status {size_t lines_read; } ;


 int FUNC_0 (void*,char const*,size_t) ;
 char** VAR_0 ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static size_t FUNC_2(void *VAR_1, size_t VAR_2, size_t VAR_3, void *VAR_4)
{
  struct upload_status *VAR_5 = (struct upload_status *)VAR_4;
  const char *VAR_6;

  if((VAR_2 == 0) || (VAR_3 == 0) || ((VAR_2*VAR_3) < 1)) {
    return 0;
  }

  VAR_6 = VAR_0[VAR_5->lines_read];

  if(VAR_6) {
    size_t VAR_7 = FUNC_1(VAR_6);
    FUNC_0(VAR_1, VAR_6, VAR_7);
    VAR_5->lines_read++;

    return VAR_7;
  }

  return 0;
}
