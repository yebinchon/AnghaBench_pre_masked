
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef long u64 ;
typedef long u32 ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int std; int vbi_line_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int,int) ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_5 (int ) ;
 int FUNC_6 (int,int ,struct i2c_client*,char*,int,int,...) ;

void FUNC_7(struct i2c_client *VAR_7)
{
 struct cx25840_state *VAR_8 = FUNC_5(FUNC_3(VAR_7));
 v4l2_std_id VAR_9 = VAR_8->std;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20;
 u32 VAR_21, VAR_22, VAR_23;


 if (VAR_9 & ~VAR_1)
  FUNC_2(VAR_7, 0x49f, 0x11);
 else
  FUNC_2(VAR_7, 0x49f, 0x14);

 if (VAR_9 & VAR_0) {
  VAR_10 = 132;
  VAR_11 = 720;
  VAR_12 = 93;
  VAR_13 = 36;
  VAR_14 = 580;
  VAR_16 = 40;
  VAR_17 = 0x21f;
  VAR_18 = 2;

  if (VAR_9 & VAR_5) {
   VAR_19 = 0;
   VAR_20 = 0;
   VAR_15 = 0x0a425f;
  } else if (VAR_9 == VAR_4) {
   VAR_19 = 1;
   VAR_20 = 0x20;
   VAR_15 = 556453;
  } else {
   VAR_19 = 1;
   VAR_20 = 0x20;
   VAR_15 = 688739;
  }
 } else {
  VAR_11 = 720;
  VAR_10 = 122;
  VAR_14 = 487;
  VAR_18 = 1;
  VAR_19 = 1;

  VAR_17 = 0x21f;
  if (VAR_9 == VAR_2) {
   VAR_13 = 26;
   VAR_16 = 26;
   VAR_12 = 0x5b;
   VAR_18 = 2;
   VAR_20 = 0x20;
   VAR_15 = 688739;
  } else if (VAR_9 == VAR_3) {
   VAR_13 = 20;
   VAR_16 = 24;
   VAR_12 = 0x61;
   VAR_20 = 0x20;
   VAR_15 = 555452;
  } else {
   VAR_13 = 26;
   VAR_16 = 26;
   VAR_12 = 0x5b;
   VAR_20 = 0x66;
   VAR_15 = 556063;
  }
 }


 if (!FUNC_4(VAR_8)) {
  VAR_21 = FUNC_0(VAR_7, 0x108);
  VAR_22 = FUNC_1(VAR_7, 0x10c) & 0x1ffffff;
  VAR_23 = FUNC_0(VAR_7, 0x109);
  FUNC_6(1, VAR_6, VAR_7,
   "PLL regs = int: %u, frac: %u, post: %u\n",
   VAR_21, VAR_22, VAR_23);

  if (VAR_23) {
   int VAR_24, VAR_25;
   int VAR_26 = (28636363L * ((((u64)VAR_21) << 25L) + VAR_22)) >> 25L;

   VAR_26 /= VAR_23;
   FUNC_6(1, VAR_6, VAR_7, "PLL = %d.%06d MHz\n",
     VAR_26 / 1000000, VAR_26 % 1000000);
   FUNC_6(1, VAR_6, VAR_7, "PLL/8 = %d.%06d MHz\n",
     VAR_26 / 8000000, (VAR_26 / 8) % 1000000);

   VAR_24 = ((u64)VAR_17 * VAR_26) >> 12;
   FUNC_6(1, VAR_6, VAR_7,
     "ADC Sampling freq = %d.%06d MHz\n",
     VAR_24 / 1000000, VAR_24 % 1000000);

   VAR_25 = (((u64)VAR_15) * VAR_26) >> 24L;
   FUNC_6(1, VAR_6, VAR_7,
     "Chroma sub-carrier freq = %d.%06d MHz\n",
     VAR_25 / 1000000, VAR_25 % 1000000);

   FUNC_6(1, VAR_6, VAR_7, "hblank %i, hactive %i, "
    "vblank %i, vactive %i, vblank656 %i, src_dec %i, "
    "burst 0x%02x, luma_lpf %i, uv_lpf %i, comb 0x%02x, "
    "sc 0x%06x\n",
    VAR_10, VAR_11, VAR_13, VAR_14, VAR_16,
    VAR_17, VAR_12, VAR_18, VAR_19, VAR_20, VAR_15);
  }
 }


 FUNC_2(VAR_7, 0x470, VAR_10);
 FUNC_2(VAR_7, 0x471,
   0xff & (((VAR_10 >> 8) & 0x3) | (VAR_11 << 4)));
 FUNC_2(VAR_7, 0x472, VAR_11 >> 4);


 FUNC_2(VAR_7, 0x473, VAR_12);


 FUNC_2(VAR_7, 0x474, VAR_13);
 FUNC_2(VAR_7, 0x475,
   0xff & (((VAR_13 >> 8) & 0x3) | (VAR_14 << 4)));
 FUNC_2(VAR_7, 0x476, VAR_14 >> 4);
 FUNC_2(VAR_7, 0x477, VAR_16);


 FUNC_2(VAR_7, 0x478, 0xff & VAR_17);
 FUNC_2(VAR_7, 0x479, 0xff & (VAR_17 >> 8));


 FUNC_2(VAR_7, 0x47a, VAR_18 << 6 | ((VAR_19 << 4) & 0x30));


 FUNC_2(VAR_7, 0x47b, VAR_20);


 FUNC_2(VAR_7, 0x47c, VAR_15);
 FUNC_2(VAR_7, 0x47d, 0xff & VAR_15 >> 8);
 FUNC_2(VAR_7, 0x47e, 0xff & VAR_15 >> 16);


 if (VAR_9 & VAR_0) {
  FUNC_2(VAR_7, 0x47f, 0x01);
  VAR_8->vbi_line_offset = 5;
 } else {
  FUNC_2(VAR_7, 0x47f, 0x00);
  VAR_8->vbi_line_offset = 8;
 }
}
