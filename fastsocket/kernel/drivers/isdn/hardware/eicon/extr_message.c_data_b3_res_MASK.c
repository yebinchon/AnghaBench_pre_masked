
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int word ;
typedef int dword ;
typedef scalar_t__ byte ;
struct TYPE_16__ {int info; } ;
struct TYPE_15__ {int MaxBuffer; int* DataNCCI; int* DataFlags; } ;
struct TYPE_14__ {int * ncci_ch; scalar_t__ Id; } ;
struct TYPE_13__ {scalar_t__ Id; } ;
typedef TYPE_1__ PLCI ;
typedef TYPE_2__ DIVA_CAPI_ADAPTER ;
typedef TYPE_3__ APPL ;
typedef TYPE_4__ API_PARSE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_1__*,int ,scalar_t__) ;

__attribute__((used)) static byte FUNC_7(dword VAR_1, word VAR_2, DIVA_CAPI_ADAPTER *VAR_3,
   PLCI *VAR_4, APPL *VAR_5, API_PARSE *VAR_6)
{
  word VAR_7;
  word VAR_8;
  word VAR_9;

  FUNC_4(1,FUNC_5("data_b3_res"));

  VAR_8 = (word)(VAR_1>>16);
  if(VAR_4 && VAR_8) {
    VAR_7 = FUNC_0(VAR_6[0].info);
    FUNC_4(1,FUNC_5("free(%d)",VAR_7));
    VAR_9 = VAR_8 | (((word) VAR_3->Id) << 8);
    if(VAR_7<VAR_5->MaxBuffer &&
       VAR_5->DataNCCI[VAR_7]==VAR_9 &&
       (byte)(VAR_5->DataFlags[VAR_7]>>8)==VAR_4->Id) {
      FUNC_4(1,FUNC_5("found"));
      VAR_5->DataNCCI[VAR_7] = 0;

      if (FUNC_1 (VAR_4, VAR_3->ncci_ch[VAR_8])) {
        FUNC_2 (VAR_4, VAR_3->ncci_ch[VAR_8]);
      }
      FUNC_3 (VAR_4);

      if(VAR_5->DataFlags[VAR_7] &4) {
        FUNC_6(VAR_4,VAR_0,(byte)VAR_8);
        return 1;
      }
    }
  }
  return 0;
}
