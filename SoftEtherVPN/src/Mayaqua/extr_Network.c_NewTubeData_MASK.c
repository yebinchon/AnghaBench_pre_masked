
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {void* Header; scalar_t__ HeaderSize; scalar_t__ DataSize; void* Data; } ;
typedef TYPE_1__ TUBEDATA ;


 void* FUNC_0 (void*,scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;

TUBEDATA *FUNC_2(void *VAR_0, UINT VAR_1, void *VAR_2, UINT VAR_3)
{
 TUBEDATA *VAR_4;

 if (VAR_1 == 0 || VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_1(sizeof(TUBEDATA));

 VAR_4->Data = FUNC_0(VAR_0, VAR_1);
 VAR_4->DataSize = VAR_1;
 if (VAR_2 != ((void*)0))
 {
  VAR_4->Header = FUNC_0(VAR_2, VAR_3);
  VAR_4->HeaderSize = VAR_3;
 }
 else
 {
  VAR_4->Header = FUNC_1(VAR_3);
 }

 return VAR_4;
}
