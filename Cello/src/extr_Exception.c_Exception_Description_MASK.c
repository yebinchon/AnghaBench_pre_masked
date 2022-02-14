
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char* FUNC_0(void) {
  return
    "The `Exception` type provides an interface to the Cello Exception System. "
    "One instance of this type is created for each `Thread` and stores the "
    "various bits of data required for the exception system. It can be "
    "retrieved using the `current` function, although not much can be done "
    "with it."
    "\n\n"
    "Exceptions are available via the `try`, `catch` and `throw` macros. It is "
    "important that the `catch` part of the exception block is always "
    "evaluated otherwise the internal state of the exception system can go out "
    "of sync. For this reason please never use `return` inside a `try` block. "
    "\n\n"
    "The `exception_signals` method can be used to register some exception to "
    "be thrown for any of the "
    "[standard C signals](https://en.wikipedia.org/wiki/C_signal_handling)."
    "\n\n"
    "To get the current exception object or message use the "
    "`exception_message` or `exception_object` methods.";
}
