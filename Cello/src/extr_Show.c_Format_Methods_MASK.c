
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Method {char* member_0; char* member_1; char* member_2; } ;



__attribute__((used)) static struct Method* FUNC_0(void) {

  static struct Method VAR_0[] = {
    {
      "format_to",
      "int format_to(var self, int pos, const char* fmt, ...);\n"
      "int format_to_va(var self, int pos, const char* fmt, va_list va);",
      "Write a formatted string `fmt` to the object `self` at position `pos`."
    }, {
      "format_from",
      "int format_from(var self, int pos, const char* fmt, ...);\n"
      "int format_from_va(var self, int pos, const char* fmt, va_list va);",
      "Read a formatted string `fmt` from the object `self` at position `pos`."
    }, {((void*)0), ((void*)0), ((void*)0)}
  };

  return VAR_0;
}
