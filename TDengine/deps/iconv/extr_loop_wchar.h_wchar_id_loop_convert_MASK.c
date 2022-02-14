
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_2__ {int data; int (* wc_hook ) (int ,int ) ;} ;
struct conv_struct {TYPE_1__ hooks; } ;
typedef scalar_t__ iconv_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static size_t FUNC_1 (iconv_t VAR_0,
                                     const char* * VAR_1, size_t *VAR_2,
                                     char* * VAR_3, size_t *VAR_4)
{
  struct conv_struct * VAR_5 = (struct conv_struct *) VAR_0;
  const wchar_t* VAR_6 = (const wchar_t*) *VAR_1;
  size_t VAR_7 = *VAR_2 / sizeof(wchar_t);
  wchar_t* VAR_8 = (wchar_t*) *VAR_3;
  size_t VAR_9 = *VAR_4 / sizeof(wchar_t);
  size_t VAR_10 = (VAR_7 <= VAR_9 ? VAR_7 : VAR_9);
  if (VAR_10 > 0) {
    *VAR_2 -= VAR_10 * sizeof(wchar_t);
    *VAR_4 -= VAR_10 * sizeof(wchar_t);
    do {
      wchar_t VAR_11 = *VAR_6++;
      *VAR_8++ = VAR_11;

      if (VAR_5->hooks.wc_hook)
        (*VAR_5->hooks.wc_hook)(VAR_11, VAR_5->hooks.data);

    } while (--VAR_10 > 0);
    *VAR_1 = (const char*) VAR_6;
    *VAR_3 = (char*) VAR_8;
  }
  return 0;
}
