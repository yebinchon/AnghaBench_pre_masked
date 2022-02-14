
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Example {char* member_0; char* member_1; } ;



__attribute__((used)) static struct Example* FUNC_0(void) {

  static struct Example VAR_0[] = {
    {
      "Usage",
      "var x = new(Int, $I(10));\n"
      "var y = new(Int, $I(20));\n"
      "\n"
      "show(x); /* 10 */\n"
      "show(y); /* 20 */\n"
      "\n"
      "assign(x, y);\n"
      "\n"
      "show(x); /* 20 */\n"
      "show(y); /* 20 */\n"
    }, {((void*)0), ((void*)0)}
  };

  return VAR_0;
}
