
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mptcp_state_t ;
__attribute__((used)) static const char *
FUNC_0(mptcp_state_t VAR_0)
{
        const char *VAR_1 = "UNDEFINED";
 switch (VAR_0) {
 case 137:
  VAR_1 = "MPTCPS_CLOSED";
  break;
 case 130:
  VAR_1 = "MPTCPS_LISTEN";
  break;
 case 134:
  VAR_1 = "MPTCPS_ESTABLISHED";
  break;
 case 136:
  VAR_1 = "MPTCPS_CLOSE_WAIT";
  break;
 case 133:
  VAR_1 = "MPTCPS_FIN_WAIT_1";
  break;
 case 135:
  VAR_1 = "MPTCPS_CLOSING";
  break;
 case 131:
  VAR_1 = "MPTCPS_LAST_ACK";
  break;
 case 132:
  VAR_1 = "MPTCPS_FIN_WAIT_2";
  break;
 case 128:
  VAR_1 = "MPTCPS_TIME_WAIT";
  break;
 case 129:
  VAR_1 = "MPTCPS_TERMINATE";
  break;
 }
 return (VAR_1);
}
