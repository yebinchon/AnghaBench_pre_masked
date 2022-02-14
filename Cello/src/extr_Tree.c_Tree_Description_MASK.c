
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char* FUNC_0(void) {
  return
    "The `Tree` type is a self balancing binary tree implemented as a red-black "
    "tree. It provides key-value access and requires the `Cmp` class to be "
    "defined on the key type."
    "\n\n"
    "Element lookup and insertion are provided as an `O(log(n))` operation. "
    "This means in general a `Tree` is slower than a `Table` but it has several "
    "other nice properties such as being able to iterate over the items in "
    "order and not having large pauses for rehashing on some insertions."
    "\n\n"
    "This is largely equivalent to the C++ construct "
    "[std::map](http://www.cplusplus.com/reference/map/map/)";
}
