
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Example {char* member_0; char* member_1; } ;



__attribute__((used)) static struct Example* FUNC_0(void) {

  static struct Example VAR_0[] = {
    {
      "Usage",
      "var x = $S(\"Hello\");\n"
      "var y = $S(\"World\");\n"
      "show(x); /* Hello */\n"
      "show(y); /* World */\n"
      "swap(x, y);\n"
      "show(x); /* World */\n"
      "show(y); /* Hello */\n"
    }, {((void*)0), ((void*)0)}
  };

  return VAR_0;
}
