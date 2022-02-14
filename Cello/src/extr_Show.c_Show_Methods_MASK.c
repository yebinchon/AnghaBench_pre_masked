
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Method {char* member_0; char* member_1; char* member_2; } ;



__attribute__((used)) static struct Method* FUNC_0(void) {

  static struct Method VAR_0[] = {
    {
      "show",
      "int show(var self);\n"
      "int show_to(var self, var out, int pos);",
      "Show the object `self` either to `stdout` or to the object `output`."
    }, {
      "look",
      "int look(var self);\n"
      "int look_from(var self, var input, int pos);",
      "Read the object `self` either from `stdout` or from the object `input`."
    }, {
      "print",
      "#define print(fmt, ...)\n"
      "#define println(fmt, ...)\n"
      "#define print_to(out, pos, fmt, ...)\n"
      "int print_with(const char* fmt, var args);\n"
      "int println_with(const char* fmt, var args);\n"
      "int print_to_with(var out, int pos, const char* fmt, var args);",
      "Print the format string `fmt` either to `stdout` or to the object `out` "
      "at positions `pos`. Returns new position in output."
    }, {
      "scan",
      "#define scan(fmt, ...)\n"
      "#define scanln(fmt, ...)\n"
      "#define scan_from(input, pos, fmt, ...)\n"
      "int scan_with(const char* fmt, var args);\n"
      "int scanln_with(const char* fmt, var args);\n"
      "int scan_from_with(var input, int pos, const char* fmt, var args);",
      "Scan the format string `fmt` either from `stdout` or from the object "
      "`input` at position `pos`. Returns new position in output."
    }, {((void*)0), ((void*)0), ((void*)0)}
  };

  return VAR_0;
}
