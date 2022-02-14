
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Name; int Crc32; int Size; int DateTime; } ;
typedef TYPE_1__ ZIP_FILE ;
struct TYPE_6__ {scalar_t__ ExtraLen; void* FileNameLen; void* Crc32; void* UncompSize; void* CompSize; void* Option; void* FileTime; void* FileDate; scalar_t__ CompType; void* NeedVer; void* Signature; } ;
typedef TYPE_2__ ZIP_DATA_HEADER ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_7(ZIP_FILE *VAR_2, ZIP_DATA_HEADER *VAR_3, bool VAR_4)
{

 if (VAR_2 == ((void*)0) || VAR_3 ==((void*)0))
 {
  return;
 }

 VAR_3->Signature = FUNC_1(FUNC_4(VAR_0));
 VAR_3->NeedVer = FUNC_0(FUNC_3(VAR_1));
 VAR_3->CompType = 0;
 VAR_3->FileDate = FUNC_0(FUNC_3(FUNC_5(VAR_2->DateTime)));
 VAR_3->FileTime = FUNC_0(FUNC_3(FUNC_6(VAR_2->DateTime)));
 VAR_3->Option = FUNC_0(FUNC_3(8));

 if (VAR_4 == 0)
 {
  VAR_3->CompSize = VAR_3->UncompSize = 0;
  VAR_3->Crc32 = 0;
 }
 else
 {
  VAR_3->CompSize = VAR_3->UncompSize = FUNC_1(FUNC_4(VAR_2->Size));
  VAR_3->Crc32 = FUNC_1(FUNC_4(VAR_2->Crc32));
 }

 VAR_3->FileNameLen = FUNC_0(FUNC_3(FUNC_2(VAR_2->Name)));
 VAR_3->ExtraLen = 0;
}
