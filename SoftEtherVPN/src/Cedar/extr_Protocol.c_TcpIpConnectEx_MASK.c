
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int SOCK ;
typedef int IP ;


 int * FUNC_0 (char*,scalar_t__,int ,int*,void*,int,scalar_t__*,int,int *) ;

SOCK *FUNC_1(char *VAR_0, UINT VAR_1, bool *VAR_2, void *VAR_3, UINT *VAR_4, bool VAR_5, bool VAR_6, IP *VAR_7)
{
 SOCK *VAR_8 = ((void*)0);
 UINT VAR_9 = 0;

 if (VAR_4 == ((void*)0))
 {
  VAR_4 = &VAR_9;
 }
 *VAR_4 = 0;
 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return ((void*)0);
 }

 VAR_8 = FUNC_0(VAR_0, VAR_1, 0, VAR_2, VAR_3, VAR_5, VAR_4, VAR_6, VAR_7);
 if (VAR_8 == ((void*)0))
 {
  return ((void*)0);
 }

 return VAR_8;
}
