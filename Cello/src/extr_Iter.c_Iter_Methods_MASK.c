
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Method {char* member_0; char* member_1; char* member_2; } ;



__attribute__((used)) static struct Method* FUNC_0(void) {

  static struct Method VAR_0[] = {
    {
      "foreach",
      "#define foreach(...)\n",
      "Iterate over elements in a loop."
    }, {
      "iter_init",
      "var iter_init(var self);\n"
      "var iter_last(var self);",
      "Return the initial item (or final item) in the iteration over `self`."
    }, {
      "iter_next",
      "var iter_next(var self, var curr);\n"
      "var iter_prev(var self, var curr);",
      "Given the current item `curr`, return the next (or previous) item in "
      "the iteration over `self`."
    }, {
      "iter_type",
      "var iter_type(var self);",
      "Returns the type of item that can be expected to be returned by the "
      "iterable."
    }, {((void*)0), ((void*)0), ((void*)0)}
  };

  return VAR_0;
}
