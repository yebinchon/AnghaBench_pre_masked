
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Method {char* member_0; char* member_1; char* member_2; } ;



__attribute__((used)) static struct Method* FUNC_0(void) {

  static struct Method VAR_0[] = {
    {
      "new",
      "#define new(T, ...)\n"
      "#define new_raw(T, ...)\n"
      "#define new_root(T, ...)\n"
      "var new_with(var type, var args);\n"
      "var new_raw_with(var type, var args);\n"
      "var new_root_with(var type, var args);",
      "Construct a new object of a given `type`. Use `new_raw` to avoid the "
      "Garbage Collector completely, and `new_root` to register the allocation "
      "as a Garbage Collection root. In the case of raw and root allocations "
      "they must be destructed with the corresponding deletion functions."
    }, {
      "del",
      "void del(var self);\n"
      "void del_raw(var self);\n"
      "void del_root(var self);",
      "Destruct the object `self` manually. If registered with the "
      "Garbage Collector then entry will be removed. If `del_raw` is used then"
      "the destruction will be done without going via the Garbage Collector."
    }, {
      "construct",
      "#define construct(self, ...)\n"
      "var construct_with(var self, var args);",
      "Call the constructor on object `self` which has already been allocated."
    }, {
      "destruct",
      "var destruct(var self);",
      "Call the destructor on object `self` without deallocating the memory "
      "for it."
    }, {((void*)0), ((void*)0), ((void*)0)}
  };

  return VAR_0;
}
