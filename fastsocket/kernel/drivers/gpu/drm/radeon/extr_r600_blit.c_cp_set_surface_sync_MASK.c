
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int drm_radeon_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(drm_radeon_private_t *VAR_2,
      u32 VAR_3, u32 VAR_4, u64 VAR_5)
{
 u32 VAR_6;
 VAR_1;
 FUNC_3("\n");

 if (VAR_4 == 0xffffffff)
  VAR_6 = 0xffffffff;
 else
  VAR_6 = ((VAR_4 + 255) >> 8);

 FUNC_1(5);
 FUNC_4(FUNC_2(VAR_0, 3));
 FUNC_4(VAR_3);
 FUNC_4(VAR_6);
 FUNC_4((VAR_5 >> 8));
 FUNC_4(10);
 FUNC_0();
}
