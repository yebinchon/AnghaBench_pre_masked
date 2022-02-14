
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0(int VAR_0)
{
 switch (VAR_0) {
 case 131:
  return "Active/Optimized";
 case 132:
  return "Active/NonOptimized";
 case 129:
  return "Standby";
 case 128:
  return "Unavailable";
 case 130:
  return "Offline";
 default:
  return "Unknown";
 }

 return ((void*)0);
}
