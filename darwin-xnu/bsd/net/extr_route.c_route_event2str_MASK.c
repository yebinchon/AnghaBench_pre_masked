
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *
FUNC_0(int VAR_0)
{
 const char *VAR_1 = "ROUTE_EVENT_UNKNOWN";
 switch (VAR_0) {
  case 128:
   VAR_1 = "ROUTE_STATUS_UPDATE";
   break;
  case 138:
   VAR_1 = "ROUTE_ENTRY_REFRESH";
   break;
  case 139:
   VAR_1 = "ROUTE_ENTRY_DELETED";
   break;
  case 132:
   VAR_1 = "ROUTE_LLENTRY_RESOLVED";
   break;
  case 129:
   VAR_1 = "ROUTE_LLENTRY_UNREACH";
   break;
  case 136:
   VAR_1 = "ROUTE_LLENTRY_CHANGED";
   break;
  case 131:
   VAR_1 = "ROUTE_LLENTRY_STALE";
   break;
  case 130:
   VAR_1 = "ROUTE_LLENTRY_TIMEDOUT";
   break;
  case 135:
   VAR_1 = "ROUTE_LLENTRY_DELETED";
   break;
  case 134:
   VAR_1 = "ROUTE_LLENTRY_EXPIRED";
   break;
  case 133:
   VAR_1 = "ROUTE_LLENTRY_PROBED";
   break;
  case 137:
   VAR_1 = "ROUTE_EVHDLR_DEREGISTER";
   break;
  default:

   break;
 }
 return VAR_1;
}
