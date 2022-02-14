
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;


 size_t VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(u16 VAR_1)
{
 static char *VAR_2[] = {
  "SUCCESS",
  "0x01",
  "BAD_KEY",
  "TCL_ERROR",
  "REPLY_BUFFER_FULL",
  "NO_SUCH_PAGE",
  "INSUFFICIENT_RESOURCE_SOFT",
  "INSUFFICIENT_RESOURCE_HARD",
  "0x08",
  "CHAIN_BUFFER_TOO_LARGE",
  "UNSUPPORTED_FUNCTION",
  "DEVICE_LOCKED",
  "DEVICE_RESET",
  "INAPPROPRIATE_FUNCTION",
  "INVALID_INITIATOR_ADDRESS",
  "INVALID_MESSAGE_FLAGS",
  "INVALID_OFFSET",
  "INVALID_PARAMETER",
  "INVALID_REQUEST",
  "INVALID_TARGET_ADDRESS",
  "MESSAGE_TOO_LARGE",
  "MESSAGE_TOO_SMALL",
  "MISSING_PARAMETER",
  "TIMEOUT",
  "UNKNOWN_ERROR",
  "UNKNOWN_FUNCTION",
  "UNSUPPORTED_VERSION",
  "DEVICE_BUSY",
  "DEVICE_NOT_AVAILABLE"
 };

 if (VAR_1 > VAR_0)
  FUNC_0(" / DetailedStatus = %0#4x.\n",
         VAR_1);
 else
  FUNC_0(" / %s.\n", VAR_2[VAR_1]);
}
