
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;


 size_t FUNC_0 (char**) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(u8 VAR_0)
{
 static char *VAR_1[] = {
  "SUCCESS",
  "ABORT_DIRTY",
  "ABORT_NO_DATA_TRANSFER",
  "ABORT_PARTIAL_TRANSFER",
  "ERROR_DIRTY",
  "ERROR_NO_DATA_TRANSFER",
  "ERROR_PARTIAL_TRANSFER",
  "PROCESS_ABORT_DIRTY",
  "PROCESS_ABORT_NO_DATA_TRANSFER",
  "PROCESS_ABORT_PARTIAL_TRANSFER",
  "TRANSACTION_ERROR",
  "PROGRESS_REPORT"
 };

 if (VAR_0 >= FUNC_0(VAR_1))
  FUNC_1("RequestStatus = %0#2x", VAR_0);
 else
  FUNC_1("%s", VAR_1[VAR_0]);
}
