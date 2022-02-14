
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ TotalRecvSize; scalar_t__ TotalRecvSizeReal; scalar_t__ TotalSendSize; scalar_t__ TotalSendSizeReal; } ;
typedef TYPE_1__ SESSION ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,float,float) ;

void FUNC_1(SESSION *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(
  "-- SESSION TOTAL PKT INFORMATION --\n\n"
  "      TotalSendSize: %I64u\n"
  "  TotalSendSizeReal: %I64u\n"
  "      TotalRecvSize: %I64u\n"
  "  TotalRecvSizeReal: %I64u\n"
  "   Compression Rate: %.2f%% (Send)\n"
  "                     %.2f%% (Recv)\n",
  VAR_0->TotalSendSize, VAR_0->TotalSendSizeReal,
  VAR_0->TotalRecvSize, VAR_0->TotalRecvSizeReal,
  (float)((double)VAR_0->TotalSendSizeReal / (double)VAR_0->TotalSendSize * 100.0f),
  (float)((double)VAR_0->TotalRecvSizeReal / (double)VAR_0->TotalRecvSize * 100.0f)
  );

}
