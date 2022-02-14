
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__,scalar_t__*) ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_5 = 0, VAR_6 = 0;
 u32 *VAR_7;
 u32 *VAR_8;

 VAR_2 =
  VAR_1 + VAR_0 * VAR_4;

 if ((VAR_7 =
      (u32 *) FUNC_1(VAR_2,
         sizeof(u32) * VAR_4)) == ((void*)0))
  return;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  FUNC_3(VAR_1 + VAR_0 * VAR_6,
     VAR_7 + VAR_6);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  FUNC_0(VAR_6);


 VAR_8 =
     (u32 *)FUNC_1(*VAR_7,
       VAR_0 * VAR_4);

 if (!VAR_8)
  goto out;

 for (VAR_5 = 0; VAR_5 < VAR_4 * VAR_0 / sizeof(u32);
      VAR_5++)
  FUNC_3(0, VAR_8 + VAR_5);

 FUNC_2((u32 *)VAR_8);

out:
 FUNC_2((u32 *)VAR_7);
}
