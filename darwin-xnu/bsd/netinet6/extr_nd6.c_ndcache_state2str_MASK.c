
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *
FUNC_0(short VAR_0)
{
 const char *VAR_1 = "UNKNOWN";
 switch (VAR_0) {
 case 130:
  VAR_1 = "ND6_LLINFO_PURGE";
  break;
 case 132:
  VAR_1 = "ND6_LLINFO_NOSTATE";
  break;
 case 133:
  VAR_1 = "ND6_LLINFO_INCOMPLETE";
  break;
 case 129:
  VAR_1 = "ND6_LLINFO_REACHABLE";
  break;
 case 128:
  VAR_1 = "ND6_LLINFO_STALE";
  break;
 case 134:
  VAR_1 = "ND6_LLINFO_DELAY";
  break;
 case 131:
  VAR_1 = "ND6_LLINFO_PROBE";
  break;
 default:

  break;
 }
 return VAR_1;
}
