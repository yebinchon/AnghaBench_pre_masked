
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct asprintf {char* buffer; size_t len; scalar_t__ alloc; scalar_t__ fail; } ;


 int VAR_0 ;
 int FUNC_0 (struct asprintf*,int ,char const*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;

char *FUNC_3(const char *VAR_1, va_list VAR_2)
{
  int VAR_3;
  struct asprintf VAR_4;

  VAR_4.buffer = ((void*)0);
  VAR_4.len = 0;
  VAR_4.alloc = 0;
  VAR_4.fail = 0;

  VAR_3 = FUNC_0(&VAR_4, VAR_0, VAR_1, VAR_2);
  if((-1 == VAR_3) || VAR_4.fail) {
    if(VAR_4.alloc)
      FUNC_1(VAR_4.buffer);
    return ((void*)0);
  }

  if(VAR_4.alloc) {
    VAR_4.buffer[VAR_4.len] = 0;
    return VAR_4.buffer;
  }
  return FUNC_2("");
}
