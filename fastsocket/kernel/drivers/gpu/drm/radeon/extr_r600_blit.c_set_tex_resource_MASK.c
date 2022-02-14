
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u64 ;
typedef int drm_radeon_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(drm_radeon_private_t *VAR_3,
   int VAR_4, int VAR_5, int VAR_6, int VAR_7, u64 VAR_8)
{
 uint32_t VAR_9, VAR_10, VAR_11;
 VAR_2;
 FUNC_3("\n");

 if (VAR_6 < 1)
  VAR_6 = 1;

 VAR_9 = (1 << 0);
 VAR_9 |= ((((VAR_7 >> 3) - 1) << 8) |
      ((VAR_5 - 1) << 19));

 VAR_10 = (VAR_4 << 26);
 VAR_10 |= ((VAR_6 - 1) << 0);

 VAR_11 = ((1 << 14) |
     (0 << 16) |
     (1 << 19) |
     (2 << 22) |
     (3 << 25));

 FUNC_1(9);
 FUNC_4(FUNC_2(VAR_0, 7));
 FUNC_4(0);
 FUNC_4(VAR_9);
 FUNC_4(VAR_10);
 FUNC_4(VAR_8 >> 8);
 FUNC_4(VAR_8 >> 8);
 FUNC_4(VAR_11);
 FUNC_4(0);
 FUNC_4(VAR_1 << 30);
 FUNC_0();

}
