
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pvr2_ctl_type { ____Placeholder_pvr2_ctl_type } pvr2_ctl_type ;







__attribute__((used)) static const char *FUNC_0(enum pvr2_ctl_type VAR_0)
{
 switch (VAR_0) {
 case 128: return "integer";
 case 129: return "enum";
 case 130: return "boolean";
 case 131: return "bitmask";
 }
 return "";
}
