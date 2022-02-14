
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Method {char* member_0; char* member_1; char* member_2; } ;



__attribute__((used)) static struct Method* FUNC_0(void) {

  static struct Method VAR_0[] = {
    {
      "name",
      "const char* name(var type);",
      "Return the name of a given `type`."
    }, {
      "brief",
      "const char* brief(var type);",
      "Return a brief description of a given `type`."
    }, {
      "description",
      "const char* description(var type);",
      "Return a longer description of a given `type`."
    }, {
      "definition",
      "const char* definition(var type);",
      "Return the C definition of a given `type`."
    }, {((void*)0), ((void*)0), ((void*)0)}
  };

  return VAR_0;
}
