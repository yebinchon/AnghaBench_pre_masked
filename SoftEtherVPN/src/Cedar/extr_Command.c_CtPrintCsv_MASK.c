
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char wchar_t ;
typedef int fmtbuf ;
typedef int buf ;
typedef int UINT ;
struct TYPE_12__ {int (* Write ) (TYPE_4__*,char*) ;} ;
struct TYPE_11__ {int Rows; int Columns; } ;
struct TYPE_10__ {int String; } ;
struct TYPE_9__ {int * Strings; } ;
typedef TYPE_1__ CTR ;
typedef TYPE_2__ CTC ;
typedef TYPE_3__ CT ;
typedef TYPE_4__ CONSOLE ;


 int FUNC_0 (char*,int,int ) ;
 void* FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (TYPE_4__*,char*) ;
 int FUNC_5 (TYPE_4__*,char*) ;

void FUNC_6(CT *VAR_1, CONSOLE *VAR_2)
{
 UINT VAR_3, VAR_4;
 UINT VAR_5 = FUNC_2(VAR_1->Columns);
 wchar_t VAR_6[VAR_0*4];
 wchar_t VAR_7[VAR_0*4];


 VAR_6[0] = 0;
 for(VAR_3=0; VAR_3<VAR_5; VAR_3++)
 {
  CTC *VAR_8 = FUNC_1(VAR_1->Columns, VAR_3);
  FUNC_0(VAR_7, sizeof(VAR_7), VAR_8->String);
  FUNC_3(VAR_6, sizeof(VAR_6), VAR_7);
  if(VAR_3 != VAR_5-1)
   FUNC_3(VAR_6, sizeof(VAR_6), L",");
 }
 VAR_2->Write(VAR_2, VAR_6);


 for(VAR_4=0; VAR_4<FUNC_2(VAR_1->Rows); VAR_4++)
 {
  CTR *VAR_9 = FUNC_1(VAR_1->Rows, VAR_4);
  VAR_6[0] = 0;
  for(VAR_3=0; VAR_3<VAR_5; VAR_3++)
  {
   FUNC_0(VAR_7, sizeof(VAR_7), VAR_9->Strings[VAR_3]);
   FUNC_3(VAR_6, sizeof(VAR_6), VAR_7);
   if(VAR_3 != VAR_5-1)
    FUNC_3(VAR_6, sizeof(VAR_6), L",");
  }
  VAR_2->Write(VAR_2, VAR_6);
 }
}
