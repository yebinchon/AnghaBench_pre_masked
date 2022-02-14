
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int UCHAR ;



void FUNC_0(void *VAR_0, void *VAR_1, void *VAR_2, UINT VAR_3)
{
 UINT VAR_4;
 UCHAR *VAR_5, *VAR_6, *VAR_7;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0)
 {
  return;
 }

 VAR_5 = (UCHAR *)VAR_0;
 VAR_6 = (UCHAR *)VAR_1;
 VAR_7 = (UCHAR *)VAR_2;

 for (VAR_4 = 0;VAR_4 < VAR_3;VAR_4++)
 {
  *VAR_5 = (*VAR_6) ^ (*VAR_7);

  VAR_5++;
  VAR_6++;
  VAR_7++;
 }
}
