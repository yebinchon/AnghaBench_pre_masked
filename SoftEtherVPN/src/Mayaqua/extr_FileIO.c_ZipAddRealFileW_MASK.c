
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int ZIP_PACKER ;
typedef int UINT64 ;
typedef int UINT ;
struct TYPE_4__ {int Size; int Buf; } ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ,int ,int ,int ) ;

bool FUNC_4(ZIP_PACKER *VAR_0, char *VAR_1, UINT64 VAR_2, UINT VAR_3, wchar_t *VAR_4)
{
 BUF *VAR_5;

 if (VAR_0 == ((void*)0) || FUNC_1(VAR_1) || VAR_4 == ((void*)0))
 {
  return 0;
 }

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 == ((void*)0))
 {
  return 0;
 }

 FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5->Buf, VAR_5->Size);

 FUNC_0(VAR_5);

 return 1;
}
