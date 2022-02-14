
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int BYTE ;



__attribute__((used)) static void FUNC_0 (void* VAR_0, const void* VAR_1, UINT VAR_2)
{
 BYTE *VAR_3 = (BYTE*)VAR_0;
 const BYTE *VAR_4 = (const BYTE*)VAR_1;

 if (VAR_2 != 0) {
  do {
   *VAR_3++ = *VAR_4++;
  } while (--VAR_2);
 }
}
