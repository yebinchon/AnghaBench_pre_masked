
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Example {char* member_0; char* member_1; } ;



__attribute__((used)) static struct Example* FUNC_0(void) {

  static struct Example VAR_0[] = {
    {
      "Usage",
      "/* printf(\"Hello my name is %s, I'm %i\\n\", \"Dan\", 23); */\n"
      "format_to($(File, stdout), 0, \n"
      "  \"Hello my name is %s, I'm %i\\n\", \"Dan\", 23);\n"
    }, {((void*)0), ((void*)0)}
  };

  return VAR_0;

}
