
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char* FUNC_0(void) {
  return
    "`Assign` is potentially the most important class in Cello. It is used "
    "throughout Cello to initialise objects using other objects. In C++ this is "
    "called the _copy constructor_ and it is used to assign the value of one "
    "object to another."
    "\n\n"
    "By default the `Assign` class uses the `Size` class to copy the memory "
    "from one object to another. But for more complex objects which maintain "
    "their own behaviours and state this may need to be overridden."
    "\n\n"
    "The most important thing about the `Assign` class is that it must work on "
    "the assumption that the target object may not have had it's constructor "
    "called and could be uninitialised with just zero'd memory. This is often "
    "the case when copying contents into containers.";
}
