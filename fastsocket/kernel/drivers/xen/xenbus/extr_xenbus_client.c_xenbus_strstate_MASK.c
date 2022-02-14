
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;


 int FUNC_0 (char const* const*) ;
const char *FUNC_1(enum xenbus_state VAR_0)
{
 static const char *const VAR_1[] = {
  [ 128 ] = "Unknown",
  [ 129 ] = "Initialising",
  [ 131 ] = "InitWait",
  [ 130 ] = "Initialised",
  [ 132 ] = "Connected",
  [ 133 ] = "Closing",
  [ 134 ] = "Closed",
 };
 return (VAR_0 < FUNC_0(VAR_1)) ? VAR_1[VAR_0] : "INVALID";
}
