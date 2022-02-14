
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char wchar_t ;
typedef int tmp2 ;
typedef int tmp1 ;
typedef int tmp ;
typedef int str ;
struct TYPE_8__ {int (* Write ) (TYPE_2__*,char*) ;} ;
struct TYPE_7__ {int Double; int BpsTotal; int BpsUpload; int BpsDownload; int NumBytesTotal; int NumBytesUpload; int NumBytesDownload; scalar_t__ Raw; int Span; } ;
typedef TYPE_1__ TT_RESULT ;
typedef int CT ;
typedef TYPE_2__ CONSOLE ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,char*,char*,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int * FUNC_3 () ;
 int FUNC_4 (char*,int,int ) ;
 int VAR_0 ;
 int FUNC_5 (char*,int,char*,char*,char*) ;
 int FUNC_6 (char*,int,char*) ;
 int FUNC_7 (char*,int,int ) ;
 int FUNC_8 (char*,int,int ) ;
 int FUNC_9 (char*,int,char*,char*) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (TYPE_2__*,char*) ;

void FUNC_12(CONSOLE *VAR_1, TT_RESULT *VAR_2)
{
 CT *VAR_3;
 wchar_t VAR_4[VAR_0];
 wchar_t VAR_5[VAR_0];
 wchar_t VAR_6[VAR_0];
 char VAR_7[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_1->Write(VAR_1, FUNC_10("TTC_RES_TITLE"));

 VAR_3 = FUNC_3();
 FUNC_2(VAR_3, FUNC_10("TTC_RES_COLUMN_1"), 0);
 FUNC_2(VAR_3, FUNC_10("TTC_RES_COLUMN_2"), 1);
 FUNC_2(VAR_3, FUNC_10("TTC_RES_COLUMN_3"), 1);


 FUNC_4(VAR_7, sizeof(VAR_7), VAR_2->Span);
 FUNC_6(VAR_4, sizeof(VAR_4), VAR_7);
 FUNC_1(VAR_3, FUNC_10("TTC_RES_SPAN"), VAR_4, L"");


 FUNC_1(VAR_3, FUNC_10("TTC_RES_ETHER"), VAR_2->Raw ? FUNC_10("SEC_NO") : FUNC_10("SEC_YES"), L"");


 FUNC_7(VAR_7, sizeof(VAR_7), VAR_2->NumBytesDownload);
 FUNC_9(VAR_5, sizeof(VAR_5), L"%S Bytes", VAR_7);
 FUNC_8(VAR_7, sizeof(VAR_7), VAR_2->NumBytesDownload);
 FUNC_6(VAR_6, sizeof(VAR_6), VAR_7);
 FUNC_1(VAR_3, FUNC_10("TTC_RES_BYTES_DOWNLOAD"), VAR_5, VAR_6);


 FUNC_7(VAR_7, sizeof(VAR_7), VAR_2->NumBytesUpload);
 FUNC_9(VAR_5, sizeof(VAR_5), L"%S Bytes", VAR_7);
 FUNC_8(VAR_7, sizeof(VAR_7), VAR_2->NumBytesUpload);
 FUNC_6(VAR_6, sizeof(VAR_6), VAR_7);
 FUNC_1(VAR_3, FUNC_10("TTC_RES_BYTES_UPLOAD"), VAR_5, VAR_6);


 FUNC_7(VAR_7, sizeof(VAR_7), VAR_2->NumBytesTotal);
 FUNC_9(VAR_5, sizeof(VAR_5), L"%S Bytes", VAR_7);
 FUNC_8(VAR_7, sizeof(VAR_7), VAR_2->NumBytesTotal);
 FUNC_6(VAR_6, sizeof(VAR_6), VAR_7);
 FUNC_1(VAR_3, FUNC_10("TTC_RES_BYTES_TOTAL"), VAR_5, VAR_6);


 FUNC_1(VAR_3, FUNC_10("TTC_RES_DOUBLE"), (VAR_2->Double == 0) ? FUNC_10("SEC_NO") : FUNC_10("SEC_YES"), L"");


 FUNC_7(VAR_7, sizeof(VAR_7), VAR_2->BpsDownload);
 FUNC_9(VAR_5, sizeof(VAR_5), L"%S bps", VAR_7);
 FUNC_8(VAR_7, sizeof(VAR_7), VAR_2->BpsDownload);
 FUNC_5(VAR_7, sizeof(VAR_7), VAR_7, "Bytes", "bps");
 FUNC_6(VAR_6, sizeof(VAR_6), VAR_7);
 FUNC_1(VAR_3, FUNC_10("TTC_RES_BPS_DOWNLOAD"), VAR_5, VAR_6);


 FUNC_7(VAR_7, sizeof(VAR_7), VAR_2->BpsUpload);
 FUNC_9(VAR_5, sizeof(VAR_5), L"%S bps", VAR_7);
 FUNC_8(VAR_7, sizeof(VAR_7), VAR_2->BpsUpload);
 FUNC_5(VAR_7, sizeof(VAR_7), VAR_7, "Bytes", "bps");
 FUNC_6(VAR_6, sizeof(VAR_6), VAR_7);
 FUNC_1(VAR_3, FUNC_10("TTC_RES_BPS_UPLOAD"), VAR_5, VAR_6);


 FUNC_7(VAR_7, sizeof(VAR_7), VAR_2->BpsTotal);
 FUNC_9(VAR_5, sizeof(VAR_5), L"%S bps", VAR_7);
 FUNC_8(VAR_7, sizeof(VAR_7), VAR_2->BpsTotal);
 FUNC_5(VAR_7, sizeof(VAR_7), VAR_7, "Bytes", "bps");
 FUNC_6(VAR_6, sizeof(VAR_6), VAR_7);
 FUNC_1(VAR_3, FUNC_10("TTC_RES_BPS_TOTAL"), VAR_5, VAR_6);

 FUNC_0(VAR_3, VAR_1);
}
