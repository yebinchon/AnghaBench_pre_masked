
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int UCHAR ;



void FUNC_0(void *VAR_0, const UINT VAR_1)
{
 UINT VAR_2;
 UCHAR VAR_3;
 UCHAR *VAR_4, *VAR_5;

 if (VAR_0 == ((void*)0) || VAR_1 < 3)
 {
  return;
 }

 for (VAR_2 = 0, VAR_4 = (UCHAR *)VAR_0 + 1, VAR_5 = (UCHAR *)VAR_0 + (VAR_1 - 1); VAR_2 < (VAR_1 - 1 ) / 2; VAR_2++, VAR_4++, VAR_5--)
 {
  VAR_3 = *VAR_4;
  *VAR_4 = *VAR_5;
  *VAR_5 = VAR_3;
 }
}
