
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_6(drm_radeon_private_t *VAR_14, int VAR_15, int VAR_16, int VAR_17, u64 VAR_18)
{
 u32 VAR_19;
 int VAR_20, VAR_21;
 VAR_13;
 FUNC_4("\n");

 VAR_17 = FUNC_1(VAR_17, 8);
 if (VAR_17 < 8)
  VAR_17 = 8;

 VAR_19 = ((VAR_15 << 2) | (1 << 27));
 VAR_20 = (VAR_16 / 8) - 1;
 VAR_21 = ((VAR_16 * VAR_17) / 64) - 1;

 if (((VAR_14->flags & VAR_12) > VAR_0) &&
     ((VAR_14->flags & VAR_12) < VAR_1)) {
  FUNC_2(21 + 2);
  FUNC_5(FUNC_3(VAR_9, 1));
  FUNC_5((VAR_2 - VAR_11) >> 2);
  FUNC_5(VAR_18 >> 8);
  FUNC_5(FUNC_3(VAR_10, 0));
  FUNC_5(2 << 0);
 } else {
  FUNC_2(21);
  FUNC_5(FUNC_3(VAR_9, 1));
  FUNC_5((VAR_2 - VAR_11) >> 2);
  FUNC_5(VAR_18 >> 8);
 }

 FUNC_5(FUNC_3(VAR_9, 1));
 FUNC_5((VAR_6 - VAR_11) >> 2);
 FUNC_5((VAR_20 << 0) | (VAR_21 << 10));

 FUNC_5(FUNC_3(VAR_9, 1));
 FUNC_5((VAR_8 - VAR_11) >> 2);
 FUNC_5(0);

 FUNC_5(FUNC_3(VAR_9, 1));
 FUNC_5((VAR_4 - VAR_11) >> 2);
 FUNC_5(VAR_19);

 FUNC_5(FUNC_3(VAR_9, 1));
 FUNC_5((VAR_7 - VAR_11) >> 2);
 FUNC_5(0);

 FUNC_5(FUNC_3(VAR_9, 1));
 FUNC_5((VAR_3 - VAR_11) >> 2);
 FUNC_5(0);

 FUNC_5(FUNC_3(VAR_9, 1));
 FUNC_5((VAR_5 - VAR_11) >> 2);
 FUNC_5(0);

 FUNC_0();
}
