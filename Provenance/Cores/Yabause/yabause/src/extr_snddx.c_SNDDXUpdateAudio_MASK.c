
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int s32 ;
typedef int s16 ;
typedef scalar_t__ LPVOID ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int ,int,scalar_t__*,int*,scalar_t__*,int*,int ) ;
 int FUNC_2 (int ,scalar_t__,int,scalar_t__,int) ;
 int FUNC_3 (int *,int *,int *,int) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;

void FUNC_5(u32 *VAR_5, u32 *VAR_6, u32 VAR_7)
{
   LPVOID VAR_8;
   LPVOID VAR_9;
   DWORD VAR_10, VAR_11;
   DWORD VAR_12;

   FUNC_0(VAR_1, &VAR_12);

   if (VAR_12 & VAR_0)
      return;

   FUNC_1(VAR_1, VAR_3, VAR_7 * sizeof(s16) * 2, &VAR_8, &VAR_10, &VAR_9, &VAR_11, 0);

   FUNC_3((s32 *)VAR_5, (s32 *)VAR_6, (s16 *)VAR_4, VAR_7);
   FUNC_4(VAR_8, VAR_4, VAR_10);
   if (VAR_9)
      FUNC_4(VAR_9, ((u8 *)VAR_4)+VAR_10, VAR_11);

   VAR_3 += VAR_10 + VAR_11;
   VAR_3 %= VAR_2;

   FUNC_2(VAR_1, VAR_8, VAR_10, VAR_9, VAR_11);
}
