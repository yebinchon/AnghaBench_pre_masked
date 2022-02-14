
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef void UCHAR ;


 int FUNC_0 (void*,void*,scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;

void *FUNC_2(void *VAR_0, UINT VAR_1, void *VAR_2, UINT VAR_3)
{
 void *VAR_4;
 UINT VAR_5;

 if ((VAR_0 == ((void*)0) && VAR_1 != 0) || (VAR_2 == ((void*)0) && VAR_3 != 0))
 {
  return ((void*)0);
 }

 VAR_5 = VAR_1 + VAR_3;

 VAR_4 = FUNC_1(VAR_5);

 FUNC_0(VAR_4, VAR_2, VAR_3);

 FUNC_0(((UCHAR *)VAR_4) + VAR_3, VAR_0, VAR_1);

 return VAR_4;
}
