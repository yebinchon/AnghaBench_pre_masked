
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Method {char* member_0; char* member_1; char* member_2; } ;



__attribute__((used)) static struct Method* FUNC_0(void) {

  static struct Method VAR_0[] = {
    {
      "sopen",
      "var sopen(var self, var resource, var options);",
      "Open the stream `self` with a given `resource` and `options`."
    }, {
      "sclose",
      "void sclose(var self);",
      "Close the stream `self`."
    }, {
      "sseek",
      "void sseek(var self, int64_t pos, int origin);",
      "Seek to the position `pos` from some `origin` in the stream `self`."
    }, {
      "stell",
      "int64_t stell(var self);",
      "Return the current position of the stream `stell`."
    }, {
      "sflush",
      "void sflush(var self);",
      "Flush the buffered contents of stream `self`."
    }, {
      "seof",
      "bool seof(var self);",
      "Returns true if there is no more information in the stream."
    }, {
      "sread",
      "size_t sread(var self, void* output, size_t size);",
      "Read `size` bytes from the stream `self` and write them to `output`."
    }, {
      "swrite",
      "size_t swrite(var self, void* input, size_t size);",
      "Write `size` bytes to the stream `self` and read them from `input`."
    }, {((void*)0), ((void*)0), ((void*)0)}
  };

  return VAR_0;
}
