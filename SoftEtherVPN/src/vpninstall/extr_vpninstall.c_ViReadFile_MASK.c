
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int InternetFile; scalar_t__ FileSize; scalar_t__ IoReadFileSize; int hHttpFile; int io; } ;
typedef TYPE_1__ VI_FILE ;
typedef scalar_t__ UINT ;


 int FUNC_0 (int ,void*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,void*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

UINT FUNC_3(VI_FILE *VAR_1, void *VAR_2, UINT VAR_3)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return VAR_0;
 }

 if (VAR_1->InternetFile == 0)
 {
  UINT VAR_4 = FUNC_2(VAR_3, VAR_1->FileSize - VAR_1->IoReadFileSize);
  bool VAR_5;

  if (VAR_4 == 0)
  {
   return 0;
  }

  VAR_5 = FUNC_0(VAR_1->io, VAR_2, VAR_4);

  if (VAR_5 == 0)
  {
   return VAR_0;
  }

  VAR_1->IoReadFileSize += VAR_4;

  return VAR_4;
 }
 else
 {
  UINT VAR_6 = 0;

  if (FUNC_1(VAR_1->hHttpFile, VAR_2, VAR_3, &VAR_6) == 0)
  {
   return VAR_0;
  }

  return VAR_6;
 }
}
