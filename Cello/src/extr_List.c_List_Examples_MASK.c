
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Example {char* member_0; char* member_1; } ;



__attribute__((used)) static struct Example* FUNC_0(void) {

  static struct Example VAR_0[] = {
    {
      "Construction & Deletion",
      "var x = new(List, Int);\n"
      "push(x, $I(32));\n"
      "push(x, $I(6));\n"
      "\n"
      "/* <'List' At 0x0000000000414603 [32, 6]> */\n"
      "show(x);\n",
    }, {
      "Element Access",
      "var x = new(List, Float, $F(0.01), $F(5.12));\n"
      "\n"
      "show(get(x, $I(0))); /* 0.01 */\n"
      "show(get(x, $I(1))); /* 5.12 */\n"
      "\n"
      "set(x, $I(0), $F(500.1));\n"
      "show(get(x, $I(0))); /* 500.1 */\n",
    }, {
      "Membership",
      "var x = new(List, Int, $I(1), $I(2), $I(3), $I(4));\n"
      "\n"
      "show($I(mem(x, $I(1)))); /* 1 */\n"
      "show($I(len(x)));        /* 4 */\n"
      "\n"
      "rem(x, $I(3));\n"
      "\n"
      "show($I(mem(x, $I(3)))); /* 0 */\n"
      "show($I(len(x)));        /* 3 */\n"
      "show($I(empty(x)));      /* 0 */\n"
      "\n"
      "resize(x, 0);\n"
      "\n"
      "show($I(empty(x)));      /* 1 */\n",
    }, {
      "Iteration",
      "var greetings = new(List, String, \n"
      "  $S(\"Hello\"), $S(\"Bonjour\"), $S(\"Hej\"));\n"
      "\n"
      "foreach(greet in greetings) {\n"
      "  show(greet);\n"
      "}\n",
    }, {((void*)0), ((void*)0)}
  };

  return VAR_0;
}
