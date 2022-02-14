
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Size; int Crc32; } ;
typedef TYPE_1__ ZIP_FILE ;
struct TYPE_6__ {void* Crc32; void* UncompSize; void* CompSize; void* Signature; } ;
typedef TYPE_2__ ZIP_DATA_FOOTER ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;

void FUNC_2(ZIP_FILE *VAR_0, ZIP_DATA_FOOTER *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 ==((void*)0))
 {
  return;
 }

 VAR_1->Signature = FUNC_0(FUNC_1(0x08074B50));
 VAR_1->CompSize = VAR_1->UncompSize = FUNC_0(FUNC_1(VAR_0->Size));
 VAR_1->Crc32 = FUNC_0(FUNC_1(VAR_0->Crc32));
}
