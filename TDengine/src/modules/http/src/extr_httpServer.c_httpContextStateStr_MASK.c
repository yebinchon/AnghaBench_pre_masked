
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HttpContextState ;







const char* FUNC_0(HttpContextState VAR_0) {
  switch (VAR_0) {
    case 128:
      return "ready";
    case 129:
      return "handling";
    case 130:
      return "dropping";
    case 131:
      return "closed";
    default:
      return "unknown";
  }
}
