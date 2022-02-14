
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char wchar_t ;
typedef int tmp2 ;
typedef int tmp ;
struct TYPE_3__ {int Print; int Param; scalar_t__ Double; scalar_t__ Raw; scalar_t__ Span; int Type; int NumTcp; int Port; int Host; } ;
typedef TYPE_1__ TTC ;


 char* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (char*,int,char*,...) ;
 int FUNC_4 (char*,int ) ;
 char* FUNC_5 (char*) ;

void FUNC_6(TTC *VAR_1)
{
 wchar_t VAR_2[VAR_0];
 wchar_t VAR_3[VAR_0];
 wchar_t *VAR_4 = L"%-35s %s";

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_1->Param, VAR_1->Print, L"");
 FUNC_2(VAR_1->Param, VAR_1->Print, FUNC_5("TTC_SUMMARY_BAR"));
 FUNC_2(VAR_1->Param, VAR_1->Print, FUNC_5("TTC_SUMMARY_TITLE"));
 FUNC_2(VAR_1->Param, VAR_1->Print, L"");


 FUNC_1(VAR_3, sizeof(VAR_3), VAR_1->Host);
 FUNC_3(VAR_2, sizeof(VAR_2), VAR_4, FUNC_5("TTC_SUMMARY_HOST"), VAR_3);
 FUNC_2(VAR_1->Param, VAR_1->Print, VAR_2);


 FUNC_4(VAR_3, VAR_1->Port);
 FUNC_3(VAR_2, sizeof(VAR_2), VAR_4, FUNC_5("TTC_SUMMARY_PORT"), VAR_3);
 FUNC_2(VAR_1->Param, VAR_1->Print, VAR_2);


 FUNC_4(VAR_3, VAR_1->NumTcp);
 FUNC_3(VAR_2, sizeof(VAR_2), VAR_4, FUNC_5("TTC_SUMMARY_NUMTCP"), VAR_3);
 FUNC_2(VAR_1->Param, VAR_1->Print, VAR_2);


 FUNC_3(VAR_2, sizeof(VAR_2), VAR_4, FUNC_5("TTC_SUMMARY_TYPE"), FUNC_0(VAR_1->Type));
 FUNC_2(VAR_1->Param, VAR_1->Print, VAR_2);


 FUNC_3(VAR_3, sizeof(VAR_3), FUNC_5("TTC_SPAN_STR"), (double)(VAR_1->Span) / 1000.0);
 FUNC_3(VAR_2, sizeof(VAR_2), VAR_4, FUNC_5("TTC_SUMMARY_SPAN"), VAR_3);
 FUNC_2(VAR_1->Param, VAR_1->Print, VAR_2);


 FUNC_3(VAR_2, sizeof(VAR_2), VAR_4, FUNC_5("TTC_SUMMARY_ETHER"), VAR_1->Raw ? FUNC_5("SEC_NO") : FUNC_5("SEC_YES"));
 FUNC_2(VAR_1->Param, VAR_1->Print, VAR_2);


 FUNC_3(VAR_2, sizeof(VAR_2), VAR_4, FUNC_5("TTC_SUMMARY_DOUBLE"), VAR_1->Double ? FUNC_5("SEC_YES") : FUNC_5("SEC_NO"));
 FUNC_2(VAR_1->Param, VAR_1->Print, VAR_2);

 FUNC_2(VAR_1->Param, VAR_1->Print, FUNC_5("TTC_SUMMARY_BAR"));
 FUNC_2(VAR_1->Param, VAR_1->Print, L"");
}
