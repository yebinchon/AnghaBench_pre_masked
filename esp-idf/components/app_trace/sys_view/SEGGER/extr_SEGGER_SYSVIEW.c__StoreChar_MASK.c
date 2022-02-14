
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int U8 ;
typedef int U32 ;
struct TYPE_3__ {unsigned int Cnt; unsigned int* pPayload; unsigned int* pPayloadStart; int pBuffer; int Options; } ;
typedef TYPE_1__ SEGGER_SYSVIEW_PRINTF_DESC ;


 int FUNC_0 (unsigned int*,int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int* FUNC_1 (int ) ;
 int FUNC_2 (unsigned int*,unsigned int*,int ) ;

__attribute__((used)) static void FUNC_3(SEGGER_SYSVIEW_PRINTF_DESC * VAR_2, char VAR_3) {
  unsigned int VAR_4;
  U8* VAR_5;
  U32 VAR_6;

  VAR_4 = VAR_2->Cnt;
  if ((VAR_4 + 1u) <= VAR_0) {
    *(VAR_2->pPayload++) = VAR_3;
    VAR_2->Cnt = VAR_4 + 1u;
  }



  if (VAR_2->Cnt == VAR_0) {
    *(VAR_2->pPayloadStart) = VAR_2->Cnt;
    VAR_5 = VAR_2->pPayload;
    VAR_6 = VAR_2->Options;
    FUNC_0(VAR_5, VAR_6);
    FUNC_0(VAR_5, 0);
    FUNC_2(VAR_2->pPayloadStart, VAR_5, VAR_1);
    VAR_2->pPayloadStart = FUNC_1(VAR_2->pBuffer);
    VAR_2->pPayload = VAR_2->pPayloadStart + 1u;
    VAR_2->Cnt = 0u;
  }
}
