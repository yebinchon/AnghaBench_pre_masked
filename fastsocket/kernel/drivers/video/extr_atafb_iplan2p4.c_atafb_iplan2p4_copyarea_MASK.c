
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
typedef int u8 ;
typedef int u32 ;
struct fb_info {scalar_t__ screen_base; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int,int,int) ;

void FUNC_1(struct fb_info *VAR_1, u_long VAR_2,
        int VAR_3, int VAR_4, int VAR_5, int VAR_6,
        int VAR_7, int VAR_8)
{
 u8 *VAR_9, *VAR_10;
 u32 *VAR_11, *VAR_12;
 int VAR_13, VAR_14 , VAR_15, VAR_16;
 u_int VAR_17;
 u_int VAR_18 = (VAR_5 < VAR_3) || (VAR_5 == VAR_3 && VAR_6 < VAR_4);

 VAR_17 = VAR_7;
 if (!((VAR_4 ^ VAR_6) & 15)) {


  if (VAR_18) {
   VAR_9 = (u8 *)VAR_1->screen_base + VAR_3 * VAR_2 + (VAR_4 & ~15) / (8 / VAR_0);
   VAR_10 = (u8 *)VAR_1->screen_base + VAR_5 * VAR_2 + (VAR_6 & ~15) / (8 / VAR_0);
   if (VAR_4 & 15) {
    FUNC_0(VAR_10, VAR_9, 0xff00ff, VAR_7, VAR_2 - VAR_0 * 2);
    VAR_9 += VAR_0 * 2;
    VAR_10 += VAR_0 * 2;
    VAR_8 -= 8;
   }
   VAR_13 = VAR_8 >> 4;
   if (VAR_13) {
    VAR_11 = (u32 *)VAR_9;
    VAR_12 = (u32 *)VAR_10;
    VAR_13 *= VAR_0 / 2;
    VAR_14 = VAR_2 - VAR_13 * 4;
    for (VAR_16 = VAR_7; VAR_16 > 0; VAR_16--) {
     for (VAR_15 = VAR_13; VAR_15 > 0; VAR_15--)
      *VAR_12++ = *VAR_11++;
     VAR_11 = (u32 *)((u8 *)VAR_11 + VAR_14);
     VAR_12 = (u32 *)((u8 *)VAR_12 + VAR_14);
    }
   }
   if (VAR_8 & 15)
    FUNC_0(VAR_10 + VAR_8 / (8 / VAR_0), VAR_9 + VAR_8 / (8 / VAR_0),
           0xff00ff00, VAR_7, VAR_2 - VAR_0 * 2);
  } else {
   VAR_9 = (u8 *)VAR_1->screen_base + (VAR_3 - 1) * VAR_2 + ((VAR_4 + VAR_8 + 8) & ~15) / (8 / VAR_0);
   VAR_10 = (u8 *)VAR_1->screen_base + (VAR_5 - 1) * VAR_2 + ((VAR_6 + VAR_8 + 8) & ~15) / (8 / VAR_0);

   if ((VAR_4 + VAR_8) & 15) {
    VAR_9 -= VAR_0 * 2;
    VAR_10 -= VAR_0 * 2;
    FUNC_0(VAR_10, VAR_9, 0xff00ff00, VAR_17, -VAR_2 - VAR_0 * 2);
    VAR_8 -= 8;
   }
   VAR_13 = VAR_8 >> 4;
   if (VAR_13) {
    VAR_11 = (u32 *)VAR_9;
    VAR_12 = (u32 *)VAR_10;
    VAR_13 *= VAR_0 / 2;
    VAR_14 = VAR_2 - VAR_13 * 4;
    for (VAR_16 = VAR_7; VAR_16 > 0; VAR_16--) {
     for (VAR_15 = VAR_13; VAR_15 > 0; VAR_15--)
      *--VAR_12 = *--VAR_11;
     VAR_11 = (u32 *)((u8 *)VAR_11 - VAR_14);
     VAR_12 = (u32 *)((u8 *)VAR_12 - VAR_14);
    }
   }
   if (VAR_4 & 15)
    FUNC_0(VAR_10 - (VAR_8 - 16) / (8 / VAR_0),
           VAR_9 - (VAR_8 - 16) / (8 / VAR_0),
           0xff00ff, VAR_17, -VAR_2 - VAR_0 * 2);
  }
 } else {

  if (VAR_18) {
   u32 *VAR_19, *VAR_20;
   u32 VAR_21[4], VAR_22, VAR_23, VAR_24;
   int VAR_25, VAR_26, VAR_27, VAR_28;

   VAR_9 = (u8 *)VAR_1->screen_base + VAR_3 * VAR_2 + (VAR_4 & ~15) / (8 / VAR_0);
   VAR_10 = (u8 *)VAR_1->screen_base + VAR_5 * VAR_2 + (VAR_6 & ~15) / (8 / VAR_0);

   VAR_24 = 0xff00ff00;
   VAR_28 = 0;
   VAR_27 = VAR_8;
   if (VAR_4 & 15) {
    VAR_28 = 1;
    VAR_27 += 8;
   }
   if ((VAR_4 + VAR_8) & 15)
    VAR_28 |= 2;
   VAR_27 >>= 4;
   for (VAR_25 = VAR_7; VAR_25; VAR_25--) {
    VAR_19 = (u32 *)VAR_9;
    VAR_20 = (u32 *)VAR_10;

    if (VAR_28 & 1) {
     VAR_21[0] = (*VAR_19++ << 8) & VAR_24;
     VAR_21[1] = (*VAR_19++ << 8) & VAR_24;
    } else {
     VAR_21[0] = VAR_20[0] & VAR_24;
     VAR_21[1] = VAR_20[1] & VAR_24;
    }

    for (VAR_26 = VAR_27; VAR_26 > 0; VAR_26--) {
     VAR_22 = *VAR_19++;
     VAR_23 = VAR_22 & VAR_24;
     *VAR_20++ = VAR_21[0] | (VAR_23 >> 8);
     VAR_21[0] = (VAR_22 ^ VAR_23) << 8;
     VAR_22 = *VAR_19++;
     VAR_23 = VAR_22 & VAR_24;
     *VAR_20++ = VAR_21[1] | (VAR_23 >> 8);
     VAR_21[1] = (VAR_22 ^ VAR_23) << 8;
    }

    if (VAR_28 & 2) {
     VAR_20[0] = (VAR_20[0] & VAR_24) | VAR_21[0];
     VAR_20[1] = (VAR_20[1] & VAR_24) | VAR_21[1];
    }

    VAR_9 += VAR_2;
    VAR_10 += VAR_2;
   }
  } else {
   u32 *VAR_29, *VAR_30;
   u32 VAR_31[4], VAR_32, VAR_33, VAR_34;
   int VAR_35, VAR_36, VAR_37, VAR_38;

   VAR_9 = (u8 *)VAR_1->screen_base + (VAR_3 - 1) * VAR_2 + ((VAR_4 + VAR_8 + 8) & ~15) / (8 / VAR_0);
   VAR_10 = (u8 *)VAR_1->screen_base + (VAR_5 - 1) * VAR_2 + ((VAR_6 + VAR_8 + 8) & ~15) / (8 / VAR_0);

   VAR_34 = 0xff00ff;
   VAR_38 = 0;
   VAR_37 = VAR_8;
   if ((VAR_6 + VAR_8) & 15)
    VAR_38 = 1;
   if (VAR_4 & 15) {
    VAR_38 |= 2;
    VAR_37 += 8;
   }
   VAR_37 >>= 4;
   for (VAR_35 = VAR_7; VAR_35; VAR_35--) {
    VAR_29 = (u32 *)VAR_9;
    VAR_30 = (u32 *)VAR_10;

    if (VAR_38 & 1) {
     VAR_31[0] = VAR_30[-1] & VAR_34;
     VAR_31[1] = VAR_30[-2] & VAR_34;
    } else {
     VAR_31[0] = (*--VAR_29 >> 8) & VAR_34;
     VAR_31[1] = (*--VAR_29 >> 8) & VAR_34;
    }

    for (VAR_36 = VAR_37; VAR_36 > 0; VAR_36--) {
     VAR_32 = *--VAR_29;
     VAR_33 = VAR_32 & VAR_34;
     *--VAR_30 = VAR_31[0] | (VAR_33 << 8);
     VAR_31[0] = (VAR_32 ^ VAR_33) >> 8;
     VAR_32 = *--VAR_29;
     VAR_33 = VAR_32 & VAR_34;
     *--VAR_30 = VAR_31[1] | (VAR_33 << 8);
     VAR_31[1] = (VAR_32 ^ VAR_33) >> 8;
    }

    if (!(VAR_38 & 2)) {
     VAR_30[-1] = (VAR_30[-1] & VAR_34) | VAR_31[0];
     VAR_30[-2] = (VAR_30[-2] & VAR_34) | VAR_31[1];
    }

    VAR_9 -= VAR_2;
    VAR_10 -= VAR_2;
   }
  }
 }
}
