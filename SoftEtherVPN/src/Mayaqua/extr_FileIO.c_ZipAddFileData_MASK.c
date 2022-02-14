
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* CurrentFile; int Fifo; } ;
typedef TYPE_2__ ZIP_PACKER ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_5__ {scalar_t__ CurrentSize; scalar_t__ Size; int Crc32; } ;


 int FUNC_0 (void*,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;

UINT FUNC_3(ZIP_PACKER *VAR_0, void *VAR_1, UINT VAR_2, UINT VAR_3)
{
 UINT VAR_4;
 UINT VAR_5;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_5 = VAR_0->CurrentFile->CurrentSize + VAR_3;

 if (VAR_5 > VAR_0->CurrentFile->Size)
 {
  return 0;
 }

 FUNC_1(VAR_0->Fifo, ((UCHAR *)VAR_1) + VAR_2, VAR_3);

 VAR_0->CurrentFile->CurrentSize += VAR_3;
 VAR_0->CurrentFile->Crc32 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0->CurrentFile->Crc32);

 VAR_4 = VAR_0->CurrentFile->Size - VAR_0->CurrentFile->CurrentSize;

 if (VAR_4 == 0)
 {
  VAR_0->CurrentFile->Crc32 = ~VAR_0->CurrentFile->Crc32;

  FUNC_2(VAR_0);

  VAR_0->CurrentFile = ((void*)0);
 }

 return VAR_4;
}
