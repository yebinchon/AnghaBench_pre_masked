
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ev_ret_t ;







__attribute__((used)) static const char *
FUNC_0(ev_ret_t VAR_0)
{
 const char *VAR_1 = "UNKNOWN";

 switch (VAR_0) {
 case 130:
  VAR_1 = "MPTS_EVRET_DELETE";
  break;
 case 131:
  VAR_1 = "MPTS_EVRET_CONNECT_PENDING";
  break;
 case 129:
  VAR_1 = "MPTS_EVRET_DISCONNECT_FALLBACK";
  break;
 case 128:
  VAR_1 = "MPTS_EVRET_OK";
  break;
 default:
  break;
 }
 return (VAR_1);
}
