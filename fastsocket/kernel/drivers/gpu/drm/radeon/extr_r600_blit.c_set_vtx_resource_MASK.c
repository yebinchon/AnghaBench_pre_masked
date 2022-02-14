
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u64 ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (TYPE_1__*,int ,int,int) ;

__attribute__((used)) static void
FUNC_6(drm_radeon_private_t *VAR_11, u64 VAR_12)
{
 uint32_t VAR_13;
 VAR_10;
 FUNC_3("\n");

 VAR_13 = (((VAR_12 >> 32) & 0xff) | (16 << 8));




 FUNC_1(9);
 FUNC_4(FUNC_2(VAR_5, 7));
 FUNC_4(0x460);
 FUNC_4(VAR_12 & 0xffffffff);
 FUNC_4(48 - 1);
 FUNC_4(VAR_13);
 FUNC_4(1 << 0);
 FUNC_4(0);
 FUNC_4(0);
 FUNC_4(VAR_6 << 30);
 FUNC_0();

 if (((VAR_11->flags & VAR_9) == VAR_2) ||
     ((VAR_11->flags & VAR_9) == VAR_3) ||
     ((VAR_11->flags & VAR_9) == VAR_0) ||
     ((VAR_11->flags & VAR_9) == VAR_1) ||
     ((VAR_11->flags & VAR_9) == VAR_4))
  FUNC_5(VAR_11,
        VAR_7, 48, VAR_12);
 else
  FUNC_5(VAR_11,
        VAR_8, 48, VAR_12);
}
