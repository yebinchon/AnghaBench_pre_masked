
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u32 ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ drm_radeon_private_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static u32 FUNC_1(drm_radeon_private_t *VAR_3,
          u32 VAR_4,
          u32 VAR_5,
          u32 VAR_6)
{
 u32 VAR_7 = 0;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11[VAR_1];
 u32 VAR_12;
 u32 VAR_13;
 bool VAR_14;

 if (VAR_4 > VAR_1)
  VAR_4 = VAR_1;
 if (VAR_4 < 1)
  VAR_4 = 1;
 if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;
 if (VAR_5 < 1)
  VAR_5 = 1;

 VAR_8 = 0;
 VAR_9 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_0; ++VAR_13) {
  if (((VAR_6 >> VAR_13) & 1) == 0) {
   VAR_8 |= (1 << VAR_13);
   ++VAR_9;
  }
  if (VAR_9 == VAR_5)
   break;
 }

 if (VAR_9 == 0) {
  VAR_8 = 1;
  VAR_9 = 1;
 }

 if (VAR_9 != VAR_5)
  VAR_5 = VAR_9;

 switch (VAR_3->flags & VAR_2) {
 case 128:
 case 130:
  VAR_14 = 0;
  break;
 case 131:
 case 129:
 default:
  VAR_14 = 1;
  break;
 }

 FUNC_0((uint8_t *)&VAR_11[0], 0, sizeof(u32) * VAR_1);
 switch (VAR_4) {
 case 1:
  VAR_11[0] = 0;
  break;
 case 2:
  VAR_11[0] = 0;
  VAR_11[1] = 1;
  break;
 case 3:
  if (VAR_14) {
   VAR_11[0] = 0;
   VAR_11[1] = 1;
   VAR_11[2] = 2;
  } else {
   VAR_11[0] = 0;
   VAR_11[1] = 2;
   VAR_11[2] = 1;
  }
  break;
 case 4:
  if (VAR_14) {
   VAR_11[0] = 0;
   VAR_11[1] = 1;
   VAR_11[2] = 2;
   VAR_11[3] = 3;
  } else {
   VAR_11[0] = 0;
   VAR_11[1] = 2;
   VAR_11[2] = 3;
   VAR_11[3] = 1;
  }
  break;
 case 5:
  if (VAR_14) {
   VAR_11[0] = 0;
   VAR_11[1] = 1;
   VAR_11[2] = 2;
   VAR_11[3] = 3;
   VAR_11[4] = 4;
  } else {
   VAR_11[0] = 0;
   VAR_11[1] = 2;
   VAR_11[2] = 4;
   VAR_11[3] = 1;
   VAR_11[4] = 3;
  }
  break;
 case 6:
  if (VAR_14) {
   VAR_11[0] = 0;
   VAR_11[1] = 1;
   VAR_11[2] = 2;
   VAR_11[3] = 3;
   VAR_11[4] = 4;
   VAR_11[5] = 5;
  } else {
   VAR_11[0] = 0;
   VAR_11[1] = 2;
   VAR_11[2] = 4;
   VAR_11[3] = 5;
   VAR_11[4] = 3;
   VAR_11[5] = 1;
  }
  break;
 case 7:
  if (VAR_14) {
   VAR_11[0] = 0;
   VAR_11[1] = 1;
   VAR_11[2] = 2;
   VAR_11[3] = 3;
   VAR_11[4] = 4;
   VAR_11[5] = 5;
   VAR_11[6] = 6;
  } else {
   VAR_11[0] = 0;
   VAR_11[1] = 2;
   VAR_11[2] = 4;
   VAR_11[3] = 6;
   VAR_11[4] = 3;
   VAR_11[5] = 1;
   VAR_11[6] = 5;
  }
  break;
 case 8:
  if (VAR_14) {
   VAR_11[0] = 0;
   VAR_11[1] = 1;
   VAR_11[2] = 2;
   VAR_11[3] = 3;
   VAR_11[4] = 4;
   VAR_11[5] = 5;
   VAR_11[6] = 6;
   VAR_11[7] = 7;
  } else {
   VAR_11[0] = 0;
   VAR_11[1] = 2;
   VAR_11[2] = 4;
   VAR_11[3] = 6;
   VAR_11[4] = 3;
   VAR_11[5] = 1;
   VAR_11[6] = 7;
   VAR_11[7] = 5;
  }
  break;
 }

 VAR_12 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_4; ++VAR_10) {
  while (((1 << VAR_12) & VAR_8) == 0)
   VAR_12 = (VAR_12 + 1) % VAR_0;

  VAR_7 |= (u32)(((VAR_12 & 3) << (VAR_11[VAR_10] * 2)));

  VAR_12 = (VAR_12 + 1) % VAR_0;
 }

 return VAR_7;
}
