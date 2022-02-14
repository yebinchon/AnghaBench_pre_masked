
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cqev_t ;
const char *
FUNC_0(cqev_t VAR_0)
{
 const char *VAR_1;

 switch (VAR_0) {
 case 132:
  VAR_1 = "LINK_BANDWIDTH";
  break;

 case 130:
  VAR_1 = "LINK_LATENCY";
  break;

 case 129:
  VAR_1 = "LINK_MTU";
  break;

 case 128:
  VAR_1 = "LINK_UP";
  break;

 case 131:
  VAR_1 = "LINK_DOWN";
  break;

 default:
  VAR_1 = "UNKNOWN";
  break;
 }

 return (VAR_1);
}
