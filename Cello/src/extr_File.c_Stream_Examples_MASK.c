
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Example {char* member_0; char* member_1; } ;



__attribute__((used)) static struct Example* FUNC_0(void) {

  static struct Example VAR_0[] = {
    {
      "Usage",
      "var f = sopen($(File, NULL), $S(\"test.bin\"), $S(\"r\"));\n"
      "\n"
      "char c;\n"
      "while (!seof(f)) {\n"
      "  sread(f, &c, 1);\n"
      "  putc(c, stdout);\n"
      "}\n"
      "\n"
      "sclose(f);\n"
    }, {((void*)0), ((void*)0)}
  };

  return VAR_0;

}
